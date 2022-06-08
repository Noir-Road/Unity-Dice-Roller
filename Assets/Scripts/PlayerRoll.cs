using UnityEngine;

public class PlayerRoll : MonoBehaviour
{
    [Header("Dice Properties")] 
    [SerializeField] float shakeForce; // The shake force that needs to be applied to Roll the Dice.

    [SerializeField] float upDiceForce; // The force that the Dice will lift upon passing the Shake Force treshold variable.

    [SerializeField] float airSpinEffect; // The rotation along the axis while the Dice is in the air. < The bigger the value, the rotation will be faster >

    [SerializeField] Rigidbody rb;

    public enum Dice
    {
        IDLE,
        ROLLING
    } // Either the Dice is Rolling or Idle

    public Dice state;
    public Vector3 shaker; // Vector3 (x,y,z) values of the Dice

    void Update()
    {
        // If the velocity of the dice is not zero, then is rolling
        if (rb.velocity != Vector3.zero) state = Dice.ROLLING;
        // If is rolling, then cannot roll again until the Dice stop
        if (state == Dice.ROLLING) return;
        
        // By shaking the phone we create a new acceleration.
        shaker = Input.acceleration;

      // If that acceleration is greater than OR if we press the space bar - Then it will execute the below
        if (shaker.sqrMagnitude >= shakeForce || Input.GetKeyDown("space"))
        {
            RollDice();
        }
    }

    void RollDice()
    {
        float dirX = RandomVelocity(); //
        float dirY = RandomVelocity(); //   Requesting Random Values from all Axis
        float dirZ = RandomVelocity(); //
        // transform.position = new Vector3(0, .39f, 0); // Manual position
        transform.rotation = Quaternion.identity; //Aligned for all axis
        rb.AddForce(transform.up * upDiceForce); // Raise the dice force
        rb.AddTorque(dirX, dirY, dirZ); // Apply torque in all axis
    }

    // If the airSpinEffect value is = 500, it will assign a number between -500 & 500 and it will assign to an axis (X,Y,Z)
    float RandomVelocity() => Random.Range(-airSpinEffect, airSpinEffect); // Random Velocity for all axis
}
