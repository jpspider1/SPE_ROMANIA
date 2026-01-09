
#define _ARMA_

class CfgPatches
{
	class JPSP_SPE_ROMANIAN_UNIFORMS
	{
		units[] = {""};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Characters_F"};
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
	class Vest_Camo_Base: ItemCore
	{
		class ItemInfo;
	};


	class JPSP_B_RO_U_UNIFORM: Uniform_Base
	{
		author = "Jpspider";
		scope = 2;
		displayName = "RO Romanian Uniform";
		descriptionShort = "";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Uniforms\U_SPE_OST_base_ca.paa";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "JPSP_B_RO_VEHICLE";
			containerClass = "Supply50";
			mass = 20;
		};
	};
};
class UniformSlotInfo;
class CfgVehicles
{
	class SPE_OST_soldier_base;
	class JPSP_B_RO_VEHICLE: SPE_OST_soldier_base
	{
		author = "Jpspider";
		scope = 1;
		scopeArsenal = 2;
		scopeCurator = 2;
		displayName = "RO Romanian Uniform";
		side = 2;
		nakedUniform = "U_BasicBody";
		uniformClass = "JPSP_B_RO_U_UNIFORM";
		hiddenSelections[] = {"camo","camoB","badge"};
		hiddenSelectionsTextures[] = {"\SPE_ROMANIAN_UNIFORMS\data\Romanian_uniform_SPE_OST.paa","","",""};
	};
};
