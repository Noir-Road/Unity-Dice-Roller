using System;
using System.Collections;
using UnityEngine;
// This script handles the Game state { PAUSED OR UN-PAUSED }
public class GameManager : MonoBehaviour
{
    [Header("Pause Menu Configs")] 
    [SerializeField] CanvasGroup cAlpha;
    [SerializeField] float duration;

    [Header(("Canvas"))] 
    [SerializeField] GameObject gameplayCanvas;
    [SerializeField] GameObject pauseMenu;
    float current;
    float scaled;
    float unscaled;
    enum GameState {Paused, Gaming}
    GameState state = GameState.Gaming;

    void Awake()
    {   // Storing in vars, both times. {Scaled, Unscaled}
        scaled = Time.deltaTime;
        unscaled = Time.unscaledDeltaTime;
    }

    public void PauseGame()
    {
        switch (state)
        {
            case GameState.Gaming:
                state = GameState.Paused;
                Time.timeScale = 0f; // Paused
                HideUI(false);
                StartCoroutine(PauseUI(0f, 1f, unscaled));
                break;
            case GameState.Paused:
                state = GameState.Gaming;
                Time.timeScale = 1f; // Un-paused {Gaming State}
                HideUI(true);
                StartCoroutine(PauseUI(1f, 0f, scaled));
                break;
        }
    }
    // Fade Effect coroutine, depending the state, must pass Time Scale (not paused) or Unscaled (paused)
    IEnumerator PauseUI(float targetA, float targetB, float _time)
    {
        if (state == GameState.Paused) pauseMenu.SetActive(true);
        while (current < duration)
        {
            current += _time;
            cAlpha.alpha = Mathf.Lerp(targetA, targetB, current / duration);
            yield return null;
        }
        if (state == GameState.Gaming) pauseMenu.SetActive(false);
        current = 0f;
    }
    void HideUI(bool status)
    {
        gameplayCanvas.SetActive(status);
    }
}
