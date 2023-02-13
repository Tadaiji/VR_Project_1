using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AnimationTrigger : MonoBehaviour
{
    [SerializeField] private Animation anim;

    // Start is called before the first frame update
    void Start()
    {
        anim.Stop();
    }

    private void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.layer == 8)
        {
            if (anim.isPlaying)
            {
                return;
            }

            anim.Play();
        }
    }

    private void OnTriggerStay(Collider other)
    {
        if (other.gameObject.layer == 8)
        {
            if (anim.isPlaying)
            {
                return;
            }

            anim.Play();
        }
    }

    private void OnTriggerExit(Collider other)
    {
        if (!anim.isPlaying)
        {
            return;
        }
        anim.Stop();
    }
    
}
