using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class FindClosest : MonoBehaviour {

	

	// Start is called before the first frame update
    void Start()
    {


    }
	

	// Update is called once per frame
	void Update () {
		FindClosestEnemy ();
	}

	void FindClosestEnemy()
	{
		float distanceToClosestEnemy = Mathf.Infinity;
		Enemy closestEnemy = null;
		MakePostcard postcardInfo = null;
		string name;
		string description;
		string link;
		Enemy[] allEnemies = GameObject.FindObjectsOfType<Enemy>();
		GameObject arCamera = GameObject.Find("AR Camera");
		Text infoPanel = GameObject.Find("InfoText").GetComponent<Text>();
		//Vector3 arCameraPosition;

			foreach (Enemy currentEnemy in allEnemies) {
				float distanceToEnemy = (currentEnemy.transform.position - arCamera.transform.position).sqrMagnitude;

				//trackedImageDistance = Vector3.Distance(arCameraPosition, trackedImagePosition);


				if (distanceToEnemy < distanceToClosestEnemy) {
					distanceToClosestEnemy = distanceToEnemy;
					closestEnemy = currentEnemy;
				}
			}

		if (closestEnemy != null) {

			Debug.Log (closestEnemy.name);
			postcardInfo = GameObject.Find(closestEnemy.name).GetComponent<MakePostcard>();
			name = postcardInfo.PostcardName;
			description = postcardInfo.PostcardDescription;
			link = postcardInfo.PostcardLink;
			infoPanel.text = "<b>" + name + "</b>" + "\n" + description;

		}

	}

}