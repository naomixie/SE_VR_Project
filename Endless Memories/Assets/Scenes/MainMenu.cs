using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
//using System.Runtime.Hosting;
using UnityEngine;
using UnityEngine.SceneManagement;

public class MainMenu : MonoBehaviour
{
    public void PlayGame()
    {
        SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex + 1);
    }
    public void QuitGame()
    {
        UnityEngine.Debug.Log("QUIT!");
        Application.Quit();
    }
}