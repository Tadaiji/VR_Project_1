using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MyGrab : MonoBehaviour
{
    public OVRInput.Controller controller;
    private float triggerValue;
    private bool isInCollider;
    private bool isSelected = false;
    private GameObject selectedObj;
    private Transform prevParent;
    public SelectionTaskMeasure selectionTaskMeasure;

    void Update()
    {
        triggerValue = OVRInput.Get(OVRInput.Axis1D.PrimaryHandTrigger, controller);

        if (isInCollider || isSelected)
        {
            if (!isSelected && triggerValue > 0.95f)
            {
                Debug.Log("is Selected");
                isSelected = true;
                prevParent = selectedObj.transform.parent;
                selectedObj.transform.parent.transform.SetParent(transform);
            }
            else if (isSelected && triggerValue < 0.95f)
            {
                Debug.Log("is Unselected");
                //selectedObj.transform.parent.SetParent(prevParent);
                //selectedObj.transform.SetParent(null);
                //selectedObj.transform.parent.transform.parent = null;
                isSelected = false;
                selectedObj.transform.parent.transform.parent = null;
                
            }
        }
    }

    void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.CompareTag("objectT"))
        {
            if(!isSelected)
            {
                Debug.Log("is Colliding");
                isInCollider = true;
                selectedObj = other.gameObject;
            }
        }
        else if (other.gameObject.CompareTag("selectionTaskStart"))
        {
            if (!selectionTaskMeasure.isCountdown)
            {
                selectionTaskMeasure.isTaskStart = true;
                selectionTaskMeasure.StartOneTask();
            }
        }
        else if (other.gameObject.CompareTag("done"))
        {
            selectionTaskMeasure.isTaskStart = false;
            selectionTaskMeasure.EndOneTask();
        }
    }

    private void OnTriggerStay(Collider other)
    {
        if (other.gameObject.CompareTag("objectT"))
        {
            if(!isSelected)
            {
                isInCollider = true;
                selectedObj = other.gameObject;
            }
        }
    }

    void OnTriggerExit(Collider other)
    {
        if (other.gameObject.CompareTag("objectT"))
        {
            isInCollider = false;
            selectedObj = null;
        }
    }
}