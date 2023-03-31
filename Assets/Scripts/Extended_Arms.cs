using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Extended_Arms : MonoBehaviour
{
    [SerializeField] private GameObject handPlaceholder;
    [SerializeField] private GameObject physicsHand;
    [SerializeField] private OVRInput.Controller controller;

    public Vector3 localPositionExtended;
    public bool triggerd = false;
    public Vector2 stickPosition;
    
    // Start is called before the first frame update
    void Start()
    {
        //TODO: Extend Position speichern (wahrscheinlich lokal position) und sonst dann noch go-go schreiben da das hier mehr extended arme sind
        handPlaceholder.SetActive(false);
        physicsHand.SetActive(false);
        localPositionExtended = handPlaceholder.transform.localPosition;
    }

    // Update is called once per frame
    void Update()
    {
        //var rightTriggerValue = OVRInput.Get(OVRInput.Axis1D.PrimaryIndexTrigger, OVRInput.Controller.RTouch); 
        var rightTriggerValue = OVRInput.Get(OVRInput.Axis1D.PrimaryIndexTrigger, controller); 

        stickPosition = OVRInput.Get(OVRInput.Axis2D.PrimaryThumbstick, controller);
        if(rightTriggerValue > 0.95f)
        {
            if (stickPosition.x != 0)
            {
                localPositionExtended.x += (stickPosition.x * 0.3f);
                handPlaceholder.transform.localPosition = localPositionExtended;
            }

            if (stickPosition.y != 0)
            {
                localPositionExtended.z += (stickPosition.y * 0.1f);
                handPlaceholder.transform.localPosition = localPositionExtended;

            }
        }


        if (OVRInput.GetDown(OVRInput.Button.Two, controller))
        {
            if (!triggerd)
            {
                triggerd = true;       
                handPlaceholder.SetActive(true);
                physicsHand.SetActive(true);
                Debug.Log("Extend Aktiv");
                
            }
            else
            {
                physicsHand.SetActive(false);
                handPlaceholder.SetActive(false);
                Debug.Log("Extend Deaktiv");
                triggerd = false;
            }
               
        }
    }

}
