using UnityEngine;
using System.Collections;


	public class RMX {

		public static Color RandomColor() {
			var color = new Color ();
			color.a = 1f;
			color.b = Random.value;
			color.g = Random.value;
			color.r = Random.value;
			return color;
		}
	}
