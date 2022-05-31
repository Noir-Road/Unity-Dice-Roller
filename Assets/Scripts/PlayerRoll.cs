using UnityEngine;
public class PlayerRoll : MonoBehaviour
{
    [Header("Dice Cooldown")] 
    [SerializeField] float shakeForce; // The force that will be applied to the phone in order to execute RollDice method.
    [SerializeField] private float upDiceForce; // The force that will be applied to the dice to go up
    [SerializeField] Rigidbody rb; // Objects Physics
    public enum Dice{ IDLE, ROLLING } 
    public Dice state;
    public Vector3 shaker;
    
    void Update()
    {
        RollDice();
    }

    void RollDice()
    {
        shaker = rb.velocity;
        if(state == Dice.ROLLING) return;
        shaker = Input.acceleration;
             // Shake & if is greater than X, then it will launch the dice upwards.
        if (shaker.sqrMagnitude <= shakeForce) return;
        
        state = Dice.ROLLING;
        float dirX = RandomVelocity();
        float dirY = RandomVelocity();
        float dirZ = RandomVelocity();
       // transform.position = new Vector3(0, .39f, 0); // Restart Dice from fixed position ?
        transform.rotation = Quaternion.identity; //Aligned for all axis
        rb.AddForce(transform.up * upDiceForce); // Raise the dice force
        rb.AddTorque(dirX,dirY,dirZ); // Apply torque in all axis
    }
    float RandomVelocity() => Random.Range(0, 500); // Random Velocity for all axis
}
