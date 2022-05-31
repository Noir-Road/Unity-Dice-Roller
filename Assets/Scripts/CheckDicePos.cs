using TMPro;
using UnityEngine;
using UnityEngine.SubsystemsImplementation;
// This script handles the position once the Dice land on ground {Cube}
public class CheckDicePos : MonoBehaviour
{
    Vector3 diceVelocity;
    [SerializeField] PlayerRoll player;
    [SerializeField] TextMeshProUGUI score;

    void FixedUpdate()
    {
        diceVelocity = player.shaker; // Checking velocity from Dice, grabbing vars from PlayerRoll.cs
    }

    void OnTriggerStay(Collider dice)
    {
        // Check if the dice velocity in all axis is ZERO
     if (diceVelocity.x == 0f & diceVelocity.y == 0f && diceVelocity.z == 0f)
     {  //If is Zero, then we can roll again and it will read wich face is facing ground so it can write the score on GUI.
         player.state = PlayerRoll.Dice.IDLE;
         
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
