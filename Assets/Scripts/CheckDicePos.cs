using TMPro;
using UnityEngine;
using UnityEngine.SubsystemsImplementation;

public class CheckDicePos : MonoBehaviour
{
    Vector3 diceVelocity;
    [SerializeField] PlayerRoll player;
    [SerializeField] TextMeshProUGUI score;

    void FixedUpdate()
    {
        diceVelocity = player.shaker;
    }

    void OnTriggerStay(Collider dice)
    {
        // Check if the dice velocity in all axis is ZERO
     if (diceVelocity.x == 0f & diceVelocity.y == 0f && diceVelocity.z == 0f)
     {
         player.state = PlayerRoll.Dice.IDLE;
         // Can roll again
         score.text = dice.gameObject.name switch // Set score on UI
         {
             "Side 1" => "6",
             "Side 2" => "5",
             "Side 3" => "4",
             "Side 4" => "3",
             "Side 5" => "2",
             "Side 6" => "1",
             _ => score.text
         };
     }
    
    }
}