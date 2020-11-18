using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Control_sound : MonoBehaviour
{
    public AudioSource asound;
    public Slider sd;
    public Slider sd1;
    public Text adoVolumeTxt;
    public Text adoVolumeTxt1;
    public Light lt;

    // Start is called before the first frame update
    void Start()
    {
        sd.onValueChanged.AddListener(delegate { ValueChangeCheck(); });
        sd1.onValueChanged.AddListener(delegate { ValueChangeCheck(); });

        sd.value = 0.6f;
        sd1.value = 0.0f;
        lt.intensity = 0.5f;
        adoVolumeTxt.text = "60.0%";
    }

    // Update is called once per frame
    void Update()
    {

    }

    private void ValueChangeCheck()
    {

        adoVolumeTxt.text = string.Format("{0:F1}%", sd.value * 100);
        adoVolumeTxt1.text = string.Format("{0:F1}", sd1.value * 15);
    }
    public void con_sound()
    {
        asound.volume = sd.value;

    }
    public void con_light()
    {
        float n = sd1.value * 15;
        lt.intensity = n;
    }
    public void con_lowquality()
    {
        string[] names = QualitySettings.names;

        //调节低画质



        QualitySettings.SetQualityLevel(2, true);
        Debug.Log(QualitySettings.names[1].ToString());
    }
    public void con_highquality()
    {
        string[] names = QualitySettings.names;

        //调节高画质
        


        QualitySettings.SetQualityLevel(4, true);
        Debug.Log(QualitySettings.names[3].ToString());
    }
    /* if (GUI.Button(new Rect(500, 500, 100, 80), "调高画质"))
     {
         QualitySettings.SetQualityLevel(4, true);
          Debug.Log(QualitySettings.names[4].ToString());
    }
      string[] names = QualitySettings.names;
      GUILayout.BeginVertical();

      for (int i = 0; i < names.Length; i++)
      {
          if ()//GUILayout.Button(names[i])
          {
              QualitySettings.SetQualityLevel(i, true);
          }
      }
      GUILayout.EndVertical(); 
}*/

}

