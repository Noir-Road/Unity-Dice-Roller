using UnityEngine;
public class PlayerRoll : MonoBehaviour
{
    [Header("Bomb Cooldown")] 
    [SerializeField] float shakeForce;
    [SerializeField] private float upDiceForce;
    [SerializeField] Rigidbody rb;
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
             
        if (shaker.sqrMagnitude <= shakeForce) return;
        
        state = Dice.ROLLING;
        float dirX = RandomVelocity();
        float dirY = RandomVelocity();
        float dirZ = RandomVelocity();
       // transform.position = new Vector3(0, .39f, 0);
        transform.rotation = Quaternion.identity; //Aligned for all axis
        rb.AddForce(transform.up * upDiceForce); // Raise the dice force
        rb.AddTorque(dirX,dirY,dirZ); // Apply torque in all axis
    }
    float RandomVelocity() => Random.Range(0, 500); // Random Velocity for all axis
}