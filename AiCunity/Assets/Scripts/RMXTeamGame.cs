using UnityEngine;
using System.Collections;


	public interface RMXTeamGame  {

		void addTeam(RMXTeam team);
		RMXMasterControl masterControl {
			get;
		}
		DictionaryBase teams {
			get;
		}
	}
