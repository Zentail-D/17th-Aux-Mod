// Big shoutout to Fireteam Zulu and OPTRE for letting me create an Aux Mod off of their armors. Check out their mod!

class CfgPatches
{
	class Z_17TH_Core
	{
		author="Zentail";
		name="17th Aux Mod";
		units[]={};
		weapons[]={};
		magazines[]={};
		ammo[]={};
		requiredVersion=1.0;
		requiredAddons[]={};
	};
};
class CfgAddons
{
	class PreloadAddons
	{
		class Z_17TH_Core
		{
			list[]=
			{
				"Z_17TH_Core"
			};
		};
	};
};
class CfgEditorCategories
{
	class Z_17TH_EdCat_17thSWG_UNSCDF
	{
		displayName="[17th] UNSCDF";
	};
	class Z_17TH_EdCat_17thSWG_INS
	{
		displayName="[17th] Insurgents";
	};
};
class CfgEditorSubcategories
{
	class Z_17TH_EdSubCat_Men
	{
		displayName="Men";
	};
};
class CfgFactionClasses
{
	class 17TH_UNSC
	{
		displayName="[17th] UNSCDF";
		author="Zentail";
		priority=1;
		side=1;
		icon="\17th Aux Mod\Z_17TH_Core\data\17th_Aux_Icon_128x128.paa";
		flag="\17th Aux Mod\Z_17TH_Core\data\17th_Aux_Icon_128x128.paa";
		primaryLanguage="EN";
	};
	class CfgVehicleClasses
	{
		class 17TH_UNSC_Armored_class
		{
			displayName="Armored (17th)";
			author="Zentail";
			scope=2;
			scopeArsenal=2;
			scopeCurator=2;
		};
		class 17TH_UNSC_Air_class
		{
			displayName="Air (17th)";
			author="Zential";
			scope=0;
			scopeArsenal=0;
			scopeCurator=0;
		};
	};
};