using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GoGoArms : MonoBehaviour
{
    [SerializeField] private Transform origin_transform;
    
    [SerializeField] private GameObject target;
    
    [SerializeField] private float threshold; //D
    [SerializeField] private float coefficient; //k
    
    public float origin_magnitude;
    public Vector3 origin_position; //RR
    public Vector3 virtual_position; //RV

    private float lenght = 0;
    
    
    
    // Start is called before the first frame update
    void Start()
    {
        origin_position = origin_transform.position;
    }

    // Update is called once per frame
    void Update()
    {
        //TODO: Überlegen ob localPosition oder worldPosition, vielleicht auch gameObject an Controller als Anker hängen und schauen ob besser. 
        //Oder dieses Script in das Physics hands script einbauen, da das die hände eigentlich steuert
        
        origin_position = origin_transform.localPosition;
        //origin_position = origin_transform.position;
        
        //TODO: Magnitude noch nicht optimal
        origin_magnitude = origin_position.magnitude;
        
        if (origin_magnitude > threshold)
        {
            //Zuerst length ausrechnen 
            lenght = origin_position.magnitude + coefficient*Mathf.Pow((origin_position.magnitude - coefficient), 2f);
            
            //Dann length auf Vector multiplizieren
            virtual_position = origin_position * (lenght);
            
            target.transform.localPosition = virtual_position;
            //target.transform.position = virtual_position;
        }
        
    }
}
