using UnityEngine;

public class PlayerTurn : MonoBehaviour
{
    public Rigidbody player;

    public Transform rotator;

    public float speed = 10;
    
    void Update()
    {
        var joystickAxisVector2= OVRInput.Get(OVRInput.Axis2D.PrimaryThumbstick, OVRInput.Controller.RTouch);

        if (joystickAxisVector2.x >= .8f)
        {
            player.transform.RotateAround(rotator.position, rotator.up, speed * .1f);
        }
        if (joystickAxisVector2.x <= -.8f)
        {
            player.transform.RotateAround(rotator.position, rotator.up, speed * -.1f);
        }
        
    }
}
