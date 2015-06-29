using UnityEngine;
using System.Collections;

public interface RMXBehaviour {
 	void enableScript();
	void disableScript();

	bool scriptEnabled { get; }

}
