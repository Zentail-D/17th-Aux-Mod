// Big shoutout to Fireteam Zulu and OPTRE for letting me create an Aux Mod off of their armors. Check out their mod!

class CfgPatches
{
	class Z_17th_Vehicles_M808S
	{
		author = "Zentail";
		name = "17th Aux Mod";
		// Added Items
		units[]=
		{
			"17TH_OPTRE_M808S"
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
		class Z_17th_Vehicles_M808S
		{
			list[] = {"Z_17th_Vehicles_M808S"};
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
	class OPTRE_M808S: B_MBT_01_cannon_F
	{
		class complexGearbox;
		class Wheels;
		class RenderTargets;
		class HitPoints: HitPoints
		{
			class HitHull: HitHull
			{
				armor=2.8;
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
				name="pasL";
				passThrough=0;
				minimalHit=0.1;
				explosionShielding=0.5;
				radius=0.75;
			};
			class HitRTrack: HitRTrack
			{
				armor=2;
				material=-1;
				name="pasP";
				passThrough=0;
				minimalHit=0.1;
				explosionShielding=0.5;
				radius=0.75;
			};
		};
		class AnimationSources: AnimationSources
		{
			class recoil_source
			{
				source="reload";
				weapon="OPTRE_105mm_M556";
			};
			class recoil_sourceMG
			{
				source="reload";
				weapon="OPTRE_M247T_Coax2";
			};
		};
		class Reflectors;
		class Exhausts;
		class UserActions;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets
				{
				};
				memoryPointGun="usti hlavne2";
				maxVerticalRotSpeed="90/45";
				maxHorizontalRotSpeed="90/45";
				weapons[]=
				{
					"OPTRE_105mm_M556",
					"OPTRE_M247T_Coax2",
					"SmokeLauncher"
				};
				magazines[]=
				{
					"OPTRE_60Rnd_105mm_APBC",
					"OPTRE_60Rnd_105mm_SAPHE",
					"OPTRE_60Rnd_105mm_HEAT",
					"OPTRE_500Rnd_762x51_Box_Tracer",
					"OPTRE_500Rnd_762x51_Box_Tracer",
					"SmokeLauncherMag"
				};
				minElev=-10;
				maxElev=20;
				initElev=0;
				soundServo[]=
				{
					"A3\Sounds_F\vehicles\armor\noises\servo_best",
					"db-40",
					1,
					50
				};
				turretInfoType="RscWeaponRangeZeroing";
				selectionFireAnim="zasleh2";
				gun="Gun";
				body="Turret";
				gunAxis="Osa Hlavne";
				gunBeg="usti hlavne";
				gunEnd="konec hlavne";
				gunnerGetInAction="GetInAMV_cargo";
				gunnerGetOutAction="GetOutLow";
				turretAxis="OsaVeze";
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
						thermalMode[]={2,3};
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
				castGunnerShadow=0;
				stabilizedInAxes=3;
				viewGunnerInExternal=1;
				forceHideGunner=1;
				gunnerForceOptics=0;
				usePip=1;
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
		class Sounds;
		class textureSources;
	};
	
	class 17TH_OPTRE_M808S: OPTRE_M808S
	{
		scope=2;
		scopeCurator=2;
		author="Zentail";
		displayName="[17th] M808S Scorpion MBT";
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets
				{
				};
				magazines[]=
				{
					"OPTRE_60Rnd_105mm_APBC",
					"OPTRE_60Rnd_105mm_SAPHE",
					"OPTRE_60Rnd_105mm_HEAT",
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
			"\OPTRE_Vehicles\M808B2\data\lckdw\body_lckdw_lopo_co.paa",
			"\OPTRE_Vehicles\M808B2\data\lckdw\cing_dv_lckdw_co.paa",
			"\OPTRE_Vehicles\M808B2\data\lckdw\cing_rt_lckdw_co.paa",
			"\OPTRE_Vehicles\M808B2\data\lckdw\turretBase_lckdw_lopo_co.paa",
			"\OPTRE_Vehicles\M808B2\data\lckdw\turrethead_lckdw_lopo_co.paa",
			"\OPTRE_Vehicles\M808B2\data\night\turretGuns_lopo_co.paa",
			"\OPTRE_Vehicles\M808B2\data\lckdw\ghammer_lckdw_lopo_co.paa"
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