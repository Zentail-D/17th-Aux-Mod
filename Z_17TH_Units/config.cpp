// Big shoutout to Fireteam Zulu for letting me create an Aux Mod off of their armors. Check out their mod!

class CfgPatches
{
	class Z_17th_Units
	{
		author="Zentail";
		name="17th Aux Mod";
		// Added Items
		units[]=
		{
			// Urban
			"17TH_Rifleman_MA5B",
			"17TH_Rifleman_BR55",
			"17TH_Rifleman_M73",
			"17TH_Rifleman_Radio",
			"17TH_Rifleman_Crew",
			"17TH_Rifleman_Officer",
			"17TH_Rifleman_SquadLeader",
			"17TH_Rifleman_TeamLeader",
			"17TH_Rifleman_LauncherAA",
			"17TH_Rifleman_LauncherAT",
			"17TH_Insurgent_MA5B",
			"17TH_Insurgent_BR55",
			"17TH_Insurgent_M73",
			"17TH_Insurgent_LauncherAA",
			"17TH_Insurgent_LauncherAT"
		};
		weapons[]={};
		magazines[]={};
		ammo[]={};
		// Requirements
		requiredVersion=0.1;
		requiredAddons[]=
		{"Z_17TH_Core", "Z_17TH_Core", "Z_17th_Armor"};
	};
};

class CfgAddons
{
	class PreloadAddons
	{
		class Z_17th_Units
		{
			list[]={"Z_17th_Units"};
		};
	};
};

class CfgVehicles
{
	// Units
	class B_Soldier_base_F;	
	class 17TH_Soldier_Base: B_Soldier_base_F
	{
		class EventHandlers;
	};
	
	// Urban
	class 17TH_Rifleman_MA5B: 17TH_Soldier_Base
	{
		author="Zentail";
        scope=2;
		scopeCurator=2;
		side=1;
		editorCategory="Z_17TH_EdCat_17thSWG_UNSCDF";
		editorSubcategory="Z_17TH_EdSubCat_Men";
        displayName="Rifleman (MA5B)";
		uniformClass="VES_BDU_Urban_Slim";
		headgearList[]={"17TH_ECH252_Vacuum_Silver", 1};
        backpack="OPTRE_UNSC_Rucksack";
		icon="iconMan";
		class EventHandlers: EventHandlers
        {
            init="if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;};";
        };
		#include "cfg\17TH_MA5B_Items.hpp"
		#include "cfg\17th\17TH_LightItems.hpp"
	};
	class 17TH_Rifleman_BR55: 17TH_Rifleman_MA5B
	{
		displayName="Rifleman (BR55)";
		#include "cfg\17TH_BR55_Items.hpp"
	};
	class 17TH_Rifleman_M73: 17TH_Rifleman_MA5B
	{
		displayName="Autorifleman";
		backpack="OPTRE_UNSC_Rucksack_Heavy";
		#include "cfg\17TH_M73_Items.hpp"
		#include "cfg\17th\17TH_HeavyItems.hpp"
	};
	class 17TH_Rifleman_Radio: 17TH_Rifleman_MA5B
	{
		displayName="Radio Operator";
		backpack="OPTRE_ANPRC_521_Black";
		#include "cfg\17th\17TH_RadioItems.hpp"
	};
	class 17TH_Rifleman_Crew: 17TH_Rifleman_MA5B
	{
		displayName="Crewman";
		backpack="";
		#include "cfg\17th\17TH_CrewItems.hpp"
	};
	class 17TH_Rifleman_Officer: 17TH_Rifleman_MA5B
	{
		displayName="Officer";
		backpack="OPTRE_ANPRC_521_Black";
		#include "cfg\17TH_M6C_Items.hpp"
		#include "cfg\17th\17TH_OfficerItems.hpp"
	};
	class 17TH_Rifleman_SquadLeader: 17TH_Rifleman_MA5B
	{
		displayName="Squad Leader";
		backpack="OPTRE_ANPRC_521_Black";
		#include "cfg\17TH_MA5B_Items.hpp"
		#include "cfg\17th\17TH_HeavyItems.hpp"
	};
	class 17TH_Rifleman_TeamLeader: 17TH_Rifleman_MA5B
	{
		displayName="Team Leader";
		backpack="OPTRE_UNSC_Rucksack_Heavy";
		#include "cfg\17TH_MA5B_Items.hpp"
		#include "cfg\17th\17TH_LightItems.hpp"
	};
	class 17TH_Rifleman_LauncherAA: 17TH_Rifleman_MA5B
	{
		displayName="AA Operator";
		backpack="OPTRE_UNSC_Rucksack_Heavy";
		#include "cfg\17TH_MA5B_AA_Items.hpp"
		#include "cfg\17th\17TH_LauncherItems.hpp"
	};
	class 17TH_Rifleman_LauncherAT: 17TH_Rifleman_MA5B
	{
		displayName="AT Operator";
		backpack="OPTRE_UNSC_Rucksack_Heavy";
		#include "cfg\17TH_MA5B_AT_Items.hpp"
		#include "cfg\17th\17TH_LauncherItems.hpp"
	};
	class 17TH_Insurgent_MA5B: 17TH_Soldier_Base
	{
		author="Zentail";
        scope=2;
		scopeCurator=2;
		side=0;
		editorCategory="Z_17TH_EdCat_17thSWG_INS";
		editorSubcategory="Z_17TH_EdSubCat_Men";
        displayName="Rifleman (MA5B)";
		uniformClass="OPTRE_Ins_URF_Combat_Uniform";
		headgearList[]={"OPTRE_Ins_URF_Helmet1", 0.25,
						"OPTRE_Ins_URF_Helmet2", 0.25,
						"OPTRE_Ins_URF_Helmet3", 0.25,
						"OPTRE_Ins_URF_Helmet4", 0.25};
		icon="iconMan";
		class EventHandlers: EventHandlers
        {
            init="if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;};";
        };
		#include "cfg\17TH_MA5B_Items.hpp"
		#include "cfg\Insurgent\17TH_INS_Items.hpp"
	};
	class 17TH_Insurgent_BR55: 17TH_Insurgent_MA5B
	{
		displayName="Rifleman (BR55)";
		#include "cfg\17TH_BR55_Items.hpp"
	};
	class 17TH_Insurgent_M73: 17TH_Insurgent_MA5B
	{
		displayName="Autorifleman";
		backpack="OPTRE_UNSC_Rucksack";
		#include "cfg\17TH_M73_Items.hpp"
	};
	class 17TH_Insurgent_LauncherAA: 17TH_Insurgent_MA5B
	{
		displayName="AA Operator";
		backpack="OPTRE_UNSC_Rucksack";
		#include "cfg\17TH_MA5B_AA_Items.hpp"
	};
	class 17TH_Insurgent_LauncherAT: 17TH_Insurgent_MA5B
	{
		displayName="AT Operator";
		backpack="OPTRE_UNSC_Rucksack";
		#include "cfg\17TH_MA5B_AT_Items.hpp"
	};
	class 17TH_Insurgent_SquadLeader: 17TH_Insurgent_MA5B
	{
		displayName="Squad Leader";
		backpack="OPTRE_ANPRC_521_Black";
		#include "cfg\17TH_BR55_Items.hpp"
	};
	class 17TH_Insurgent_TeamLeader: 17TH_Insurgent_MA5B
	{
		displayName="Team Leader";
		backpack="OPTRE_UNSC_Rucksack";
		#include "cfg\17TH_MA5B_Items.hpp"
	};
};

class CfgGroups
{
	// Friendly Units
	class West
	{
		class Z_17TH_UNSCDF
		{
			name="[17th] UNSCDF";
			class MarinesURB
			{
				name="Infantry";
				class UNSCSquadAT
				{
					name="AT Squad";
					side=1;
					faction="OPTRE_UNSC";
					rarityGroup=0.3;
					class Corporal
					{
						position[]={0,0,0};
						rank="CORPORAL";
						side=1;
						vehicle="17TH_Rifleman_SquadLeader";
					};
					class Corporal1: Corporal
					{
						position[]={5,-5,0};
						vehicle="17TH_Rifleman_TeamLeader";
					};
					class Private: Corporal
					{
						position[]={-5,-5,0};
						rank="PRIVATE";
						vehicle="17TH_Rifleman_MA5B";
					};
					class Private1: Private
					{
						position[]={10,-10,0};
						rank="PRIVATE";
						vehicle="17TH_Rifleman_M73";
					};
					class Private2: Private
					{
						position[]={-10,-10,0};
						vehicle="17TH_Rifleman_BR55";
					};
					class Private3: Private
					{
						position[]={15,-15,0};
						vehicle="17TH_Rifleman_LauncherAT";
					};
					class Private4: Private
					{
						position[]={-15,-15,0};
						vehicle="17TH_Rifleman_BR55";
					};
					class Private5: Private
					{
						position[]={20,-20,0};
						vehicle="17TH_Rifleman_MA5B";
					};
					class Private6: Private
					{
						position[]={-20,-20,0};
						vehicle="17TH_Rifleman_BR55";
					};
					class Private7: Private
					{
						position[]={25,-25,0};
						vehicle="17TH_Rifleman_MA5B";
					};
					class Private8: Private
					{
						position[]={-25,-25,0};
						vehicle="17TH_Rifleman_BR55";
					};
					class Private9: Private
					{
						position[]={30,-30,0};
						vehicle="17TH_Rifleman_MA5B";
					};
				};

				class UNSCSquadAA
				{
					name="AA Squad";
					side=1;
					faction="OPTRE_UNSC";
					rarityGroup=0.3;
					class Corporal
					{
						position[]={0,0,0};
						rank="CORPORAL";
						side=1;
						vehicle="17TH_Rifleman_SquadLeader";
					};
					class Corporal1: Corporal
					{
						position[]={5,-5,0};
						vehicle="17TH_Rifleman_TeamLeader";
					};
					class Private: Corporal
					{
						position[]={-5,-5,0};
						rank="PRIVATE";
						vehicle="17TH_Rifleman_MA5B";
					};
					class Private1: Private
					{
						position[]={10,-10,0};
						rank="PRIVATE";
						vehicle="17TH_Rifleman_M73";
					};
					class Private2: Private
					{
						position[]={-10,-10,0};
						vehicle="17TH_Rifleman_BR55";
					};
					class Private3: Private
					{
						position[]={15,-15,0};
						vehicle="17TH_Rifleman_LauncherAA";
					};
					class Private4: Private
					{
						position[]={-15,-15,0};
						vehicle="17TH_Rifleman_BR55";
					};
					class Private5: Private
					{
						position[]={20,-20,0};
						vehicle="17TH_Rifleman_MA5B";
					};
					class Private6: Private
					{
						position[]={-20,-20,0};
						vehicle="17TH_Rifleman_BR55";
					};
					class Private7: Private
					{
						position[]={25,-25,0};
						vehicle="17TH_Rifleman_MA5B";
					};
					class Private8: Private
					{
						position[]={-25,-25,0};
						vehicle="17TH_Rifleman_BR55";
					};
					class Private9: Private
					{
						position[]={30,-30,0};
						vehicle="17TH_Rifleman_MA5B";
					};
				};

				class UNSCFireteamAT
				{
					name="AT Fireteam";
					side=1;
					faction="OPTRE_UNSC";
					rarityGroup=0.3;
					class Corporal
					{
						position[]={0,0,0};
						rank="CORPORAL";
						side=1;
						vehicle="17TH_Rifleman_SquadLeader";
					};
					class Corporal1: Corporal
					{
						position[]={5,-5,0};
						vehicle="17TH_Rifleman_TeamLeader";
					};
					class Private: Corporal
					{
						position[]={-5,-5,0};
						rank="PRIVATE";
						vehicle="17TH_Rifleman_MA5B";
					};
					class Private1: Private
					{
						position[]={10,-10,0};
						rank="PRIVATE";
						vehicle="17TH_Rifleman_M73";
					};
					class Private2: Private
					{
						position[]={-10,-10,0};
						vehicle="17TH_Rifleman_BR55";
					};
					class Private3: Private
					{
						position[]={15,-15,0};
						vehicle="17TH_Rifleman_LauncherAT";
					};
				};

				class UNSCFireteamAA
				{
					name="AA Fireteam";
					side=1;
					faction="OPTRE_UNSC";
					rarityGroup=0.3;
					class Corporal
					{
						position[]={0,0,0};
						rank="CORPORAL";
						side=1;
						vehicle="17TH_Rifleman_SquadLeader";
					};
					class Corporal1: Corporal
					{
						position[]={5,-5,0};
						vehicle="17TH_Rifleman_TeamLeader";
					};
					class Private: Corporal
					{
						position[]={-5,-5,0};
						rank="PRIVATE";
						vehicle="17TH_Rifleman_MA5B";
					};
					class Private1: Private
					{
						position[]={10,-10,0};
						rank="PRIVATE";
						vehicle="17TH_Rifleman_M73";
					};
					class Private2: Private
					{
						position[]={-10,-10,0};
						vehicle="17TH_Rifleman_BR55";
					};
					class Private3: Private
					{
						position[]={15,-15,0};
						vehicle="17TH_Rifleman_LauncherAA";
					};
				};

				class UNSCSentryAT
				{
					name="AT Team";
					side=1;
					faction="OPTRE_UNSC";
					rarityGroup=0.3;
					class Corporal
					{
						position[]={0,0,0};
						rank="CORPORAL";
						side=1;
						vehicle="17TH_Rifleman_TeamLeader";
					};
					class Private: Corporal
					{
						position[]={5,-5,0};
						rank="PRIVATE";
						vehicle="17TH_Rifleman_LauncherAT";
					};
					class Private1: Private
					{
						position[]={-5,-5,0};
						vehicle="17TH_Rifleman_BR55";
					};
				};

				class UNSCSentryAA
				{
					name="AA Team";
					side=1;
					faction="OPTRE_UNSC";
					rarityGroup=0.3;
					class Corporal
					{
						position[]={0,0,0};
						rank="CORPORAL";
						side=1;
						vehicle="17TH_Rifleman_TeamLeader";
					};
					class Private: Corporal
					{
						position[]={5,-5,0};
						rank="PRIVATE";
						vehicle="17TH_Rifleman_LauncherAA";
					};
					class Private1: Private
					{
						position[]={-5,-5,0};
						vehicle="17TH_Rifleman_BR55";
					};
				};
			};
		};
	};
	// Hostile Units
	class East
	{
		class Z_17TH_Insurgents
		{
			name="[17th] Insurgents";
			class Insurgents
			{
				name="Infantry";
				class InsurgentSquadAT
				{
					name="AT Squad";
					side=0;
					faction="OPTRE_INS";
					rarityGroup=0.3;
					class Corporal
					{
						position[]={0,0,0};
						rank="CORPORAL";
						side=1;
						vehicle="17TH_Insurgent_SquadLeader";
					};
					class Corporal1: Corporal
					{
						position[]={5,-5,0};
						vehicle="17TH_Insurgent_TeamLeader";
					};
					class Private: Corporal
					{
						position[]={-5,-5,0};
						rank="PRIVATE";
						vehicle="17TH_Insurgent_MA5B";
					};
					class Private1: Private
					{
						position[]={10,-10,0};
						rank="PRIVATE";
						vehicle="17TH_Insurgent_M73";
					};
					class Private2: Private
					{
						position[]={-10,-10,0};
						vehicle="17TH_Insurgent_BR55";
					};
					class Private3: Private
					{
						position[]={15,-15,0};
						vehicle="17TH_Insurgent_LauncherAT";
					};
					class Private4: Private
					{
						position[]={-15,-15,0};
						vehicle="17TH_Insurgent_BR55";
					};
					class Private5: Private
					{
						position[]={20,-20,0};
						vehicle="17TH_Insurgent_MA5B";
					};
					class Private6: Private
					{
						position[]={-20,-20,0};
						vehicle="17TH_Insurgent_BR55";
					};
					class Private7: Private
					{
						position[]={25,-25,0};
						vehicle="17TH_Insurgent_MA5B";
					};
					class Private8: Private
					{
						position[]={-25,-25,0};
						vehicle="17TH_Insurgent_BR55";
					};
					class Private9: Private
					{
						position[]={30,-30,0};
						vehicle="17TH_Insurgent_MA5B";
					};
				};
				class InsurgentSquadAA
				{
					name="AA Squad";
					side=0;
					faction="OPTRE_INS";
					rarityGroup=0.3;
					class Corporal
					{
						position[]={0,0,0};
						rank="CORPORAL";
						side=1;
						vehicle="17TH_Insurgent_SquadLeader";
					};
					class Corporal1: Corporal
					{
						position[]={5,-5,0};
						vehicle="17TH_Insurgent_TeamLeader";
					};
					class Private: Corporal
					{
						position[]={-5,-5,0};
						rank="PRIVATE";
						vehicle="17TH_Insurgent_MA5B";
					};
					class Private1: Private
					{
						position[]={10,-10,0};
						rank="PRIVATE";
						vehicle="17TH_Insurgent_M73";
					};
					class Private2: Private
					{
						position[]={-10,-10,0};
						vehicle="17TH_Insurgent_BR55";
					};
					class Private3: Private
					{
						position[]={15,-15,0};
						vehicle="17TH_Insurgent_LauncherAA";
					};
					class Private4: Private
					{
						position[]={-15,-15,0};
						vehicle="17TH_Insurgent_BR55";
					};
					class Private5: Private
					{
						position[]={20,-20,0};
						vehicle="17TH_Insurgent_MA5B";
					};
					class Private6: Private
					{
						position[]={-20,-20,0};
						vehicle="17TH_Insurgent_BR55";
					};
					class Private7: Private
					{
						position[]={25,-25,0};
						vehicle="17TH_Insurgent_MA5B";
					};
					class Private8: Private
					{
						position[]={-25,-25,0};
						vehicle="17TH_Insurgent_BR55";
					};
					class Private9: Private
					{
						position[]={30,-30,0};
						vehicle="17TH_Insurgent_MA5B";
					};
				};
				class InsurgentFireteamAT
				{
					name="AT Fireteam";
					side=0;
					faction="OPTRE_INS";
					rarityGroup=0.3;
					class Corporal
					{
						position[]={0,0,0};
						rank="CORPORAL";
						side=1;
						vehicle="17TH_Insurgent_SquadLeader";
					};
					class Corporal1: Corporal
					{
						position[]={5,-5,0};
						vehicle="17TH_Insurgent_TeamLeader";
					};
					class Private: Corporal
					{
						position[]={-5,-5,0};
						rank="PRIVATE";
						vehicle="17TH_Insurgent_MA5B";
					};
					class Private1: Private
					{
						position[]={10,-10,0};
						rank="PRIVATE";
						vehicle="17TH_Insurgent_M73";
					};
					class Private2: Private
					{
						position[]={-10,-10,0};
						vehicle="17TH_Insurgent_BR55";
					};
					class Private3: Private
					{
						position[]={15,-15,0};
						vehicle="17TH_Insurgent_LauncherAT";
					};
				};
				class InsurgentFireteamAA
				{
					name="AA Fireteam";
					side=0;
					faction="OPTRE_INS";
					rarityGroup=0.3;
					class Corporal
					{
						position[]={0,0,0};
						rank="CORPORAL";
						side=1;
						vehicle="17TH_Insurgent_SquadLeader";
					};
					class Corporal1: Corporal
					{
						position[]={5,-5,0};
						vehicle="17TH_Insurgent_TeamLeader";
					};
					class Private: Corporal
					{
						position[]={-5,-5,0};
						rank="PRIVATE";
						vehicle="17TH_Insurgent_MA5B";
					};
					class Private1: Private
					{
						position[]={10,-10,0};
						rank="PRIVATE";
						vehicle="17TH_Insurgent_M73";
					};
					class Private2: Private
					{
						position[]={-10,-10,0};
						vehicle="17TH_Insurgent_BR55";
					};
					class Private3: Private
					{
						position[]={15,-15,0};
						vehicle="17TH_Insurgent_LauncherAA";
					};
				};
				class InsurgentSentryAT
				{
					name="AT Team";
					side=0;
					faction="OPTRE_INS";
					rarityGroup=0.3;
					class Corporal
					{
						position[]={0,0,0};
						rank="CORPORAL";
						side=1;
						vehicle="17TH_Insurgent_TeamLeader";
					};
					class Private: Corporal
					{
						position[]={5,-5,0};
						rank="PRIVATE";
						vehicle="17TH_Insurgent_LauncherAT";
					};
					class Private1: Private
					{
						position[]={-5,-5,0};
						vehicle="17TH_Insurgent_BR55";
					};
				};
				class InsurgentSentryAA
				{
					name="AA Team";
					side=0;
					faction="OPTRE_INS";
					rarityGroup=0.3;
					class Corporal
					{
						position[]={0,0,0};
						rank="CORPORAL";
						side=1;
						vehicle="17TH_Insurgent_TeamLeader";
					};
					class Private: Corporal
					{
						position[]={5,-5,0};
						rank="PRIVATE";
						vehicle="17TH_Insurgent_LauncherAA";
					};
					class Private1: Private
					{
						position[]={-5,-5,0};
						vehicle="17TH_Insurgent_BR55";
					};
				};
			};
		};
	};
};