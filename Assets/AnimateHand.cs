using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.InputSystem;

public class AnimateHand : MonoBehaviour
{
    [SerializeField] private float triggerValue;
    [SerializeField] private float gripValue;
    [SerializeField] private OVRInput.Controller controller;

    [SerializeField] private Animator handAnimator;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        triggerValue = OVRInput.Get(OVRInput.Axis1D.PrimaryHandTrigger, controller);
        //triggerValue = OVRInput.Get(OVRInput.Axis1D.PrimaryIndexTrigger, OVRInput.Controller.RTouch);
        handAnimator.SetFloat("Trigger", triggerValue);

        gripValue = OVRInput.Get(OVRInput.Axis1D.PrimaryIndexTrigger, controller);
        handAnimator.SetFloat("Grip", gripValue);
    }
}
