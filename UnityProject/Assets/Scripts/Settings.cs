using UnityEngine;
using System.Collections;
using RMX;

namespace AiCubo {
	public class Settings : ASettings<Settings> {


		public override TextAsset Database {
			get {
				throw new System.NotImplementedException ();
			}
		}

		public float _maxDisplayTime = 5;
		public override float MaxDisplayTime {
			get {
				return _maxDisplayTime;
			}
		}

		public bool _printToScreen;
		public override bool PrintToScreen {
			get {
				return _printToScreen;
			}
			set {
				_printToScreen = value;
			}
		}

		public override bool IsDebugging (string feature)
		{
			return DebugMisc;
		}
		// Use this for initialization
		void Start () {
		
		}
		
		// Update is called once per frame
		void Update () {
		
		}
	}
}