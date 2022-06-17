using TMPro;
using UnityEngine;

public class CheckDicePos : MonoBehaviour
{
    [SerializeField] PlayerRoll player;
    [SerializeField] TextMeshProUGUI score;
    void OnTriggerStay(Collider dice)
    {
        if (player.shaker != Vector3.zero) return; // Will check if the velocity of the dice is zero upon landing before updating the UI 
        player.state = PlayerRoll.Dice.IDLE;        // & change the state back to idle, so it can roll again
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
