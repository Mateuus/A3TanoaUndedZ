class CookBBQSandwich: Exile_AbstractCraftingRecipe
{
	name = "Cook BBQ Sandwich";
	pictureItem = "Exile_Item_BBQSandwich_Cooked";
	requiresFire = 1;
	returnedItems[] =
	{
    	{1, "Exile_Item_BBQSandwich_Cooked"}
    };
	tools[] =
	{
         "Exile_Item_CookingPot"
    };
     components[] = 
	{
    	{1, "Exile_Item_BBQSandwich"}
    };
		category = "Food/Drinks";
}; 

class CookCatFood: Exile_AbstractCraftingRecipe
{
	name = "Cook Cat Food";
	pictureItem = "Exile_Item_CatFood_Cooked";
	requiresFire = 1;
	returnedItems[] =
	{
    	{1, "Exile_Item_CatFood_Cooked"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot"
	};
     components[] = 
	{
		{1, "Exile_Item_CatFood"}
	};
		category = "Food/Drinks";
}; 

class CookChristmasTinner: Exile_AbstractCraftingRecipe
{
	name = "Cook Christmas Tinner";
	pictureItem = "Exile_Item_ChristmasTinner_Cooked";
	requiresFire = 1;
	returnedItems[] =
	{
    	{1, "Exile_Item_ChristmasTinner_Cooked"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot"
	};
	components[] = 
	{
    	{1, "Exile_Item_ChristmasTinner"}
	};
	category = "Food/Drinks";
};
class CookCoffee: Exile_AbstractCraftingRecipe
{
	name = "Brew Coffee";
	pictureItem = "Exile_Item_PlasticBottleCoffee";
	requiresFire = 1;
	returnedItems[] =
	{
    	{1, "Exile_Item_PlasticBottleCoffee"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot"
	};
     components[] = 
	{
    	{1, "Exile_Item_PlasticBottleFreshWater"},
    	{1, "Exile_Item_InstantCoffee"}
	};
		category = "Food/Drinks";
};
class CookDogFood: Exile_AbstractCraftingRecipe
{
	name = "Cook Dog Food";
	pictureItem = "Exile_Item_DogFood_Cooked";
	requiresFire = 1;
	returnedItems[] =
	{
    	{1, "Exile_Item_DogFood_Cooked"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot"
	};
     components[] = 
	{
    	{1, "Exile_Item_DogFood"}
	};
		category = "Food/Drinks";
}; 

class CookGloriousKnakworst: Exile_AbstractCraftingRecipe
{
	name = "Cook Glorious Knakworst";
	pictureItem = "Exile_Item_GloriousKnakworst_Cooked";
	requiresFire = 1;
	returnedItems[] =
	{
    	{1, "Exile_Item_GloriousKnakworst_Cooked"}
	};
	tools[] =
	{
         "Exile_Item_CookingPot"
	};
     components[] = 
	{
    	{1, "Exile_Item_GloriousKnakworst"}
	};
		category = "Food/Drinks";
}; 

class CookPlasticBottleDirtyWater: Exile_AbstractCraftingRecipe
{
	name = "Cook Dirty Water";
	pictureItem = "Exile_Item_PlasticBottleFreshWater";
	requiresFire = 1;
	returnedItems[] =
	{
    	{1, "Exile_Item_PlasticBottleFreshWater"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot"
	};
     components[] = 
	{
    	{1, "Exile_Item_PlasticBottleDirtyWater"}
	};
		category = "Food/Drinks";
};
class CookPlasticBottleSaltWater: Exile_AbstractCraftingRecipe
{
	name = "Cook Salt Water";
	pictureItem = "Exile_Item_PlasticBottleFreshWater";
	requiresFire = 1;
	returnedItems[] =
	{
    	{1, "Exile_Item_PlasticBottleFreshWater"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot"
	};
     components[] = 
	{
    	{1, "Exile_Item_PlasticBottleSaltWater"}
	};
		category = "Food/Drinks";
}; 
class CookSausageGravy: Exile_AbstractCraftingRecipe
{
	name = "Cook Sausage Gravy";
	pictureItem = "Exile_Item_SausageGravy_Cooked";
	requiresFire = 1;
	returnedItems[] =
	{
    	{1, "Exile_Item_SausageGravy_Cooked"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot"
	};
     components[] = 
	{
    	{1, "Exile_Item_SausageGravy"}
	};
		category = "Food/Drinks";
}; 
class CookSurstromming: Exile_AbstractCraftingRecipe
{
	name = "Cook Surströmming";
	pictureItem = "Exile_Item_Surstromming_Cooked";
	requiresFire = 1;
	returnedItems[] =
	{
    	{1, "Exile_Item_Surstromming_Cooked"}
    };
	tools[] =
	{
		"Exile_Item_CookingPot"
    };
     components[] = 
	{
    	{1, "Exile_Item_Surstromming"}
    };
		category = "Food/Drinks";
}; 

class CraftBushKitGreen: Exile_AbstractCraftingRecipe
{
	name = "Craft a Bush Kit (Green)";
	pictureItem = "Exile_Item_BushKit_Green";
	returnedItems[] = 
	{
    	{1, "Exile_Item_BushKit_Green"}
    };
	components[] = 
	{
    	{5, "Exile_Item_WoodLog"}
    };
		category = "Craftables";
};
class CraftWoodPlank: Exile_AbstractCraftingRecipe
{
	name = "Craft Wood Plank";
	pictureItem = "Exile_Item_WoodPlank";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_WoodPlank"}
	};
	components[] = 
	{
		{2, "Exile_Item_WoodLog"}
	};
	tools[] ={"Exile_Item_Handsaw"};
    category = "Building";
}; 
class CraftFirePlace: Exile_AbstractCraftingRecipe
{
	name = "Craft Fire Place";
	pictureItem = "Exile_Item_CampFireKit";
	returnedItems[] = 
	{
    	{1, "Exile_Item_CampFireKit"}
    };
	components[] = 
	{
    	{2, "Exile_Item_WoodLog"}
    };
		category = "Building";
};
class CraftFloodLight: Exile_AbstractCraftingRecipe
{
	name = "Craft Flood Light";
	pictureItem = "Exile_Item_FloodLightKit";
	requiresFire = 1;
	returnedItems[] = 
	{
    	{1, "Exile_Item_FloodLightKit"}
    };
     components[] = 
	{
    	{1, "Exile_Item_MetalPole"},
    	{1, "Exile_Item_LightBulb"},
    	{1, "Exile_Item_ExtensionCord"}
    };
		category = "Building";
};
class CraftFortificationUpgrade: Exile_AbstractCraftingRecipe
{
	name = "Craft Fortification Upgrade";
	pictureItem = "Exile_Item_MetalBoard"; //<< CHANGE IT
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
    	{1, "Exile_Item_FortificationUpgrade"}
    };
     components[] = 
	{
    	{2, "Exile_Item_MetalPole"},
    	{4, "Exile_Item_MetalBoard"}
    };
	tools[] = {"Exile_Item_Grinder"};
		category = "Building";
};
class CraftMetalBoard: Exile_AbstractCraftingRecipe
{
	name = "Craft Metal Board";
	pictureItem = "Exile_Item_MetalBoard";
	requiresFire = 1;
	returnedItems[] = 
	{
    	{1, "Exile_Item_MetalBoard"}
    };
     components[] = 
	{
    	{2, "Exile_Item_JunkMetal"}
    };
	tools[] = {"Exile_Item_Grinder"};
		category = "Craftables";
};
class CraftMetalHedgehog: Exile_AbstractCraftingRecipe
{
	name = "Craft Metal Hedgehog";
	pictureItem = "Exile_Item_MetalHedgehogKit";
	requiresFire = 1;
	returnedItems[] = 
	{
    	{1, "Exile_Item_MetalHedgehogKit"}
    };
     components[] = 
	{
    	{4, "Exile_Item_MetalPole"}
    };
	tools[] = {"Exile_Item_Grinder"};
		category = "Building";
};
 class CraftMetalPole: Exile_AbstractCraftingRecipe
 {
	name = "Craft Metal Pole";
	pictureItem = "Exile_Item_MetalPole";
	requiresFire = 1;
	returnedItems[] = 
	{
    	{1, "Exile_Item_MetalPole"}
    };
     components[] = 
	{
    	{4, "Exile_Item_JunkMetal"}
    };
	tools[] = {"Exile_Item_Grinder"};
		category = "Craftables";
};
 class CraftPortableGenerator: Exile_AbstractCraftingRecipe
 {
	name = "Craft Portable Generator";
	pictureItem = "Exile_Item_PortableGeneratorKit";
	requiresFire = 1;
	returnedItems[] = 
	{
    	{1, "Exile_Item_PortableGeneratorKit"}
    };
     components[] = 
	{
    	{4, "Exile_Item_MetalBoard"},
    	{1, "Exile_Item_FuelCanisterFull"},
    	{1, "Exile_Item_ExtensionCord"}
    };
		category = "Building";
};
 class CraftStorageCrate: Exile_AbstractCraftingRecipe
 {
	name = "Craft Storage Crate";
	pictureItem = "Exile_Item_StorageCrateKit";
     requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
    	{1, "Exile_Item_StorageCrateKit"}
    };
     components[] = 
	{
    	{5, "Exile_Item_WoodPlank"}
    };
		category = "Building";
};
 class CraftWaterBarrel: Exile_AbstractCraftingRecipe
 {
	name = "Craft Water Barrel";
	pictureItem = "Exile_Item_WaterBarrelKit";
     requiredInteractionModelGroup = "WorkBench";
	requiresFire = 1;
	returnedItems[] = 
	{
    	{1, "Exile_Item_WaterBarrelKit"}
    };
     components[] = 
	{
    	{20, "Exile_Item_PlasticBottleEmpty"}
    };
		category = "Building";
};
 class CraftWoodDoorWay: Exile_AbstractCraftingRecipe
 {
	name = "Craft Wood Doorway";
	pictureItem = "Exile_Item_WoodDoorwayKit";
     requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
    	{1, "Exile_Item_WoodDoorwayKit"}
    };
     components[] = 
	{
    	{6, "Exile_Item_WoodPlank"}
    };
		category = "Building";
};
 class CraftWoodFloor: Exile_AbstractCraftingRecipe
 {
	name = "Craft Wood Floor";
	pictureItem = "Exile_Item_WoodFloorKit";
     requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
    	{1, "Exile_Item_WoodFloorKit"}
    };
     components[] = 
	{
    	{4, "Exile_Item_WoodPlank"}
    };
		category = "Building";
};
 class CraftWoodFloorPort: Exile_AbstractCraftingRecipe
 {
	name = "Craft Wood Floor Port";
	pictureItem = "Exile_Item_WoodFloorPortKit";
     requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
    	{1, "Exile_Item_WoodFloorPortKit"}
    };
     components[] = 
	{
    	{6, "Exile_Item_WoodPlank"}
    };
		category = "Building";
};
 class CraftWoodGate: Exile_AbstractCraftingRecipe
 {
	name = "Craft Wood Gate";
	pictureItem = "Exile_Item_WoodGateKit";
     requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
    	{1, "Exile_Item_WoodGateKit"}
    };
     components[] = 
	{
    	{8, "Exile_Item_WoodPlank"}
    };
		category = "Building";
};
class CraftWoodStairs: Exile_AbstractCraftingRecipe
{
	name = "Craft Wood Stairs";
	pictureItem = "Exile_Item_WoodStairsKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_WoodStairsKit"}
	};
	components[] = 
	{
		{6, "Exile_Item_WoodPlank"}
	};
		category = "Building";
};
class CraftWoodSupport: Exile_AbstractCraftingRecipe
{
	name = "Craft Wood Support";
	pictureItem = "Exile_Item_WoodSupportKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_WoodSupportKit"}
	};
	components[] = 
	{
		{6, "Exile_Item_WoodPlank"}
	};
		category = "Building";
};
class CraftWoodWall: Exile_AbstractCraftingRecipe
{
	name = "Craft Wood Wall";
	pictureItem = "Exile_Item_WoodWallKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_WoodWallKit"}
	};
	components[] = 
	{
		{4, "Exile_Item_WoodPlank"}
	};
		category = "Building";
};
class CraftWoodWallHalf: Exile_AbstractCraftingRecipe
{
	name = "Craft 1/2 Wood Wall";
	pictureItem = "Exile_Item_WoodWallHalfKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_WoodWallHalfKit"}
	};
	components[] = 
	{
		{2, "Exile_Item_WoodPlank"}
	};
		category = "Building";
};
class CraftWoodWindow: Exile_AbstractCraftingRecipe
{
	name = "Craft Wood Window";
	pictureItem = "Exile_Item_WoodWindowKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_WoodWindowKit"}
	};
	components[] = 
	{
		{6, "Exile_Item_WoodPlank"}
	};
		category = "Building";
};
class CraftWorkBench: Exile_AbstractCraftingRecipe
{
	name = "Craft Work Bench";
	pictureItem = "Exile_Item_WorkBenchKit";
	returnedItems[] = 
	{
		{1, "Exile_Item_WorkBenchKit"}
	};
	components[] = 
	{
		{4, "Exile_Item_WoodLog"}
	};
		category = "Building";
};
 class EmptyFuelCanister: Exile_AbstractCraftingRecipe
 {
	name = "Empty Fuel Canister";
	pictureItem = "Exile_Item_FuelCanisterEmpty";
	returnedItems[] = 
	{
    	{1, "Exile_Item_FuelCanisterEmpty"}
    };
     components[] = 
	{
    	{1, "Exile_Item_FuelCanisterFull"}
    };
		category = "Food/Drinks";
};
 class EmptyPlasticBottleDirtyWater: Exile_AbstractCraftingRecipe
 {
	name = "Empty Dirty Water";
	pictureItem = "Exile_Item_PlasticBottleEmpty";
	returnedItems[] =
	{
    	{1, "Exile_Item_PlasticBottleEmpty"}
    };
     components[] =
	{
    	{1, "Exile_Item_PlasticBottleDirtyWater"}
    };
		category = "Food/Drinks";
};
 class EmptyPlasticBottleSaltWater: Exile_AbstractCraftingRecipe
 {
	name = "Empty Salt Water";
	pictureItem = "Exile_Item_PlasticBottleEmpty";
	returnedItems[] =
	{
    	{1, "Exile_Item_PlasticBottleEmpty"}
    };
     components[] =
	{
    	{1, "Exile_Item_PlasticBottleSaltWater"}
    };
		category = "Food/Drinks";
};
 class FillEmptyPlasticBottleWithDirtyWater: Exile_AbstractCraftingRecipe
 {
	name = "Fill Dirty Water";
	pictureItem = "Exile_Item_PlasticBottleDirtyWater";
     requiredInteractionModelGroup = "WaterSource";
	returnedItems[] =
	{
    	{1, "Exile_Item_PlasticBottleDirtyWater"}
    };
     components[] = 
	{
    	{1, "Exile_Item_PlasticBottleEmpty"}
    };
		category = "Food/Drinks";
};
 class FillEmptyPlasticBottleWithFreshWater: Exile_AbstractCraftingRecipe
 {
	name = "Fill Fresh Water";
	pictureItem = "Exile_Item_PlasticBottleFreshWater";
     requiredInteractionModelGroup = "CleanWaterSource";
	returnedItems[] =
	{
    	{1, "Exile_Item_PlasticBottleFreshWater"}
    };
     components[] = 
	{
    	{1, "Exile_Item_PlasticBottleEmpty"}
    };
		category = "Food/Drinks";
};
 class FillEmptyPlasticBottleWithSaltWater: Exile_AbstractCraftingRecipe
 {
	name = "Fill Salt Water";
	pictureItem = "Exile_Item_PlasticBottleSaltWater";
     requiresOcean = 1;
	returnedItems[] = 
	{
    	{1, "Exile_Item_PlasticBottleSaltWater"}
    };
     components[] = 
	{
    	{1, "Exile_Item_PlasticBottleEmpty"}
    };
		category = "Food/Drinks";
};
 class FillFuelCanister: Exile_AbstractCraftingRecipe
 {
	name = "Fill Fuel Canister";
	pictureItem = "Exile_Item_FuelCanisterFull";
     requiredInteractionModelGroup = "FuelSource";
	returnedItems[] = 
	{
    	{1, "Exile_Item_FuelCanisterFull"}
    };
     components[] = 
	{
    	{1, "Exile_Item_FuelCanisterEmpty"}
    };
		category = "Food/Drinks";
};
class UpgradeToWoodDoor: Exile_AbstractCraftingRecipe
{
	name = "Upgrade to Wood Door";
	pictureItem = "Exile_Item_WoodDoorKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_WoodDoorKit"}
	};
	components[] = 
	{
		{1, "Exile_Item_WoodDoorwayKit"},
		{2, "Exile_Item_WoodPlank"}
	};
		category = "Building";
};
class UpgradeToWoodFloorPort: Exile_AbstractCraftingRecipe
{
	name = "Upgrade to Wood Floor Port";
	pictureItem = "Exile_Item_WoodFloorPortKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_WoodFloorPortKit"}
	};
	components[] = 
	{
		{1, "Exile_Item_WoodFloorKit"},
		{2, "Exile_Item_WoodPlank"}
	};
		category = "Building";
};
class UpgradeToWoodGate: Exile_AbstractCraftingRecipe
{
	name = "Upgrade to Wood Gate";
	pictureItem = "Exile_Item_WoodGateKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_WoodGateKit"}
	};
	components[] = 
	{
		{1, "Exile_Item_WoodWallKit"},
		{4, "Exile_Item_WoodPlank"}
	};
		category = "Building";
};
class UpgradeToWoodWall: Exile_AbstractCraftingRecipe
{
	name = "Upgrade to Wood Wall";
	pictureItem = "Exile_Item_WoodWallHalfKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_WoodWallKit"}
	};
	components[] = 
	{
		{2, "Exile_Item_WoodWallHalfKit"}
	};
		category = "Building";
};
class UpgradeToWoodWindow: Exile_AbstractCraftingRecipe
{
	name = "Upgrade to Wood Window";
	pictureItem = "Exile_Item_WoodWindowKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_WoodWindowKit"}
	};
	components[] = 
	{
		{1, "Exile_Item_WoodWallKit"},
		{2, "Exile_Item_WoodPlank"}
	};
		category = "Building";
};