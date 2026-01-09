
#define _ARMA_

class CfgPatches
{
	class JPSP_SPE_ROMANIAN_UNIFORMS
	{
		units[] = {""};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Characters_F","H_NORTH_SOV_helmets"};
	};
};
class CfgFactionClasses
{
	class JPSP_SPE_ROMANIAN_FACTION
	{
		displayName = "[SPE] Romanian";
		author = "Jpspider";
		icon = "\WW2\SPE_Core_t\Data_t\Factions\Wehrmacht.paa";
		priority = 3;
		side = 1;
	};
};
class CfgEditorSubCategories
{
	class JPSP_SPE_ROMANIAN_SUBCAT
	{
		displayName = "Men (Romanian)";
	};
};
class CfgWorlds
{
	class GenericNames
	{
		class JPSP_ROMANIAN
		{
			class FirstNames
			{
				alexandru = "Alexandru";
				alin = "Alin";
				andreea = "Andreea";
				andrei = "Andrei";
				anton = "Anton";
				avram = "Avram";
				bogdan = "Bogdan";
				boian = "Boian";
				caliban = "Caliban";
				catalin = "Catalin";
				cezar = "Cezar";
				ciprian = "Ciprian";
				constantin = "Constantin";
				cosmin = "Cosmin";
				cristian = "Cristian";
				dragos = "Dragos";
				emil = "Emil";
				gheorghe = "Gheorghe";
				lucian = "Lucian";
				mihai = "Mihai";
				octavian = "Octavian";
				sebastian = "Sebastian";
				sergiu = "Sergiu";
				stefan = "stefan";
				vlad = "Vlad";
			};
			class LastNames
			{
				albescu = "Albescu ";
				albu = "Albu";
				andrei = "Andrei";
				bucur = "Bucur";
				cazacu = "Cazacu";
				cristian = "Cristian";
				enache = "Enache";
				ioveanu = "Ioveanu";
				luca = "Luca";
				mitrea = "Mitrea";
				nicolescu = "Nicolescu";
				baciu = "Baciu";
				ciobanu = "Ciobanu";
				croitoru = "Croitoru";
				dascalu = "Dascalu";
				fieraru = "Fieraru";
				fischer = "Fischer";
				funar = "Funar";
				maier = "Maier";
				popa = "Popa";
				vacarescu = "Vacarescu";
				zamfir = "Zamfir";
			};
		};
		
	};
};
class cfgweapons
{
	class Uniform_Base;
	class UniformItem;
	class ItemCore;
	class Vest_Camo_Base: ItemCore
	{
		class ItemInfo;
	};


	class JPSP_B_RO_U_1941_UNIFORM: Uniform_Base
	{
		author = "Jpspider";
		scope = 2;
		displayName = "RO Romanian M1941 Uniform";
		descriptionShort = "";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Uniforms\U_SPE_OST_base_ca.paa";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "JPSP_B_RO_1941_VEHICLE";
			containerClass = "Supply50";
			mass = 20;
		};
	};
	class H_NORTH_SOV_SSh40_Helmet;
	class H_NORTH_SOV_SSh40_Helmet_2;
	class H_NORTH_SOV_SSh40_Helmet_3;
	class H_NORTH_SOV_SSh40_Helmet_4;
	class H_NORTH_SOV_SSh40_Helmet_5;
	class JPSP_H_RO_1939_HELMET_1: H_NORTH_SOV_SSh40_Helmet
	{
		displayName = "RO M1939 Helmet (Icon) #1";
		hiddenSelectionsTextures[] = {"SPE_ROMANIAN_UNIFORMS\data\Romanian_M39_Icon.paa"};
	};
	class JPSP_H_RO_1939_HELMET_2: H_NORTH_SOV_SSh40_Helmet_2
	{
		displayName = "RO M1939 Helmet (Icon) #2";
		hiddenSelectionsTextures[] = {"SPE_ROMANIAN_UNIFORMS\data\Romanian_M39_Icon.paa"};
	};
	class JPSP_H_RO_1939_HELMET_3: H_NORTH_SOV_SSh40_Helmet_3
	{
		displayName = "RO M1939 Helmet (Icon) #3";
		hiddenSelectionsTextures[] = {"SPE_ROMANIAN_UNIFORMS\data\Romanian_M39_Icon.paa"};
	};
	class JPSP_H_RO_1939_HELMET_4: H_NORTH_SOV_SSh40_Helmet_4
	{
		displayName = "RO M1939 Helmet (Icon) #4";
		hiddenSelectionsTextures[] = {"SPE_ROMANIAN_UNIFORMS\data\Romanian_M39_Icon.paa"};
	};
	class JPSP_H_RO_1939_HELMET_5: H_NORTH_SOV_SSh40_Helmet_5
	{
		displayName = "RO M1939 Helmet (Icon) #5";
		hiddenSelectionsTextures[] = {"SPE_ROMANIAN_UNIFORMS\data\Romanian_M39_Icon.paa"};
	};


};
class UniformSlotInfo;
class CfgVehicles
{
	class SPE_OST_soldier_base;
	class JPSP_B_RO_1941_VEHICLE: SPE_OST_soldier_base
	{
		author = "Jpspider";
		scope = 1;
		scopeArsenal = 2;
		scopeCurator = 2;
		displayName = "RO Romanian 1941 Uniform";
		side = 2;
		nakedUniform = "U_BasicBody";
		uniformClass = "JPSP_B_RO_U_1941_UNIFORM";
		hiddenSelections[] = {"camo","camoB","badge"};
		hiddenSelectionsTextures[] = {"\SPE_ROMANIAN_UNIFORMS\data\Romanian_uniform_SPE_OST.paa","","",""};
	};
};
