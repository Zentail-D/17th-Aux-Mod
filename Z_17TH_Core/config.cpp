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