// Big shoutout to Fireteam Zulu and OPTRE for letting me create an Aux Mod off of their armors. Check out their mod!

class CfgPatches
{
	class Z_17th_Armor
	{
		author = "Zentail";
		name = "17th Aux Mod";
		// Added Items
		units[] = {};
		weapons[] = {};
		magazines[] = {};
		ammo[] = {};
		// Requirements
		requiredVersion = 0.1;
		requiredAddons[] = {"V_FZ_Armor", "V_FZ_Core","OPTRE_UNSC_Units"};
	};
};

class CfgAddons
{
	class PreloadAddons
	{
		class Z_17th_Armor
		{
			list[] = {"Z_17th_Armor"};
		};
	};
};

class CfgWeapons
{
	// Helmets
	class HeadgearItem;
	class VES_CH252_MAR_Light;
	class 17TH_CH252_Base: VES_CH252_MAR_Light
	{
		scope = 0;
		author = "Zentail";
		ace_hearing_protection = 1;
		ace_hearing_lowerVolume = 0.60000002;
		class ItemInfo;
	};
	class 17TH_CH252: 17TH_CH252_Base
	{
		scope = 2;
		displayName = "[17th] CH252 Helmet [Standard]";
		hiddenSelectionsTextures[] = {"17th Aux Mod\Z_17TH_Armor\data\Helmets\Z_CH252_URB_L_CO", "optre_unsc_units\army\data\helmet_visor_ca"};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[] = {"17th Aux Mod\Z_17TH_Armor\data\Helmets\Z_CH252_URB_L_CO", "optre_unsc_units\army\data\helmet_visor_ca"};
		};
	};
	class 17TH_CH252_Medic: 17TH_CH252_Base
	{
		scope = 2;
		displayName = "[17th] CH252 Helmet [Medic]";
		hiddenSelectionsTextures[] = {"17th Aux Mod\Z_17TH_Armor\data\Helmets\Z_CH252_URB_M_CO", "optre_unsc_units\army\data\helmet_visor_ca"};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[] = {"17th Aux Mod\Z_17TH_Armor\data\Helmets\Z_CH252_URB_M_CO", "optre_unsc_units\army\data\helmet_visor_ca"};
		};
	};

	class OPTRE_UNSC_CH252D_Helmet;
	class VES_CH252D: OPTRE_UNSC_CH252D_Helmet
	{
		class ItemInfo;
	};
	class 17TH_CH252D_Base: VES_CH252D
	{
		scope = 0;
		author="Zentail";
		ace_hearing_protection=1;
		ace_hearing_lowerVolume=0.60;
		displayName="[17th] CH252D Helmet [Standard]";
		hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Helmets\V_CH252D_DEF_CO", "V_FZ_Armor\Data\Helmets\V_CH252D_DEF_V_CO"};
		hiddenSelectionsMaterials[]={"V_FZ_Armor\Data\Helmets\Materials\V_CH252D.rvmat", "V_FZ_Armor\Data\Helmets\Materials\V_CH252D_V.rvmat"};
		CBRN_protection="1 + 2";
		class ItemInfo: HeadgearItem
		{
			mass=30;
			uniformModel="OPTRE_UNSC_Units\Army\odst_helmet";
			picture="\OPTRE_UNSC_Units\Army\icons\odst_helmet";
			hiddenSelections[]={"camo","camo2"};
			hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Helmets\V_CH252D_DEF_CO", "V_FZ_Armor\Data\Helmets\V_CH252D_DEF_V_CO"};
			hiddenSelectionsMaterials[]={"V_FZ_Armor\Data\Helmets\Materials\V_CH252D.rvmat", "V_FZ_Armor\Data\Helmets\Materials\V_CH252D_V.rvmat"};
			class HitpointsProtectionInfo
			{
				class Face {armor=25; hitpointName="HitFace"; passThrough=0.1;};
				class Head {armor=25; hitPointName="HitHead"; passThrough=0.1;};
				class Neck {armor=20; hitpointName="HitNeck"; passThrough=0.1;};
			};
		};
		allowedFacewear[]={};
	};
	class OPTRE_UNSC_CH252D_Helmet_dp;
	class VES_CH252D_dp: OPTRE_UNSC_CH252D_Helmet_dp
	{
		class ItemInfo;
	};
	class 17TH_CH252D_Base_dp: VES_CH252D_dp
	{
		scope = 0;
		author="Zentail";
		ace_hearing_protection=1;
		ace_hearing_lowerVolume=0.60;
		displayName="[17th] CH252D Helmet [Standard]";
		hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Helmets\V_CH252D_DEF_CO", "V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"};
		hiddenSelectionsMaterials[]={"V_FZ_Armor\Data\Helmets\Materials\V_CH252D.rvmat", ""};
		CBRN_protection="1 + 2";
		class ItemInfo: HeadgearItem
		{
			mass=30;
			uniformModel="OPTRE_UNSC_Units\Army\odst_helmet";
			picture="\OPTRE_UNSC_Units\Army\icons\odst_helmet";
			hiddenSelections[]={"camo","camo2"};
			hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Helmets\V_CH252D_DEF_CO", "V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"};
			hiddenSelectionsMaterials[]={"V_FZ_Armor\Data\Helmets\Materials\V_CH252D.rvmat", ""};
			class HitpointsProtectionInfo
			{
				class Face {armor=25; hitpointName="HitFace"; passThrough=0.1;};
				class Head {armor=25; hitPointName="HitHead"; passThrough=0.1;};
				class Neck {armor=20; hitpointName="HitNeck"; passThrough=0.1;};
			};
		};
		allowedFacewear[]={};
	};

	class VES_CH252_MAR_Vacuum: VES_CH252D
	{
		class ItemInfo;
	};
	class 17TH_ECH252_Base: VES_CH252_MAR_Vacuum
	{
		scope = 0;
		author = "Zentail";
		hiddenSelectionsTextures[] = {"17th Aux Mod\Z_17TH_Armor\data\Helmets\Z_CH252_URB_L_CO", "\17th Aux Mod\Z_17TH_Armor\data\Helmets\Z_ECH252_SLV_V_CO"};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[] = {"17th Aux Mod\Z_17TH_Armor\data\Helmets\Z_CH252_URB_L_CO", "V_FZ_Armor\Data\Helmets\V_CH252_SLV_V_CO"};
		};
	};
	class 17TH_ECH252_Vacuum_Silver: 17TH_ECH252_Base
	{
		scope = 2;
		author = "Zentail";
		displayName = "[17th] ECH252 Silver Helmet [Standard]";
		hiddenSelectionsTextures[] = {"17th Aux Mod\Z_17TH_Armor\data\Helmets\Z_CH252_URB_L_CO", "\17th Aux Mod\Z_17TH_Armor\data\Helmets\Z_ECH252_SLV_V_CO"};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[] = {"17th Aux Mod\Z_17TH_Armor\data\Helmets\Z_CH252_URB_L_CO", "V_FZ_Armor\Data\Helmets\V_CH252_SLV_V_CO"};
		};
	};
	class 17TH_ECH252_Vacuum_Silver_Medic: 17TH_ECH252_Base
	{
		scope = 2;
		displayName = "[17th] ECH252 Silver Helmet [Medic]";
		hiddenSelectionsTextures[] = {"17th Aux Mod\Z_17TH_Armor\data\Helmets\Z_CH252_URB_M_CO", "\17th Aux Mod\Z_17TH_Armor\data\Helmets\Z_ECH252_SLV_V_CO"};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[] = {"17th Aux Mod\Z_17TH_Armor\data\Helmets\Z_CH252_URB_M_CO", "V_FZ_Armor\Data\Helmets\V_CH252_SLV_V_CO"};
		};
	};
	class 17TH_ECH252_Vacuum_Gold: 17TH_ECH252_Vacuum_Silver
	{
		displayName = "[17th] ECH252 Gold Helmet [Standard]";
		hiddenSelectionsTextures[] = {"17th Aux Mod\Z_17TH_Armor\data\Helmets\Z_CH252_URB_L_CO", "V_FZ_Armor\Data\Helmets\V_CH252_GLD_V_CO"};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[] = {"17th Aux Mod\Z_17TH_Armor\data\Helmets\Z_CH252_URB_L_CO", "V_FZ_Armor\Data\Helmets\V_CH252_GLD_V_CO"};
		};
	};
	class 17TH_ECH252_Vacuum_Gold_Medic: 17TH_ECH252_Vacuum_Silver_Medic
	{
		displayName = "[17th] ECH252 Gold Helmet [Medic]";
		hiddenSelectionsTextures[] = {"17th Aux Mod\Z_17TH_Armor\data\Helmets\Z_CH252_URB_M_CO", "V_FZ_Armor\Data\Helmets\V_CH252_GLD_V_CO"};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[] = {"17th Aux Mod\Z_17TH_Armor\data\Helmets\Z_CH252_URB_M_CO", "V_FZ_Armor\Data\Helmets\V_CH252_GLD_V_CO"};
		};
	};
	
	class VES_CH252_MAR_Vacuum_dp: VES_CH252D_dp
	{
		class ItemInfo;
	};
	class 17TH_ECH252_Base_dp: VES_CH252_MAR_Vacuum_dp
	{
		scope = 0;
		author = "Zentail";
		hiddenSelectionsTextures[] = {"17th Aux Mod\Z_17TH_Armor\data\Helmets\Z_CH252_URB_L_CO", "optre_unsc_units\army\data\helmet_visor_ca"};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[] = {"17th Aux Mod\Z_17TH_Armor\data\Helmets\Z_CH252_URB_L_CO", "optre_unsc_units\army\data\helmet_visor_ca"};
		};
	};
	class 17TH_ECH252_Vacuum_Silver_dp: 17TH_ECH252_Base_dp
	{
		author = "Zentail";
		displayName = "[17th] ECH252 Silver Helmet [Standard]";
		hiddenSelectionsTextures[] = {"17th Aux Mod\Z_17TH_Armor\data\Helmets\Z_CH252_URB_L_CO", "optre_unsc_units\army\data\helmet_visor_ca"};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[] = {"17th Aux Mod\Z_17TH_Armor\data\Helmets\Z_CH252_URB_L_CO", "optre_unsc_units\army\data\helmet_visor_ca"};
		};
	};
	class 17TH_ECH252_Vacuum_Silver_Medic_dp: 17TH_ECH252_Base_dp
	{
		displayName = "[17th] ECH252 Silver Helmet [Medic]";
		hiddenSelectionsTextures[] = {"17th Aux Mod\Z_17TH_Armor\data\Helmets\Z_CH252_URB_M_CO", "optre_unsc_units\army\data\helmet_visor_ca"};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[] = {"17th Aux Mod\Z_17TH_Armor\data\Helmets\Z_CH252_URB_M_CO", "optre_unsc_units\army\data\helmet_visor_ca"};
		};
	};
	class 17TH_ECH252_Vacuum_Gold_dp: 17TH_ECH252_Base_dp
	{
		displayName = "[17th] ECH252 Gold Helmet [Standard]";
		hiddenSelectionsTextures[] = {"17th Aux Mod\Z_17TH_Armor\data\Helmets\Z_CH252_URB_L_CO", "optre_unsc_units\army\data\helmet_visor_ca"};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[] = {"17th Aux Mod\Z_17TH_Armor\data\Helmets\Z_CH252_URB_L_CO", "optre_unsc_units\army\data\helmet_visor_ca"};
		};
	};
	class 17TH_ECH252_Vacuum_Gold_Medic_dp: 17TH_ECH252_Base_dp
	{
		displayName = "[17th] ECH252 Gold Helmet [Medic]";
		hiddenSelectionsTextures[] = {"17th Aux Mod\Z_17TH_Armor\data\Helmets\Z_CH252_URB_M_CO", "optre_unsc_units\army\data\helmet_visor_ca"};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[] = {"17th Aux Mod\Z_17TH_Armor\data\Helmets\Z_CH252_URB_M_CO", "optre_unsc_units\army\data\helmet_visor_ca"};
		};
	};

	// Armor Set
	class VestItem;
	class OPTRE_UNSC_M52A_Armor_Rifleman_MAR;
	class 17TH_M52A_Armor_Base: OPTRE_UNSC_M52A_Armor_Rifleman_MAR
	{
		scope = 0;
		author = "Zentail";
		hiddenSelectionsTextures[] = {"17th Aux Mod\Z_17TH_Armor\data\Vests\Z_M52A_V_URB_CO","17th Aux Mod\Z_17TH_Armor\data\Vests\Z_M52A_R_URB_CO","17th Aux Mod\Z_17TH_Armor\data\Vests\Z_M52A_L_URB_CO","optre_unsc_units\army\data\ghillie_woodland_co","optre_unsc_units\army\data\odst_armor_co"};
		hiddenSelectionsMaterials[] = {"V_FZ_Armor\Data\Vests\Materials\V_M52_V.rvmat","V_FZ_Armor\Data\Vests\Materials\V_M52.rvmat","V_FZ_Armor\Data\Vests\Materials\V_M52_L.rvmat","",""};
		class ItemInfo: VestItem
		{
			mass = 75;
			containerClass = "Supply250";
			uniformModel = "\OPTRE_UNSC_Units\Army\armor";
			class HitpointsProtectionInfo
			{
				class Abdomen {armor = 35; hitpointName = "HitAbdomen"; passThrough = 0.1;};
				class Arms: Abdomen {hitpointName = "HitArms";};
				class Body: Abdomen {hitpointName = "HitBody";};
				class Chest: Abdomen {hitpointName = "HitChest";};
				class Diaphragm: Abdomen {hitpointName = "HitDiaphragm";};
				class Hands: Abdomen {hitpointName = "HitHands";};
				class Legs: Abdomen {hitpointName = "HitLegs";};
				class Neck: Abdomen {hitpointName = "HitNeck";};
			};
		};
	};
	class 17TH_M52A_Rifleman: 17th_M52A_Armor_Base
	{
		scope = 2;
		displayName = "[17th] M52A Rifleman [Standard]";
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = 
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
			//	"A_ChestArmor",
			//	"A_KneesLeft",
			//	"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_ODST",
			//	"A_ShinArmorLeft",
			//	"A_ShinArmorRight",
				"A_TacPad",
			//	"A_ThighArmorLeft",
			//	"A_ThighArmorRight",
			//	"AS_BaseLeft",
			//	"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
			//	"AS_MediumLeft",
			//	"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
			//	"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
			//	"AP_BR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
			//	"AP_Frag",
				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
		};
	};

	class 17TH_M52A_Autorifleman: 17th_M52A_Armor_Base
	{
		scope = 2;
		displayName = "[17th] M52A Autorifleman [Standard]";
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = 
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
			//	"A_ChestArmor",
			//	"A_KneesLeft",
			//	"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_ODST",
			//	"A_ShinArmorLeft",
			//	"A_ShinArmorRight",
				"A_TacPad",
			//	"A_ThighArmorLeft",
			//	"A_ThighArmorRight",
			//	"AS_BaseLeft",
			//	"AS_BaseRight",
			//	"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
			//	"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
			//	"AP_Canteen",
				"AP_GL",
			//	"AP_Knife",
			//	"AP_MGThigh",
			//	"AP_AR",
				"AP_BR",
			//	"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
			//	"AP_Thigh",
			//	"AP_Frag",
				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
		};
	};

	class 17TH_M52A_EOD: 17th_M52A_Armor_Base
	{
		scope = 2;
		displayName = "[17th] M52A EOD [Standard]";
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = 
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
			//	"A_ChestArmor",
			//	"A_KneesLeft",
			//	"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_ODST",
			//	"A_ShinArmorLeft",
			//	"A_ShinArmorRight",
				"A_TacPad",
			//	"A_ThighArmorLeft",
			//	"A_ThighArmorRight",
			//	"AS_BaseLeft",
			//	"AS_BaseRight",
			//	"AS_LargeLeft",
			//	"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_Canteen",
			//	"AP_GL",
			//	"AP_Knife",
			//	"AP_MGThigh",
			//	"AP_AR",
				"AP_BR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
			//	"AP_Thigh",
			//	"AP_Frag",
			//	"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
		};
	};

	class 17TH_M52A_Medic: 17th_M52A_Armor_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"17th Aux Mod\Z_17TH_Armor\data\Vests\Z_M52A_V_URB_CO","17th Aux Mod\Z_17TH_Armor\data\Vests\Z_M52A_M_URB_CO","17th Aux Mod\Z_17TH_Armor\data\Vests\Z_M52A_L_URB_CO","optre_unsc_units\army\data\ghillie_woodland_co","optre_unsc_units\army\data\odst_armor_co"};
		displayName = "[17th] M52A Medic [Standard]";
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = 
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
			//	"A_ChestArmor",
			//	"A_KneesLeft",
			//	"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_ODST",
			//	"A_ShinArmorLeft",
			//	"A_ShinArmorRight",
				"A_TacPad",
			//	"A_ThighArmorLeft",
			//	"A_ThighArmorRight",
			//	"AS_BaseLeft",
			//	"AS_BaseRight",
			//	"AS_LargeLeft",
			//	"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
			//	"AP_Canteen",
				"AP_GL",
				"AP_Knife",
			//	"AP_MGThigh",
				"AP_AR",
				"AP_BR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
			//	"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
			//	"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
		};
	};

	class 17TH_M52A_RTO: 17th_M52A_Armor_Base
	{
		scope = 2;
		displayName = "[17th] M52A RTO [Standard]";
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = 
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
			//	"A_ChestArmor",
			//	"A_KneesLeft",
			//	"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_ODST",
			//	"A_ShinArmorLeft",
			//	"A_ShinArmorRight",
			//	"A_TacPad",
			//	"A_ThighArmorLeft",
			//	"A_ThighArmorRight",
			//	"AS_BaseLeft",
			//	"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
			//	"AS_MediumLeft",
			//	"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
			//	"AP_MGThigh",
				"AP_AR",
			//	"AP_BR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
			//	"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
		};
	};

	class 17TH_M52A_Operator: 17th_M52A_Armor_Base
	{
		scope = 2;
		displayName = "[17th] M52A Operator [Standard]";
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = 
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
			//	"A_ChestArmor",
			//	"A_KneesLeft",
			//	"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_ODST",
			//	"A_ShinArmorLeft",
			//	"A_ShinArmorRight",
			//	"A_TacPad",
			//	"A_ThighArmorLeft",
			//	"A_ThighArmorRight",
			//	"AS_BaseLeft",
			//	"AS_BaseRight",
			//	"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
			//	"AS_SmallRight",
			//	"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
			//	"AP_AR",
				"AP_BR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
			//	"AP_Thigh",
			//	"AP_Frag",
				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
		};
	};

	class 17TH_M52A_Marksman: 17th_M52A_Armor_Base
	{
		scope = 2;
		displayName = "[17th] M52A Marksman [Standard]";
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = 
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
			//	"A_ChestArmor",
			//	"A_KneesLeft",
			//	"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_ODST",
			//	"A_ShinArmorLeft",
			//	"A_ShinArmorRight",
				"A_TacPad",
			//	"A_ThighArmorLeft",
			//	"A_ThighArmorRight",
			//	"AS_BaseLeft",
			//	"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
			//	"AS_SmallLeft",
				"AS_SmallRight",
			//	"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_BR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
			//	"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
		};
	};	

	class OPTRE_UNSC_M52D_Armor_Rifleman;
	class 17TH_M52D_Base: OPTRE_UNSC_M52D_Armor_Rifleman
	{
		scope = 0;
		author="Zentail";
		displayName="-";
		picture="\optre_unsc_units\army\icons\odst_vest";
		hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Vests\V_M52_V_URB_CO","V_FZ_Armor\Data\Vests\V_M52_URB_CO","V_FZ_Armor\Data\Vests\V_M52_L_URB_CO","optre_unsc_units\army\data\ghillie_woodland_co","V_FZ_Armor\Data\Vests\V_M52_O_URB_CO"};
		hiddenSelectionsMaterials[]={"V_FZ_Armor\Data\Vests\Materials\V_M52_V.rvmat","V_FZ_Armor\Data\Vests\Materials\V_M52.rvmat","V_FZ_Armor\Data\Vests\Materials\V_M52_L.rvmat","","V_FZ_Armor\Data\Vests\Materials\V_M52_O.rvmat"};
	};
	class 17TH_M52D_Rifleman: 17TH_M52D_Base
	{
		scope = 0;
		author="Zentail";
		displayName="[17th] M52D Rifleman [Standard]";
		hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Vests\V_M52_V_URB_CO","V_FZ_Armor\Data\Vests\V_M52_URB_CO","V_FZ_Armor\Data\Vests\V_M52_L_URB_CO","optre_unsc_units\army\data\ghillie_woodland_co","V_FZ_Armor\Data\Vests\V_M52_O_URB_CO"};
	};
};

class CfgVehicles
{
	// Backpacks
	class Bag_Base;
	class 17TH_ODST_INVIS_BACKPACK: Bag_Base
	{
		scope = 2;
		scopeArsenal = 2;
		author = "Zentail";
		displayName = "[17th] ODST Backpack";
		picture = "";
		model = "\17th Aux Mod\Z_17TH_Armor\data\Backpacks\invisiblepack";
		maximumLoad = 400;
		mass = 60;
	};

	class 17TH_SPARTAN_INVIS_BACKPACK: 17TH_ODST_INVIS_BACKPACK
	{
		displayName = "[17th] Spartan Backpack";
		tf_dialog = "rt1523g_radio_dialog";
		tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
		tf_encryptionCode = "tf_west_radio_code";
		tf_hasLRradio = 1;
		tf_range = 25000;
		tf_subtype = "digital_lr";
	};
};