// Big shoutout to Fireteam Zulu and OPTRE for letting me create an Aux Mod off of their armors. Check out their mod!

class CfgPatches
{
	class Z_17th_Spartan
	{
		author = "Zentail";
		name = "\17th Aux Mod";
		// Added Items
		units[] = {};
		weapons[] = {};
		magazines[] = {};
		ammo[] = {};
		// Requirements
		requiredVersion = 0.1;
		requiredAddons[] = {"OPTRE_MJOLNIR_Units", "OPTRE_FC_Units"};
	};
};

class CfgAddons
{
	class PreloadAddons
	{
		class Z_17th_Spartan
		{
			list[] = {"Z_17th_Spartan"};
		};
	};
};

class CfgWeapons
{
	// Helmets
	class OPTRE_FC_MJOLNIR_Mark_VI_Helmet_Olive;

	class 17TH_MJOLNIR_MkVI_Helmet_Saint: OPTRE_FC_MJOLNIR_Mark_VI_Helmet_Olive
	{
		scope = 2;
		scopeArsenal=2;
		author = "Zentail";
		displayName = "[17th] MJOLNIR Mark VI Helmet [Saint]";
		picture = "\OPTRE_FC_Units\Marines\data\h3_helmet_i_ca";
		model = "\OPTRE_FC_Units\Spartan\Mark_VI_Helmet";
		hiddenSelectionsTextures[] = {"\17th Aux Mod\Z_17TH_Spartans\data\Helmets\Z_Mark_VI_Helmet_Woodland_co"};
	};

	// Armor Set
	class VestItem;
	class OPTRE_MJOLNIR_MkVBArmor;

	class 17TH_MJOLNIR_MkVBArmor_Saint: OPTRE_MJOLNIR_MkVBArmor
	{
		scope = 2;
		scopeArsenal=2;
		author = "Zentail";
		displayName = "[17th] MJOLNIR Mark V[B] Armor [Saint]";
		picture = "\OPTRE_FC_Units\Marines\data\h3_vest_i_ca";
		model = "\OPTRE_MJOLNIR_Units\armormkvb.p3d";
		hiddenSelections[] =
		{
			"camo1",
			"camo2",
			//"attach_security1",
			"attach_security2",
			"attach_fjpara1",
			"attach_fjpara2",
			"attach_commando1",
			"attach_commando2",
			"attach_mkv1",
			//"attach_mkv2",
			"attach_grenadier1",
			"attach_grenadier2",
			"attach_cqc1",
			"attach_cqc2",
			"attach_gren_ua",
			//"attach_knees_fjpara",
			"attach_knees_default"
		};
		hiddenSelectionsTextures[] = {"\17th Aux Mod\Z_17TH_Spartans\data\Vests\Z_Chest_MkVB_CO", "\17th Aux Mod\Z_17TH_Spartans\data\Vests\Z_Legs_MkVB_CO"};
		class ItemInfo: VestItem
		{
			vestType="Rebreather";
			uniformModel="\OPTRE_MJOLNIR_Units\armormkvb.p3d";
			containerClass="Supply160";
			mass=20;
			passThrough=0.1;
			modelSides[]={6};
			hiddenSelections[] =
			{
				"camo1",
				"camo2",
				//"attach_security1",
				"attach_security2",
				"attach_fjpara1",
				"attach_fjpara2",
				"attach_commando1",
				"attach_commando2",
				"attach_mkv1",
				//"attach_mkv2",
				"attach_grenadier1",
				"attach_grenadier2",
				"attach_cqc1",
				"attach_cqc2",
				"attach_gren_ua",
				//"attach_knees_fjpara",
				"attach_knees_default"
			};
			hiddenSelectionsTextures[] = {"\17th Aux Mod\Z_17TH_Spartans\data\Vests\Z_Chest_MkVB_CO", "\17th Aux Mod\Z_17TH_Spartans\data\Vests\Z_Legs_MkVB_CO"};
		};
	};

	class 17TH_MJOLNIR_MkVBArmor_Code: OPTRE_MJOLNIR_MkVBArmor
	{
		scope = 2;
		scopeArsenal=2;
		author = "Zentail";
		displayName = "[17th] MJOLNIR Mark V[B] Armor [Code]";
		picture = "\OPTRE_FC_Units\Marines\data\h3_vest_i_ca";
		model = "\OPTRE_MJOLNIR_Units\armormkvb.p3d";
		hiddenSelections[] =
		{
			"camo1",
			"camo2",
			//"attach_security1",
			"attach_security2",
			"attach_fjpara1",
			"attach_fjpara2",
			"attach_commando1",
			"attach_commando2",
			"attach_mkv1",
			"attach_mkv2",
			"attach_grenadier1",
			"attach_grenadier2",
			"attach_cqc1",
			//"attach_cqc2",
			"attach_gren_ua",
			"attach_knees_fjpara",
			//"attach_knees_default"
		};
		hiddenSelectionsTextures[] = {"\17th Aux Mod\Z_17TH_Spartans\data\Vests\Z_Chest_MkVB_CO", "\17th Aux Mod\Z_17TH_Spartans\data\Vests\Z_Legs_MkVB_CO"};
		class ItemInfo: VestItem
		{
			vestType="Rebreather";
			uniformModel="\OPTRE_MJOLNIR_Units\armormkvb.p3d";
			containerClass="Supply160";
			mass=20;
			passThrough=0.1;
			modelSides[]={6};
			hiddenSelections[] =
			{
				"camo1",
				"camo2",
				//"attach_security1",
				"attach_security2",
				"attach_fjpara1",
				"attach_fjpara2",
				"attach_commando1",
				"attach_commando2",
				"attach_mkv1",
				"attach_mkv2",
				"attach_grenadier1",
				"attach_grenadier2",
				"attach_cqc1",
				//"attach_cqc2",
				"attach_gren_ua",
				"attach_knees_fjpara",
				//"attach_knees_default"
			};
			hiddenSelectionsTextures[] = {"\17th Aux Mod\Z_17TH_Spartans\data\Vests\Z_Chest_MkVB_CO", "\17th Aux Mod\Z_17TH_Spartans\data\Vests\Z_Legs_MkVB_CO"};
		};
	};
};