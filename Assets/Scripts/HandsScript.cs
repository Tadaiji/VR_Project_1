using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;

public class HandsScript: MonoBehaviour
{


    [SerializeField] private GameObject player;

    //Stuff for the inspector
    [Header("PID")] [SerializeField] float frequency = 50f;
    [SerializeField] float damping = 1f;
    [SerializeField] Transform target;
    [SerializeField] Rigidbody playerRigidbody;

    [SerializeField] float rotFrequency = 100f;
    [SerializeField] float rotDamping = 0.9f;

    [Space] [Header("HookesLaw")] [SerializeField]
    float climbForce = 500f;

    [SerializeField] float climbDrag = 250f;
    private bool _isColliding = false;

    private Vector3 _previousPosition;

    private Rigidbody _rigidbody;

    [Header("Go-Go Arms")] [SerializeField]
    private Transform origin_transform;
    
    [SerializeField] private float threshold; //D
    [SerializeField] private float coefficient; //k
    
    //public Vector3 origin_position; //RR  //Hier wird einfach direkt auf Origin_transform.position zugegriffen
    //public Vector3 virtual_position; //RV //Das wird dann zum GameObject Transform.position

    public float lenght = 0;
    public float distance = 0;

    //ToDo: Schauen was das displacement der Hande durch das Go-Go verursacht in der berechnung der sprungkraft 

    void Start()
    {
        //teleport physics directly to player position
        transform.position = target.position;
        transform.rotation = target.rotation;

        _rigidbody = GetComponent<Rigidbody>();

        // Eliminates upper limit of the rotation of the hands
        _rigidbody.maxAngularVelocity = float.PositiveInfinity;

        _previousPosition = transform.position;
    }

    // Update is called once per frame
    void Update()
    {
        distance = Vector3.Distance(transform.position, origin_transform.position);

        if (distance > threshold)
        {
            //Zuerst length ausrechnen 
            float m = origin_transform.position.magnitude;
            lenght = m + coefficient * Mathf.Pow((m - coefficient), 2f);

            //Dann length auf Vector multiplizieren
            transform.position = target.forward * (lenght);
            //transform.position = target.TransformDirection(target.forward) * (lenght);
            //transform.position = transform.TransformVector(target.TransformDirection(target.forward) * (lenght));
            //transform.position = target.position * (lenght);
            //transform.Translate(target.forward * lenght);
        }
    }


    void FixedUpdate()
    {
        //Debug.Log(_rigidbody.position);

        PIDMovement();
        PIDRotation();
        if (_isColliding)
        {
            HookesLaw();
        }

        //Hier noch aktuell rotation auf richtige position und das dann zukünftig in die Rotation einbauen
    }

    void HookesLaw()
    {
        //How compressed is the spring
        Vector3 displacementFromResting = transform.position - target.position;
        Vector3 force = displacementFromResting * climbForce;
        float drag = GetDrag();

        playerRigidbody.AddForce(force, ForceMode.Acceleration);
        playerRigidbody.AddForce(drag * -playerRigidbody.velocity * climbDrag, ForceMode.Acceleration);
    }

    float GetDrag()
    {
        Vector3 handVelocity = (target.localPosition - _previousPosition) / Time.fixedDeltaTime;

        //Inverse, add small number to avoid devide by 0, the faster we move the less drag and the slower more drag
        float drag = 1 / (handVelocity.magnitude + 0.01f);
        drag = Math.Clamp(drag, 0.03f, 1f);

        _previousPosition = transform.position;

        return drag;
    }

    void PIDMovement()
    {
        //target = to follow 

        //p
        float kp = (6f * frequency) * (6f * frequency) * 0.25f;
        //d
        float kd = 4.5f * frequency * damping;

        float g = 1 / (1 + kd * Time.fixedDeltaTime + kp * Time.fixedDeltaTime * Time.fixedDeltaTime);
        float ksg = kp * g;
        float kdg = (kd + kp * Time.fixedDeltaTime) * g;

        //calculate how much force/acceleration to add to physics hand
        Vector3 force = (target.position - transform.position) * ksg +
                        (playerRigidbody.velocity - _rigidbody.velocity) * kdg;

        _rigidbody.AddForce(force, ForceMode.Acceleration);
    }

    void PIDRotation()
    {
        //p
        float kp = (6f * rotFrequency) * (6f * rotFrequency) * 0.25f;
        //d
        float kd = 4.5f * rotFrequency * rotDamping;

        float g = 1 / (1 + kd * Time.fixedDeltaTime + kp * Time.fixedDeltaTime * Time.fixedDeltaTime);
        float ksg = kp * g;
        float kdg = (kd + kp * Time.fixedDeltaTime) * g;
        //Quaternion target_rot = target.rotation;
        //target_rot.x += 90;
        //Quaternion q = target_rot * Quaternion.Inverse(transform.rotation);
        Quaternion q = target.rotation * Quaternion.Inverse(transform.rotation);

        if (q.w < 0)
        {
            q.x = -q.x;
            q.y = -q.y;
            q.z = -q.z;
            q.w = -q.w;
        }
        else
        {
            //q.x = q.x + 90 ;
        }

        q.ToAngleAxis(out float angle, out Vector3 axis);
        axis.Normalize();
        axis *= Mathf.Deg2Rad;
        Vector3 torque = ksg * axis * angle + -_rigidbody.angularVelocity * kdg;

        _rigidbody.AddTorque(torque, ForceMode.Acceleration);
    }

    private void OnCollisionEnter(Collision collision)
    {
        _isColliding = true;

    }

    private void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.CompareTag("coin"))
        {
            player.GetComponent<LocomotionTechnique>().coin(other);
        }
    }

    private void OnCollisionExit(Collision other)
    {
        _isColliding = false;
    }
}

