class CfgPatches
{
	class Liquid_Sample
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"rag_liquid_framework"
		};
	};
};
class CfgMods
{
	class Liquid_Sample
	{
		dir="\Liquid_Sample";
		picture="";
		action="";
		hideName=1;
		hidePicture=1;
		name="Liquid_Sample";
		credits="Tyson";
		author="Tyson";
		authorID="0";
		version="1.0";
		extra=0;
		type="mod";
		dependencies[] = {"Game","World","Mission"};
		class defs
		{
			class gameScriptModule
			{
				value = "";
				files[] = {"Liquid_Sample/scripts/3_Game"};
			};
			class worldScriptModule
			{
				value = "";
				files[] = {"Liquid_Sample/scripts/4_World"};
			};
			class missionScriptModule
			{
				value = "";
				files[] = {"Liquid_Sample/scripts/5_Mission"};
			};
		};
	};
};
class CfgVehicles
{
	class WaterBottle;
	class Test_WaterBottle_Tequila: WaterBottle
	{
		scope=2;
		displayName="Tequila";
		descriptionShort="Tequila";
		varLiquidTypeInit=700;
		liquidContainerType="700";
	};
	class Test_WaterBottle_OrangeJuice: WaterBottle
	{
		scope=2;
		displayName="OrangeJuice";
		descriptionShort="OrangeJuice";
		varLiquidTypeInit=701;
		liquidContainerType="701";
	};
};
class cfgLiquidDefinitions
{
	class SampleOneLiquid
	{
		type=700;	// integer from constants.c
		displayName="Tequila";
		flammability=30;
		liquidBoilingThreshold=150;
		class Nutrition
		{
			fullnessIndex=1;
			energy=0;
			water=80;
			nutritionalIndex=75;
			toxicity=-0.0;
			digestibility=2;
		};
	};
	class SampleTwoLiquid
	{
		type=701;	// integer from constants.c
		displayName="OrangeJuice";
		flammability=-10;
		liquidFreezeThreshold=0;
		liquidThawThreshold=0;
		liquidBoilingThreshold=150;
		class Nutrition
		{
			fullnessIndex=1;
			energy=5;
			water=100;
			nutritionalIndex=75;
			toxicity=-0.0099999998;
			digestibility=2;
		};
	};
};