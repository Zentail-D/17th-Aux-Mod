// Big shoutout to Fireteam Zulu and OPTRE for letting me create an Aux Mod off of their armors. Check out their mod!

class CfgPatches
{
	class Z_17th_Vehicles_M808B
	{
		author = "Zentail";
		name = "17th Aux Mod";
		// Added Items
		units[]=
		{
			"17TH_M808B_UNSC_BLK",
			"17TH_M808BM_UNSC_BLK"
		};
		weapons[] = {};
		magazines[] = {};
		ammo[] = {};
		// Requirements
		requiredVersion = 0.1;
		requiredAddons[] = {"OPTRE_Vehicles", "OPTRE_Core", "A3_Weapons_F"};
	};
};

class CfgAddons
{
	class PreloadAddons
	{
		class Z_17th_Vehicles_M808B
		{
			list[] = {"Z_17th_Vehicles_M808B"};
		};
	};
};

class CfgVehicles
{
	class LandVehicle;
	class Tank: LandVehicle
	{
		class NewTurret;
		class HitPoints;
	};
	class Tank_F: Tank
	{
		class Turrets
		{
			class MainTurret: NewTurret
			{
				class Turrets;
			};
		};
		class HitPoints;
		class CargoTurret;
		class ViewPilot;
		class ViewOptics;
		class RCWSOptics;
		class ViewCargo;
		class HeadLimits;
	};
	class MBT_01_base_F: Tank_F
	{
		class HitPoints: HitPoints
		{
			class HitHull;
			class HitFuel;
			class HitEngine;
			class HitLTrack;
			class HitRTrack;
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets: Turrets
				{
					class CommanderOptics;
				};
			};
		};
	};
	class B_MBT_01_base_F: MBT_01_base_F
	{
	};
	class B_MBT_01_cannon_F: B_MBT_01_base_F
	{
		class AnimationSources;
		class HitPoints: HitPoints
		{
			class HitHull;
			class HitFuel;
			class HitEngine;
			class HitLTrack;
			class HitRTrack;
		};
	};
	class OPTRE_M808B_base: B_MBT_01_cannon_F
	{
		class complexGearbox;
		class Wheels;
		class RenderTargets;
		class TransportMagazines;
		class TransportItems;
		class TransportWeapons;
		class HitPoints: HitPoints
		{
			class HitHull: HitHull
			{
				armor=3;
				material=-1;
				name="telo";
				visual="zbytek";
				passThrough=1;
				minimalHit=0.2;
				explosionShielding=0.2;
				radius=0.30000001;
			};
			class HitEngine: HitEngine
			{
				armor=1.5;
				material=-1;
				name="engine";
				passThrough=0.25;
				minimalHit=0.30000001;
				explosionShielding=0.2;
				radius=0.2;
			};
			class HitLTrack: HitLTrack
			{
				armor=2;
				material=-1;
				name="pas_L";
				passThrough=0;
				minimalHit=0.1;
				explosionShielding=0.5;
				radius=0.75;
			};
			class HitRTrack: HitRTrack
			{
				armor=2;
				material=-1;
				name="pas_P";
				passThrough=0;
				minimalHit=0.1;
				explosionShielding=0.5;
				radius=0.75;
			};
		};
		class Turrets: Turrets
		{
			class CargoTurret1: CargoTurret
			{
				gunnerAction="passenger_inside_3";
				gunnerCompartments="Compartment2";
				memoryPointsGetInGunner="pos cargo1";
				memoryPointsGetInGunnerDir="pos cargo1 dir";
				memoryPointGunnerOptics="gunnerview";
				gunnerName="Passenger Gunner 1";
				proxyIndex=1;
				maxElev=15;
				minElev=-25;
				maxTurn=60;
				minTurn=-60;
				isPersonTurret=2;
				ejectDeadGunner=1;
				gunnerInAction="passenger_inside_3";
				startEngine=0;
				allowLauncherIn=1;
				allowLauncherOut=1;
				LODTurnedIn=0;
				LODTurnedOut=0;
			};
			class CargoTurret2: CargoTurret1
			{
				gunnerCompartments="Compartment2";
				memoryPointsGetInGunner="pos cargo2";
				memoryPointsGetInGunnerDir="pos cargo2 dir";
				gunnerName="Passenger Gunner 2";
				proxyIndex=2;
			};
			class CargoTurret3: CargoTurret1
			{
				proxyIndex=3;
				gunnerName="Passenger Gunner 3";
				gunnerCompartments="Compartment3";
				memoryPointsGetInGunner="pos cargo3";
				memoryPointsGetInGunnerDir="pos cargo3 dir";
			};
			class CargoTurret4: CargoTurret1
			{
				proxyIndex=4;
				gunnerName="Passenger Gunner 4";
				gunnerCompartments="Compartment3";
				memoryPointsGetInGunner="pos cargo4";
				memoryPointsGetInGunnerDir="pos cargo4 dir";
			};
			class CargoTurret5: CargoTurret1
			{
				proxyIndex=5;
				gunnerName="Passenger Gunner 5";
				gunnerCompartments="Compartment4";
				memoryPointsGetInGunner="pos cargo5";
				memoryPointsGetInGunnerDir="pos cargo6 dir";
			};
			class CargoTurret6: CargoTurret1
			{
				proxyIndex=6;
				gunnerName="Passenger Gunner 6";
				gunnerCompartments="Compartment4";
				memoryPointsGetInGunner="pos cargo6";
				memoryPointsGetInGunnerDir="pos cargo6 dir";
			};
			class CargoTurret7: CargoTurret1
			{
				proxyIndex=7;
				gunnerName="Passenger Gunner 7";
				gunnerCompartments="Compartment5";
				memoryPointsGetInGunner="pos cargo7";
				memoryPointsGetInGunnerDir="pos cargo7 dir";
			};
			class CargoTurret8: CargoTurret1
			{
				proxyIndex=8;
				gunnerName="Passenger Gunner 8";
				gunnerCompartments="Compartment5";
				memoryPointsGetInGunner="pos cargo8";
				memoryPointsGetInGunnerDir="pos cargo8 dir";
			};
			class MainTurret: MainTurret
			{
				class Turrets;
				memoryPointGun="usti hlavne2";
				selectionFireAnim="zasleh2";
				maxVerticalRotSpeed="90/45";
				maxHorizontalRotSpeed="90/45";
				gunBeg="usti hlavne";
				gunEnd="konec hlavne";
				weapons[]=
				{
					"OPTRE_90mm_M512",
					"OPTRE_M247T_Coax",
					"SmokeLauncher"
				};
				magazines[]=
				{
					"OPTRE_30Rnd_90mm_APBC",
					"OPTRE_30Rnd_90mm_SAPHE",
					"OPTRE_10Rnd_90mm_S1",
					"OPTRE_500Rnd_762x51_Box_Tracer",
					"OPTRE_500Rnd_762x51_Box_Tracer",
					"SmokeLauncherMag"
				};
				minElev=-8;
				maxElev=25;
				initElev=0;
				soundServo[]=
				{
					"A3\Sounds_F\vehicles\armor\noises\servo_best",
					"db-40",
					1,
					50
				};
				turretInfoType="RscOptics_MBT_01_gunner";
				discreteDistance[]={100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000,2100,2200,2300,2400};
				discreteDistanceInitIndex=5;
				memoryPointGunnerOptics="gunnerview";
				gunnerOutOpticsModel="";
				gunnerOutOpticsEffect[]={};
				gunnerOpticsEffect[]={};
				class OpticsIn
				{
					class Wide: ViewOptics
					{
						initAngleX=0;
						minAngleX=-30;
						maxAngleX=30;
						initAngleY=0;
						minAngleY=-100;
						maxAngleY=100;
						initFov=0.30000001;
						minFov=0.30000001;
						maxFov=0.30000001;
						visionMode[]=
						{
							"Normal",
							"NVG",
							"Ti"
						};
						thermalMode[]={0};
						gunnerOpticsModel="\A3\Weapons_F\Reticle\Optics_Gunner_MBT_01_m_F.p3d";
						gunnerOpticsEffect[]={};
					};
					class Medium: Wide
					{
						gunnerOpticsModel="\A3\Weapons_F\Reticle\Optics_Gunner_MBT_01_m_F.p3d";
						initFov=0.07;
						minFov=0.07;
						maxFov=0.07;
					};
					class Narrow: Wide
					{
						gunnerOpticsModel="\A3\Weapons_F\Reticle\Optics_Gunner_MBT_01_m_F.p3d";
						initFov=0.028000001;
						minFov=0.028000001;
						maxFov=0.028000001;
					};
				};
				gunnerAction="Gunner_OPTRE_M808B";
				gunnerInAction="Gunner_OPTRE_M808B";
				gunnerGetInAction="GetInAMV_cargo";
				gunnerGetOutAction="GetOutLow";
				castGunnerShadow=0;
				stabilizedInAxes=3;
				viewGunnerInExternal=1;
				forceHideGunner=1;
				gunnerForceOptics=0;
				usepip=1;
				class HitPoints
				{
					class HitTurret
					{
						armor=4.5;
						material=-1;
						name="otocVez";
						visual="vez";
						passThrough=0;
						minimalHit=0.02;
						explosionShielding=0.60000002;
						radius=0.25;
					};
					class HitGun
					{
						armor=4.5;
						material=-1;
						name="otocHlaven";
						visual="Hlaven";
						passThrough=0;
						minimalHit=0;
						explosionShielding=0.60000002;
						radius=0.25;
					};
				};
			};
		};
		class AnimationSources;
		class ViewOptics: ViewOptics
		{
			visionMode[]=
			{
				"Normal",
				"NVG"
			};
		};
		class Exhausts;
		class Reflectors;
		class Sounds;
		class UserActions;
	};

	class OPTRE_M808BM_Base: B_MBT_01_cannon_F
	{
		class complexGearbox;
		class Wheels;
		class RenderTargets;
		class TransportMagazines;
		class TransportItems;
		class TransportWeapons;
		class HitPoints: HitPoints
		{
			class HitHull
			{
				armor=3;
				material=-1;
				name="telo";
				visual="zbytek";
				passThrough=1;
				minimalHit=0.2;
				explosionShielding=0.2;
				radius=0.30000001;
			};
			class HitEngine
			{
				armor=1.5;
				material=-1;
				name="engine";
				passThrough=0.25;
				minimalHit=0.30000001;
				explosionShielding=0.2;
				radius=0.2;
			};
			class HitLTrack
			{
				armor=2;
				material=-1;
				name="pas_L";
				passThrough=0;
				minimalHit=0.1;
				explosionShielding=0.5;
				radius=0.75;
			};
			class HitRTrack
			{
				armor=2;
				material=-1;
				name="pas_P";
				passThrough=0;
				minimalHit=0.1;
				explosionShielding=0.5;
				radius=0.75;
			};
		};
		class Turrets: Turrets
		{
			class CargoTurret1: CargoTurret
			{
				gunnerAction="passenger_inside_3";
				gunnerCompartments="Compartment2";
				memoryPointsGetInGunner="pos cargo1";
				memoryPointsGetInGunnerDir="pos cargo1 dir";
				memoryPointGunnerOptics="gunnerview";
				gunnerName="Passenger Gunner 1";
				proxyIndex=1;
				maxElev=15;
				minElev=-25;
				maxTurn=60;
				minTurn=-60;
				isPersonTurret=2;
				ejectDeadGunner=1;
				gunnerInAction="passenger_inside_3";
				startEngine=0;
				allowLauncherIn=1;
				allowLauncherOut=1;
				LODTurnedIn=0;
				LODTurnedOut=0;
			};
			class CargoTurret2: CargoTurret1
			{
				gunnerCompartments="Compartment2";
				memoryPointsGetInGunner="pos cargo2";
				memoryPointsGetInGunnerDir="pos cargo2 dir";
				gunnerName="Passenger Gunner 2";
				proxyIndex=2;
			};
			class CargoTurret3: CargoTurret1
			{
				proxyIndex=3;
				gunnerName="Passenger Gunner 3";
				gunnerCompartments="Compartment3";
				memoryPointsGetInGunner="pos cargo3";
				memoryPointsGetInGunnerDir="pos cargo3 dir";
			};
			class CargoTurret4: CargoTurret1
			{
				proxyIndex=4;
				gunnerName="Passenger Gunner 4";
				gunnerCompartments="Compartment3";
				memoryPointsGetInGunner="pos cargo4";
				memoryPointsGetInGunnerDir="pos cargo4 dir";
			};
			class CargoTurret5: CargoTurret1
			{
				proxyIndex=5;
				gunnerName="Passenger Gunner 5";
				gunnerCompartments="Compartment4";
				memoryPointsGetInGunner="pos cargo5";
				memoryPointsGetInGunnerDir="pos cargo6 dir";
			};
			class CargoTurret6: CargoTurret1
			{
				proxyIndex=6;
				gunnerName="Passenger Gunner 6";
				gunnerCompartments="Compartment4";
				memoryPointsGetInGunner="pos cargo6";
				memoryPointsGetInGunnerDir="pos cargo6 dir";
			};
			class CargoTurret7: CargoTurret1
			{
				proxyIndex=7;
				gunnerName="Passenger Gunner 7";
				gunnerCompartments="Compartment5";
				memoryPointsGetInGunner="pos cargo7";
				memoryPointsGetInGunnerDir="pos cargo7 dir";
			};
			class CargoTurret8: CargoTurret1
			{
				proxyIndex=8;
				gunnerName="Passenger Gunner 8";
				gunnerCompartments="Compartment5";
				memoryPointsGetInGunner="pos cargo8";
				memoryPointsGetInGunnerDir="pos cargo8 dir";
			};
			class MainTurret: MainTurret
			{
				class Turrets
				{
				};
				memoryPointGun="usti hlavne2";
				selectionFireAnim="zasleh2";
				maxVerticalRotSpeed="90/45";
				maxHorizontalRotSpeed="90/45";
				gunBeg="usti hlavne";
				gunEnd="konec hlavne";
				weapons[]=
				{
					"OPTRE_90mm_M512",
					"OPTRE_M247T_Coax",
					"SmokeLauncher"
				};
				magazines[]=
				{
					"OPTRE_30Rnd_90mm_APBC",
					"OPTRE_30Rnd_90mm_SAPHE",
					"OPTRE_10Rnd_90mm_S1",
					"OPTRE_500Rnd_762x51_Box_Tracer",
					"OPTRE_500Rnd_762x51_Box_Tracer",
					"SmokeLauncherMag"
				};
				minElev=-8;
				maxElev=25;
				initElev=0;
				soundServo[]=
				{
					"A3\Sounds_F\vehicles\armor\noises\servo_best",
					"db-40",
					1,
					50
				};
				turretInfoType="RscOptics_MBT_01_gunner";
				discreteDistance[]={100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000,2100,2200,2300,2400};
				discreteDistanceInitIndex=5;
				memoryPointGunnerOptics="gunnerview";
				gunnerOutOpticsModel="";
				gunnerOutOpticsEffect[]={};
				gunnerOpticsEffect[]={};
				class OpticsIn
				{
					class Wide: ViewOptics
					{
						initAngleX=0;
						minAngleX=-30;
						maxAngleX=30;
						initAngleY=0;
						minAngleY=-100;
						maxAngleY=100;
						initFov=0.30000001;
						minFov=0.30000001;
						maxFov=0.30000001;
						visionMode[]=
						{
							"Normal",
							"NVG",
							"Ti"
						};
						thermalMode[]={0};
						gunnerOpticsModel="\A3\Weapons_F\Reticle\Optics_Gunner_MBT_01_m_F.p3d";
						gunnerOpticsEffect[]={};
					};
					class Medium: Wide
					{
						gunnerOpticsModel="\A3\Weapons_F\Reticle\Optics_Gunner_MBT_01_m_F.p3d";
						initFov=0.07;
						minFov=0.07;
						maxFov=0.07;
					};
					class Narrow: Wide
					{
						gunnerOpticsModel="\A3\Weapons_F\Reticle\Optics_Gunner_MBT_01_m_F.p3d";
						initFov=0.028000001;
						minFov=0.028000001;
						maxFov=0.028000001;
					};
				};
				gunnerAction="Gunner_OPTRE_M808B";
				gunnerInAction="Gunner_OPTRE_M808B";
				gunnerGetInAction="GetInAMV_cargo";
				gunnerGetOutAction="GetOutLow";
				castGunnerShadow=0;
				stabilizedInAxes=3;
				viewGunnerInExternal=1;
				forceHideGunner=1;
				gunnerForceOptics=0;
				usepip=1;
				class HitPoints
				{
					class HitTurret
					{
						armor=4.5;
						material=-1;
						name="otocVez";
						visual="vez";
						passThrough=0;
						minimalHit=0.02;
						explosionShielding=0.60000002;
						radius=0.25;
					};
					class HitGun
					{
						armor=4.5;
						material=-1;
						name="otocHlaven";
						visual="Hlaven";
						passThrough=0;
						minimalHit=0;
						explosionShielding=0.60000002;
						radius=0.25;
					};
				};
			};
			class CommanderTurret: MainTurret
			{
				class Turrets
				{
				};
				LODTurnedIn=1100;
				body="obsTurret";
				gun="obsGun";
				animationSourceBody="obsTurret";
				animationSourceGun="obsGun";
				proxyType="CPCargo";
				proxyIndex=14;
				cargoCompartments[]=
				{
					"Compartment1"
				};
				memoryPointGun="usti hlavne3";
				selectionFireAnim="zasleh3";
				maxVerticalRotSpeed="90/45";
				maxHorizontalRotSpeed="90/45";
				gunBeg="usti hlavne3";
				gunEnd="konec hlavne3";
				weapons[]=
				{
					"OPTRE_M247H_RCWS",
					"Laserdesignator_mounted"
				};
				magazines[]=
				{
					"OPTRE_200Rnd_127x99_M247H",
					"OPTRE_200Rnd_127x99_M247H",
					"OPTRE_200Rnd_127x99_M247H",
					"OPTRE_200Rnd_127x99_M247H",
					"Laserbatteries"
				};
				minElev=-12;
				maxElev=45;
				initElev=0;
				soundServo[]=
				{
					"A3\Sounds_F\vehicles\armor\noises\servo_best",
					"db-40",
					1,
					50
				};
				turretInfoType="RscOptics_APC_Wheeled_01_gunner";
				memoryPointsGetInGunner="pos commander";
				memoryPointsGetInGunnerDir="pos commander dir";
				commanding=-2;
				primaryGunner=0;
				discreteDistance[]={100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000,2100,2200,2300,2400};
				discreteDistanceInitIndex=4;
				memoryPointGunnerOptics="commanderview";
				gunnerOutOpticsModel="";
				gunnerOutOpticsEffect[]={};
				gunnerOpticsEffect[]={};
				class OpticsIn
				{
					class Wide: ViewOptics
					{
						initAngleX=0;
						minAngleX=-30;
						maxAngleX=30;
						initAngleY=0;
						minAngleY=-100;
						maxAngleY=100;
						initFov=0.30000001;
						minFov=0.30000001;
						maxFov=0.30000001;
						visionMode[]=
						{
							"Normal",
							"NVG",
							"Ti"
						};
						thermalMode[]={0,1};
						gunnerOpticsModel="\A3\weapons_f\reticle\Optics_Commander_02_F";
						gunnerOpticsEffect[]={};
					};
					class Medium: Wide
					{
						gunnerOpticsModel="\A3\weapons_f\reticle\Optics_Commander_02_F";
						initFov=0.07;
						minFov=0.07;
						maxFov=0.07;
					};
					class Narrow: Wide
					{
						gunnerOpticsModel="\A3\weapons_f\reticle\Optics_Commander_02_F";
						initFov=0.028000001;
						minFov=0.028000001;
						maxFov=0.028000001;
					};
				};
				gunnerGetInAction="GetInAMV_cargo";
				gunnerGetOutAction="GetOutLow";
				gunnerName="Commander";
				castGunnerShadow=0;
				stabilizedInAxes=3;
				viewGunnerInExternal=1;
				startEngine=0;
				gunnerForceOptics=0;
				usepip=1;
			};
		};
		class AnimationSources;
		class ViewOptics: ViewOptics
		{
			visionMode[]=
			{
				"Normal",
				"NVG"
			};
		};
		class Exhausts;
		class Reflectors;
		class Sounds;
		class UserActions;
	};
	
	class 17TH_M808B_UNSC_BLK: OPTRE_M808B_base
	{
		scope=2;
		scopeCurator=2;
		author="Zentail";
		displayName="[17th] M808B Scorpion MBT";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"camo6",
			"camo7"
		};
		hiddenSelectionsTextures[]=
		{
			"OPTRE_Vehicles\Scorpion\data\texture\camo\Scorp_base_black_co.paa",
			"OPTRE_Vehicles\Scorpion\data\texture\camo\Scorp_tur_black_co.paa",
			"OPTRE_Vehicles\Scorpion\data\texture\camo\det_3_black_co.paa",
			"OPTRE_Vehicles\Scorpion\data\texture\scorp_decals_ca.paa",
			"OPTRE_Vehicles\Scorpion\data\texture\Scorp_net_wood_ca.paa",
			"OPTRE_Vehicles\Scorpion\data\texture\Scorp_net_wood_ca.paa",
			"OPTRE_Vehicles\Scorpion\data\texture\camo\mine_roller_black_co.paa"
		};
		class Turrets: Turrets
		{;
			class MainTurret: MainTurret
			{
				class Turrets;
				magazines[]=
				{
					"OPTRE_30Rnd_90mm_APBC",
					"OPTRE_30Rnd_90mm_SAPHE",
					"OPTRE_10Rnd_90mm_S1",
					"OPTRE_500Rnd_762x51_Box_Tracer",
					"OPTRE_500Rnd_762x51_Box_Tracer",
					"OPTRE_500Rnd_762x51_Box_Tracer",
					"OPTRE_500Rnd_762x51_Box_Tracer",
					"OPTRE_500Rnd_762x51_Box_Tracer",
					"OPTRE_500Rnd_762x51_Box_Tracer",
					"OPTRE_500Rnd_762x51_Box_Tracer",
					"OPTRE_500Rnd_762x51_Box_Tracer",
					"SmokeLauncherMag"
				};
			};
		};
		editorCategory="Z_17TH_EdCat_17thSWG_UNSCDF";
		vehicleClass="17TH_UNSC_Armored_class";
		crew="OPTRE_UNSC_Army_Soldier_Crewman_WDL";
		tf_range=25000;
		tf_isolatedAmount=0.40000001;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=1;
		enableRadio=1;
	};

	class 17TH_M808BM_UNSC_BLK: OPTRE_M808BM_Base
	{
		scope=2;
		scopeCurator=2;
		author="Zentail";
		displayName="[17th] M808BM Scorpion MBT";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"camo6",
			"camo7",
			"camo8"
		};
		hiddenSelectionsTextures[]=
		{
			"OPTRE_Vehicles\Scorpion\data\texture\camo\Scorp_base_black_co.paa",
			"OPTRE_Vehicles\Scorpion\data\texture\camo\Scorp_tur_black_co.paa",
			"OPTRE_Vehicles\Scorpion\data\texture\camo\det_3_black_co.paa",
			"OPTRE_Vehicles\Scorpion\data\texture\scorp_decals_ca.paa",
			"OPTRE_Vehicles\Scorpion\data\texture\Scorp_net_wood_ca.paa",
			"OPTRE_Vehicles\Scorpion\data\texture\Scorp_net_wood_ca.paa",
			"OPTRE_Vehicles\Scorpion\data\texture\camo\mine_roller_black_co.paa",
			"OPTRE_Vehicles\Scorpion\data\texture\camo\Scorp_mg_black_co.paa",
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				magazines[]=
				{
					"OPTRE_30Rnd_90mm_APBC",
					"OPTRE_30Rnd_90mm_SAPHE",
					"OPTRE_10Rnd_90mm_S1",
					"OPTRE_500Rnd_762x51_Box_Tracer",
					"OPTRE_500Rnd_762x51_Box_Tracer",
					"OPTRE_500Rnd_762x51_Box_Tracer",
					"OPTRE_500Rnd_762x51_Box_Tracer",
					"OPTRE_500Rnd_762x51_Box_Tracer",
					"OPTRE_500Rnd_762x51_Box_Tracer",
					"OPTRE_500Rnd_762x51_Box_Tracer",
					"OPTRE_500Rnd_762x51_Box_Tracer",
					"SmokeLauncherMag"
				};
			};
			class CommanderTurret: MainTurret
			{
				magazines[]=
				{
					"OPTRE_200Rnd_127x99_M247H",
					"OPTRE_200Rnd_127x99_M247H",
					"OPTRE_200Rnd_127x99_M247H",
					"OPTRE_200Rnd_127x99_M247H",
					"OPTRE_200Rnd_127x99_M247H",
					"OPTRE_200Rnd_127x99_M247H",
					"OPTRE_200Rnd_127x99_M247H",
					"OPTRE_200Rnd_127x99_M247H",
					"OPTRE_200Rnd_127x99_M247H",
					"OPTRE_200Rnd_127x99_M247H",
					"OPTRE_200Rnd_127x99_M247H",
					"OPTRE_200Rnd_127x99_M247H",
					"Laserbatteries"
				};
			};
		};
		editorCategory="Z_17TH_EdCat_17thSWG_UNSCDF";
		vehicleClass="17TH_UNSC_Armored_class";
		crew="OPTRE_UNSC_Army_Soldier_Crewman_WDL";
		tf_range=25000;
		tf_isolatedAmount=0.40000001;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=1;
		enableRadio=1;
	};
};

