using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UIElements;

public class SimplePlayerController : MonoBehaviour
{
    bool canUp, canDown, canLeft, canRight = false;
    Rigidbody rb;
    float speed = 10;
    // Start is called before the first frame update
    void Start()
    {
        rb = GetComponent<Rigidbody>();
    }

    void Move(float x, float z){
        rb.velocity = new Vector3(x*speed, x*speed/2, z*speed);
    }

    void Rotate(float x, float z)
    {
        //rb.rotation = new Quaternion(x*speed, x*speed/2, z*speed, Single.PositiveInfinity);
    }

    // Update is called once per frame
    void Update()
    {
       //Move(Input.GetAxis("Horizontal"),Input.GetAxis("Vertical"));
       Rotate(Input.GetAxis("Horizontal"),Input.GetAxis("Vertical"));
    }
}
