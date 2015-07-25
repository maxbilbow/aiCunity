using UnityEngine;
using System.Collections;
using AiCubo;
//typealias ScoreCard = (kills: Int, deaths: Int, points: Int)
//	typealias TeamStats = (score: ScoreCard, players: Int, livePlayers: Int)

	public class RMXTeam : MonoBehaviour {
		public struct ScoreCard {
			public int kills;
			public int deaths;
			public int points;
		}

		public struct TeamStats {
			RMXTeam team;
			public int livePlayers {
				get {
					var players = team.players;
	//				var livePlayers = players.filter { (player) -> Bool in
	//					return player.attributes.isAlive
	//				}
					return 0;
				}
			}
			public int totalPlayers {
				get {
					return 0;
				}
			}
			public int kills {
				get {
					return team.scoreCard.kills;
				}
			}
			public int deaths {
				get {
					return team.scoreCard.deaths;
				}
			}
			public int points {
				get {
					return team.scoreCard.points;
				}
			}
		}
		static int Count = 0;
		int teamID = RMXTeam.Count++;
		public float startingHealth = 100;
		public string teamName;
		public Color teamColor;
		public ScoreCard scoreCard = new ScoreCard();
		public RMXTeamGame game;
		public GameObject[] players {
			get {
				return null;
			}
		}

		public RMXGameObject teamCaptain;
		// Use this for initialization
		void Start () {
			if ( teamName == null ) {
				teamName = teamID.ToString();
			}
		}
		
		// Update is called once per frame
		void Update () {
		
		}
				
			
				
		RMXTeam(RMXTeamGame game, RMXGameObject teamCaptain, string name) {
			this.game = game;
	//		if let id: AnyObject = withID {
	//			var newID: String = ""
	//			while game.teams["\(id)"] != nil {
	//				newID = "\(id)-\(++RMXTeam.COUNT)"
	//			}
	//			self.id = newID
	//		}
			
			game.addTeam (this);
			this.addPlayer (teamCaptain);
			
		}
				
				
				///call this if there is a new captain and/or the kit has changed
		public void updateTeam() {
			RMXTeam.updateTeam(this);
		}
				
		bool addPlayer(RMXGameObject player){
					//    NSLog("name: \(player.name), team: \(player.attributes.teamID)")
			return false;
	//				if Int(player.attributes.teamID) ?? 1 < 0 { ///Actually this might be OK (capture the flag for example)
	//					RMLog("Warning: \(player.name!), with teamID: \(player.attributes.teamID), was not assigned a new team?")
	//						return false
	//				}
	//				if player.attributes.teamID != self.id { //will we get a new player?
	//					if player.attributes.isTeamCaptain {
	//						player.attributes.team?.captain = nil
	//					}
	//					player.attributes.setTeamID(self.id)
	//					if self.captain != nil { //do we have a captain?
	//						RMXTeam.setColor(self.kit, receiver: player.attributes)
	//					} else { //otherwise assign new player as captain and update team
	//						self.captain = player.attributes
	//							RMXTeam.setColor(RMXTeam.color(self.id), receiver: player.attributes)
	//								self.update()
	//					}
	//					if player.attributes.health < self.startingHealth {
	//						player.attributes.willChangeValueForKey("health")
	//							player.attributes.setHealth()
	//								player.attributes.didChangeValueForKey("health")
	//					}
	//					return true
	//				} else {
	//					return false
	//				}
	//				//        return true //players < self.players?.count ?? 0
					
		}
				
		private static Color color(string id) {
			switch (id) {
			case "0":
				return Color.black;
			case "1":
				return Color.red;
			case "2":
				return Color.magenta;
			case "3":
				return Color.green;
			case "4":
				return Color.blue;
			default:
				return Art.RandomColor();

			}
		}
				
				
				
		static void updateTeam(RMXTeam team) {
	//				if let players = team?.players {
	//					for player in players {
	//						RMXTeam.setColor(team?.kit, receiver: player.attributes)
	//					}
	//				}
		}
				
			
				
				/*
				
		private class func setColor(color: RMColor, receiver: SpriteAttributes) {
			if let receiver = receiver.kit {
				receiver.diffuse.contents = color
				receiver.specular.contents = color
				receiver.ambient.contents = color
				//            receiver.emission.contents = nil
			}
		}
				
		class func setColor(sender: SCNMaterial?, receiver: SpriteAttributes) {
			if let from = sender {
				if let to = receiver.kit {
					to.diffuse.contents = from.diffuse.contents
					to.specular.contents = from.specular.contents
					to.ambient.contents = from.ambient.contents
					to.emission.contents = from.emission.contents
				}
			}
		}
		
		/// doOnWin returns true if defender is totally defeated
		class func challenge(attacker: SpriteAttributes, defender: SpriteAttributes?, doOnWin: Challenge?) {
			if let defender = defender {
				if attacker.teamID == defender.teamID || Int(defender.teamID) ?? 1 <= 0 { return }
				if defender.isAlive  {
					switch doOnWin?(attacker,defender) ?? challengeWon(attacker, defender: defender) {
					case .DefenderWasKilled:
						attacker.team?.addPlayer(defender.sprite)
							defender.retire()
								break
								default:
								break
					}
				}
			}
			//        NSLog(attacker.points.toData())
		}
		
		//    private class func doAfterChallengeWon(attacker: SpriteAttributes, defender: SpriteAttributes) -> Void {
		//        self.convert(defender, toTeam: attacker.team)
		//    }

		enum ChallengeOutcome { case DefenderWasKilled, DefenderAlreadyDead, DefenderWasNotKilled}
		class func challengeWon(attacker: SpriteAttributes, defender: SpriteAttributes) -> ChallengeOutcome {
			if !defender.isAlive { return .DefenderAlreadyDead }
			let health = defender.health
				defender.reduceHealth(bySubtracting: 20)
					attacker.givePoints(Int(health - defender.health))
		if defender.health <= 0 {
				//            self.convert(defender, toTeam: attacker.team)
				defender.registerDeath()
				attacker.registerKill()
				attacker.givePoints(defender.points)
				return .DefenderWasKilled
			}
			return .DefenderWasNotKilled
		}
		
		
		var print: String {
			return "TEAM-\(self.id) Points: \(self.score.points), Kills: \(self.score.kills), Deaths: \(self.score.deaths)"
		}
		
		override var description: String {
			let stats = self.stats
				return "TEAM-\(self.id) Points: \(self.score.points), Kills: \(self.score.kills), Deaths: \(self.score.deaths), Players: \(stats.livePlayers) out of \(stats.players) remaining"
		}
		
		class func indirectChallenge(attacker: SpriteAttributes, defender: SpriteAttributes) -> ChallengeOutcome {
			if !defender.isAlive { return .DefenderAlreadyDead }
			self.willChangeValueForKey("score")
				let health = defender.health
				if defender.health > 0 { defender.reduceHealth(bySubtracting: 10) }
			attacker.givePoints(Int(health - defender.health))
			if defender.health <= 0 {
				defender.registerDeath()
					attacker.registerKill()
						attacker.givePoints(defender.points)
						return .DefenderWasKilled
			}
			self.didChangeValueForKey("score")
				return .DefenderWasNotKilled
		}
		
		
		class func throwChallenge(challenger: RMXSprite, projectile: RMXSprite)  {
			func _challenge(contact: SCNPhysicsContact) -> Void {
				if let defender = contact.getDefender(forChallenger: challenger).rmxNode {
					if defender.willCollide ?? false && defender.attributes.teamID != challenger.attributes.teamID {
						challenger.attributes.team?.willChangeValueForKey("score")
							RMXTeam.challenge(challenger.attributes, defender: defender.attributes, doOnWin: self.indirectChallenge)
								RMXTeam.challenge(challenger.attributes, defender: projectile.attributes, doOnWin: self.indirectChallenge)
								challenger.attributes.team?.didChangeValueForKey("score")
								//                    NSLog("I (\(challenger.name)) Smashed up, \(defender.name)")
								challenger.scene.interface.av.playSound(UserAction.THROW_ITEM.rawValue, info: defender)
								projectile.tracker.abort()
					}
				}
			}
			projectile.addCollisionAction(named: "Attack", removeAfterTime: 2, action: _challenge)
				
		}
		
		class func gameOverMessage(winner teamID: String, player: RMXSprite) -> [String] {
			let msg = teamID == player.attributes.teamID ? "Well done, \(player.name!)" : "You lose! :("
				return [ "The winning team is team \(teamID)! \(msg)" , "Your score: \(player.attributes.printScore)" ]
		}
		
		class func isGameWon(game: AnyObject?) -> [String]? {
			if let teamID = (game as? RMXTeamGame)?.winningTeam?.id {
				//            self.isRetired = true
				if let player = (game as? RMXTeamGame)?.activeSprite {
					return self.gameOverMessage(winner: teamID, player: player)
				}
			}
			return nil
		}
		*/
				
	}

