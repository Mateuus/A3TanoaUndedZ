// Extended-Building mod
class ShootingPos: Exile_AbstractCraftingRecipe
{
	name = "Shooting Pos";
	pictureItem = "ShootingPos_F_Kit";
	returnedItems[] = 
	{
		{1, "ShootingPos_F_Kit"}
	};
	requiresFire = 0;
	components[] = 
	{
		{4, "Exile_Item_Woodlog"},
	};
		category = "Extended-Building";
};
class MetalShelf: Exile_AbstractCraftingRecipe
{
	name = "Metal Shelf";
	pictureItem = "Land_ShelvesMetal_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_ShelvesMetal_F_Kit"}
	};
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{3, "Exile_Item_MetalBoard"},
		{5, "Exile_Item_WoodPlank"},
	};
		category = "Extended-Building";
};
class RustyTank: Exile_AbstractCraftingRecipe
{
	name = "RustyTank";
	pictureItem = "Land_Tank_rust_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_Tank_rust_F_Kit"}
	};
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_WaterBarrelKit"},
	};
		category = "Extended-Building";
};
class Steelfence: Exile_AbstractCraftingRecipe
{
	name = "Steelfence";
	pictureItem = "Land_Wall_Tin_4_Kit";
	returnedItems[] = 
	{
		{1, "Land_Wall_Tin_4_Kit"}
	};
	requiresFire = 0;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{2, "Exile_Item_MetalBoard"},
	};
		category = "Extended-Building";
};
class Pier: Exile_AbstractCraftingRecipe
{
	name = "Pier";
	pictureItem = "Land_Pier_small_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_Pier_small_F_Kit"}
	};
	requiresFire = 0;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{10, "Exile_Item_Woodlog"},
	};
		category = "Extended-Building";
};
class CncWallMil4M: Exile_AbstractCraftingRecipe
{
	name = "Concrete Wall Military 4m";
	pictureItem = "Land_Mil_WallBig_4m_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_Mil_WallBig_4m_F_Kit"}
	};
	requiresFire = 0;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{2, "Exile_Item_JunkMetal"},
		{2, "Exile_Item_WoodPlank"},
	};
		category = "Extended-Building";
};
class MilitaryArea: Exile_AbstractCraftingRecipe
{
	name = "Military Area";
	pictureItem = "Land_Sign_WarningMilitaryArea_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_Sign_WarningMilitaryArea_F_Kit"}
	};
	requiresFire = 0;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{2, "Exile_Item_JunkMetal"},
		{2, "Exile_Item_WoodPlank"},
	};
		category = "Extended-Building";
};
class Icebox: Exile_AbstractCraftingRecipe
{
	name = "Icebox";
	pictureItem = "Land_Icebox_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_Icebox_F_Kit"}
	};
	requiresFire = 0;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{2, "Exile_Item_MetalBoard"},
		{4, "Exile_Item_PlasticBottleEmpty"},
	};
		category = "Extended-Building";
};
class Bargate: Exile_AbstractCraftingRecipe
{
	name = "Bar Gate";
	pictureItem = "Land_BarGate_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_BarGate_F_Kit"}
	};
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{1, "Exile_Item_MetalBoard"},
		{3, "Exile_Item_MetalPole"},
	};
		category = "Extended-Building";
};
class Citygate: Exile_AbstractCraftingRecipe
{
	name = "City Gate";
	pictureItem = "Land_City_Gate_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_City_Gate_F_Kit"}
	};
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{1, "Exile_Item_MetalBoard"},
		{1, "Exile_Item_MetalPole"},
		{1, "Exile_Item_Cement"}
	};
		category = "Extended-Building";
};
class Rack: Exile_AbstractCraftingRecipe
{
	name = "A Shelf";
	pictureItem = "Land_Rack_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_Rack_F_Kit"}
	};
	requiresFire = 0;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{4, "Exile_Item_WoodPlank"},
		{2, "Exile_Item_JunkMetal"},
	};
		category = "Extended-Building";
};
class ConcreteWall8m: Exile_AbstractCraftingRecipe
{
	name = "Concrete Wall 8m";
	pictureItem = "Land_City2_8m_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_City2_8m_F_Kit"}
	};
	requiresFire = 0;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{4, "Exile_Item_Cement"},
	};
		category = "Extended-Building";
};
class ConcreteWall4m: Exile_AbstractCraftingRecipe
{
	name = "Concrete Wall 4m";
	pictureItem = "Land_City2_4m_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_City2_4m_F_Kit"}
	};
	requiresFire = 0;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{2, "Exile_Item_Cement"},
	};
		category = "Extended-Building";
};
class ConcreteWall1: Exile_AbstractCraftingRecipe
{
	name = "Concrete Wall";
	pictureItem = "Land_Wall_IndCnc_4_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_Wall_IndCnc_4_F_Kit"}
	};
	requiresFire = 0;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{3, "Exile_Item_Cement"},
	};
		category = "Extended-Building";
};
class ConcreteRamp: Exile_AbstractCraftingRecipe
{
	name = "Concrete Ramp";
	pictureItem = "Land_RampConcrete_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_RampConcrete_F_Kit"}
	};
	requiresFire = 0;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{3, "Exile_Item_Cement"},
	};
		category = "Extended-Building";
};
class SandbagsLong: Exile_AbstractCraftingRecipe
{
	name = "Sandbags Long";
	pictureItem = "Land_BagFence_Long_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_BagFence_Long_F_Kit"}
	};
	requiresFire = 0;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{1, "Exile_Item_Sand"},
	};
		category = "Extended-Building";
};
class SandbagCorner: Exile_AbstractCraftingRecipe
{
	name = "Sandbag Corner";
	pictureItem = "Land_BagFence_Corner_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_BagFence_Corner_F_Kit"}
	};
	requiresFire = 0;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{1, "Exile_Item_Sand"},
	};
		category = "Extended-Building";
};
class LandContainer: Exile_AbstractCraftingRecipe
{
	name = "LandContainer";
	pictureItem = "Land_Cargo20_military_green_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_Cargo20_military_green_F_Kit"}
	};
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{6, "Exile_Item_MetalBoard"},
	};
		category = "Extended-Building";
};
class Ammobox: Exile_AbstractCraftingRecipe
{
	name = "Ammobox";
	pictureItem = "Land_Pallet_MilBoxes_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_Pallet_MilBoxes_F_Kit"}
	};
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{1, "Exile_Item_MetalBoard"},
		{1, "Exile_Item_StorageCrateKit"},
		{2, "Exile_Item_JunkMetal"},
	};
		category = "Extended-Building";
};
class Watercooler: Exile_AbstractCraftingRecipe
{
	name = "Water Cooler";
	pictureItem = "Land_WaterCooler_01_new_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_WaterCooler_01_new_F_Kit"}
	};
	requiresFire = 0;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{4, "Exile_Item_MetalBoard"},
		{1, "Exile_Item_WaterBarrelKit"},
	};
		category = "Extended-Building";
};
class CncBarrier: Exile_AbstractCraftingRecipe
{
	name = "Concrete Barrier";
	pictureItem = "Land_CncBarrier_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_CncBarrier_F_Kit"}
	};
	requiresFire = 0;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{1, "Exile_Item_Cement"},
		{1, "Exile_Item_Sand"},
	};
		category = "Extended-Building";
};
class Stonewall: Exile_AbstractCraftingRecipe
{
	name = "Stone Wall";
	pictureItem = "Land_Stone_4m_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_Stone_4m_F_Kit"}
	};
	requiresFire = 0;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{1, "Exile_Item_Cement"},
		{1, "Exile_Item_Sand"},
	};
		category = "Extended-Building";
};
class Stonegate: Exile_AbstractCraftingRecipe
{
	name = "Stone Gate";
	pictureItem = "Land_Stone_Gate_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_Stone_Gate_F_Kit"}
	};
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{1, "Exile_Item_MetalPole"},
		{1, "Exile_Item_MetalBoard"},
		{1, "Exile_Item_Cement"},
		{1, "Exile_Item_Sand"},
	};
		category = "Extended-Building";
};
class CamoNetOPFORopen: Exile_AbstractCraftingRecipe
{
	name = "CamoNet OPFOR open";
	pictureItem = "CamoNet_OPFOR_open_F_Kit";
	returnedItems[] = 
	{
		{1, "CamoNet_OPFOR_open_F_Kit"}
	};
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{2, "Exile_Item_MetalPole"},
	};
		category = "Extended-Building";
};
class CamoNetINDPopen: Exile_AbstractCraftingRecipe
{
	name = "CamoNet INDP open";
	pictureItem = "CamoNet_INDP_open_F_Kit";
	returnedItems[] = 
	{
		{1, "CamoNet_INDP_open_F_Kit"}
	};
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{2, "Exile_Item_MetalPole"},
	};
		category = "Extended-Building";
};
class CamoNetBLUFORopen: Exile_AbstractCraftingRecipe
{
	name = "CamoNet BLUFOR open";
	pictureItem = "CamoNet_BLUFOR_open_F_Kit";
	returnedItems[] = 
	{
		{1, "CamoNet_BLUFOR_open_F_Kit"}
	};
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{2, "Exile_Item_MetalPole"},
	};
		category = "Extended-Building";
};
class Barrier1: Exile_AbstractCraftingRecipe
{
	name = "Barrier";
	pictureItem = "singleBarrier_1_kit";
	returnedItems[] = 
	{
		{1, "singleBarrier_1_kit"}
	};
	requiresFire = 0;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{1, "Exile_Item_Sand"},
	};
		category = "Extended-Building";
};
class Barrier3: Exile_AbstractCraftingRecipe
{
	name = "Barrier3";
	pictureItem = "Land_HBarrier_3_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_HBarrier_3_F_Kit"}
	};
	requiresFire = 0;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{3, "Exile_Item_Sand"},
	};
		category = "Extended-Building";
};
class Shabbylamp: Exile_AbstractCraftingRecipe
{
	name = "Shabby Lamp";
	pictureItem = "Land_LampShabby_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_LampShabby_F_Kit"}
	};
	requiresFire = 0;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{8, "Exile_Item_Woodlog"},
		{2, "Exile_Item_ExtensionCord"},
		{1, "Exile_Item_LightBulb"},
	};
		category = "Extended-Building";
};
class Sunshade: Exile_AbstractCraftingRecipe
{
	name = "Sunshade";
	pictureItem = "Land_Sunshade_04_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_Sunshade_04_F_Kit"}
	};
	requiresFire = 0;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{1, "Exile_Item_Woodlog"},
		{1, "Exile_Item_Rope"},
	};
		category = "Extended-Building";
};
class Sunchair: Exile_AbstractCraftingRecipe
{
	name = "Sunchair";
	pictureItem = "Land_Sun_chair_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_Sun_chair_F_Kit"}
	};
	requiresFire = 0;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{2, "Exile_Item_Woodlog"},
		{2, "Exile_Item_Rope"},
	};
		category = "Extended-Building";
};
class Chair: Exile_AbstractCraftingRecipe
{
	name = "Chair";
	pictureItem = "Land_ChairWood_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_ChairWood_F_Kit"}
	};
	requiresFire = 0;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{5, "Exile_Item_WoodPlank"},
	};
		category = "Extended-Building";
};	
class Table: Exile_AbstractCraftingRecipe
{
	name = "Table";
	pictureItem = "Land_TableDesk_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_TableDesk_F_Kit"}
	};
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{10, "Exile_Item_WoodPlank"},
		{1, "Exile_Item_MetalBoard"},
	};
		category = "Extended-Building";
};	
class SmallShed: Exile_AbstractCraftingRecipe
{
	name = "Small Shed";
	pictureItem = "Land_Shed_Small_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_Shed_Small_F_Kit"}
	};
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{2, "Exile_Item_MetalBoard"}, // Change
		{1, "Exile_Item_MetalPole"},
		{1, "Exile_Item_JunkMetal"},
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_MetalScrews"}, // Change
	};
	tools[] = {"Exile_Item_Wrench"}; // Change
	category = "Extended-Building";
};

class Airportlamp: Exile_AbstractCraftingRecipe
{
	name = "Airportlamp";
	pictureItem = "Land_LampAirport_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_LampAirport_F_Kit"}
	};
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{4, "Exile_Item_ExtensionCord"},
		{4, "Exile_Item_LightBulb"},
		{3, "Exile_Item_MetalPole"},
	};
	tools[] = {"Exile_Item_Screwdriver", "Exile_Item_Pliers"}; // Change
	category = "Extended-Building";
};

class LampHalogen: Exile_AbstractCraftingRecipe
{
	name = "Halogen Base Lamp";
	pictureItem = "Land_LampHalogen_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_LampHalogen_F_Kit"}
	};
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{10, "Exile_Item_LightBulb"},
		{5, "Exile_Item_ExtensionCord"}, // Change
		{3, "Exile_Item_MetalPole"},
	};
	tools[] = {"Exile_Item_Screwdriver", "Exile_Item_Pliers"}; // Change
	category = "Extended-Building";
};

class BagBunkerBig: Exile_AbstractCraftingRecipe
{
	name = "Bag Bunker Big";
	pictureItem = "Land_BagBunker_Large_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_BagBunker_Large_F_Kit"}
	};
	requiresFire = 0;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{1, "Exile_Item_Sand"},  // Change
		{2, "Exile_Item_Cement"},  // Change
		{2, "Exile_Item_WoodPlank"},  // Change
		{1, "Exile_Item_Rope"},
	};
	category = "Extended-Building";
};

class HelipadCivil: Exile_AbstractCraftingRecipe
{
	name = "Landing Platform";
	pictureItem = "Land_HelipadCivil_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_HelipadCivil_F_Kit"}
	};
	requiresFire = 0;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{1, "Exile_Item_Sand"},  // Change
		{2, "Exile_Item_Cement"},  // Change
		{2, "Exile_Item_MountainDupe"},  // Change
	};
	category = "Extended-Building";
};		

class CNCShelter: Exile_AbstractCraftingRecipe
{
	name = "CNC Shelter";
	pictureItem = "Land_CncShelter_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_CncShelter_F_Kit"}
	};
	requiresFire = 0;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{1, "Exile_Item_Sand"},  // Change
		{2, "Exile_Item_Cement"},  // Change
	};
	category = "Extended-Building";
};		

class CNCWall: Exile_AbstractCraftingRecipe
{
	name = "CNC Wall";
	pictureItem = "Land_CncWall4_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_CncWall4_F_Kit"}
	};
	requiresFire = 0;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{1, "Exile_Item_Sand"},  // Change
		{2, "Exile_Item_Cement"},  // Change
	};
	category = "Extended-Building";
};	

class Razorwire: Exile_AbstractCraftingRecipe
{
	name = "Razor Wire";
	pictureItem = "Land_Razorwire_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_Razorwire_F_Kit"}
	};
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{1, "Exile_Item_MetalPole"},
		{1, "Exile_Item_JunkMetal"}, 
		{2, "Exile_Item_MetalScrews"},
	};
	tools[] = {"Exile_Item_Screwdriver", "Exile_Item_Pliers"};
	category = "Extended-Building";
};		

class PavementWideCorner: Exile_AbstractCraftingRecipe
{
	name = "Pavement Wide Corner";
	pictureItem = "Land_Pavement_wide_corner_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_Pavement_wide_corner_F_Kit"}
	};
	requiresFire = 0;
	components[] = 
	{
		{1, "Exile_Item_Cement"},
	};
	
	category = "Extended-Building";
};

class PavementWide: Exile_AbstractCraftingRecipe
{
	name = "Pavement Wide";
	pictureItem = "Land_Pavement_wide_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_Pavement_wide_F_Kit"}
	};
	requiresFire = 0;
	components[] = 
	{
		{1, "Exile_Item_Cement"},
	};
	
	category = "Extended-Building";
};

class PavementNarrowCorner: Exile_AbstractCraftingRecipe
{
	name = "Pavement Narrow Corner";
	pictureItem = "Land_Pavement_narrow_corner_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_Pavement_narrow_corner_F_Kit"}
	};
	requiresFire = 0;
	components[] = 
	{
		{1, "Exile_Item_Cement"},
	};
	
	category = "Extended-Building";
};

class PavementNarrow: Exile_AbstractCraftingRecipe
{
	name = "Pavement Narrow";
	pictureItem = "Land_Pavement_narrow_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_Pavement_narrow_F_Kit"}
	};
	requiresFire = 0;
	components[] = 
	{
		{1, "Exile_Item_Cement"},
	};
	
	category = "Extended-Building";
};

class AltisMap: Exile_AbstractCraftingRecipe
{
	name = "Altis Map";
	pictureItem = "MapBoard_altis_F_Kit";
	returnedItems[] = 
	{
		{1, "MapBoard_altis_F_Kit"}
	};
	requiresFire = 0;
	components[] = 
	{
		{1, "Exile_Item_MetalPole"},
		{1, "Exile_Item_WoodPlank"},
	};
	
	category = "Extended-Building";
};

class CampingTable: Exile_AbstractCraftingRecipe
{
	name = "Camping Table";
	pictureItem = "Land_CampingTable_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_CampingTable_F_Kit"}
	};
	requiresFire = 1;
	components[] = 
	{
		{1, "Exile_Item_MetalPole"},
		{1, "Exile_Item_JunkMetal"},
	};
	
	category = "Extended-Building";
};

class CampingLight: Exile_AbstractCraftingRecipe
{
	name = "Campinglight";
	pictureItem = "Land_Camping_Light_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_Camping_Light_F_Kit"}
	};
	requiresFire = 1;
	components[] = 
	{
		{1, "Exile_Item_LightBulb"},
		{1, "Exile_Item_JunkMetal"},
	};
	
	category = "Extended-Building";
};

class CampingChairV2: Exile_AbstractCraftingRecipe
{
	name = "Camping Chair V2";
	pictureItem = "Land_CampingChair_V2_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_CampingChair_V2_F_Kit"}
	};
	requiresFire = 1;
	components[] = 
	{
		{2, "Exile_Item_JunkMetal"},
	};
	
	category = "Extended-Building";
};

class CampingChairV1: Exile_AbstractCraftingRecipe
{
	name = "Camping Chair V1";
	pictureItem = "Land_CampingChair_V1_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_CampingChair_V1_F_Kit"}
	};
	requiresFire = 1;
	components[] = 
	{
		{2, "Exile_Item_JunkMetal"},
	};
	
	category = "Extended-Building";
};						