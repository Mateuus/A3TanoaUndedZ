execVM "custom\acd_TB\run.sqf";
//Watermarck
#include "custom\watermark\logo.sqf"
//Advanced Vehicle System
[] execVM "AVS\AVS_fnc_init.sqf";
//Activate DLC Heli
[] execVM "scripts\Activatedlc.sqf";
//Airdrop System
[] execVM "custom\APOC_Airdrop_Assistance\init.sqf"; 
//Extended Repairs
JohnO_fnc_repairWheels = compileFinal preprocessFileLineNumbers "scripts\JohnO_fnc_repairWheels.sqf";
JohnO_fnc_repairchopper = compileFinal preprocessFileLineNumbers "scripts\JohnO_fnc_repairchopper.sqf";
JohnO_fnc_repairchopperhalf = compileFinal preprocessFileLineNumbers "scripts\JohnO_fnc_repairchopperhalf.sqf";
JohnO_fnc_vehicleRepairCar = compile preprocessFileLineNumbers "scripts\JohnO_fnc_vehicleRepairCar.sqf";
Onefox_fnc_salvageWheels = compileFinal preprocessFileLineNumbers "scripts\Onefox_fnc_salvageWheels.sqf";
//Virtual Garage
execVM "VirtualGarage\VirtualGarage_Client_Init.sqf";
//Zupa's Capture points
execVM "zcp.sqf";
//Towing Options duda/xld
SA_TOW_IN_EXILE_SAFEZONE_ENABLED = true;
SA_MAX_TOWED_CARGO = 3;
ASL_EXILE_SAFEZONE_ENABLED = true;
//A3XAI
#include "A3XAI_Client\A3XAI_initclient.sqf";
//Air Patrol
//[] execVM "custom\airpatrol.sqf";

if (isServer) then {
	fn_getBuildingstospawnLoot = compile preProcessFileLineNumbers "LSpawner\fn_LSgetBuildingstospawnLoot.sqf"; 
	LSdeleter = compile preProcessFileLineNumbers "LSpawner\LSdeleter.sqf";
	execVM "LSpawner\Lootspawner.sqf";
};

//Safezone fix
//call ExileClient_system_map_initialize;

//Drawing on map fix
(createTrigger ["EmptyDetector", [0,0,0]]) setTriggerStatements
[
    "!triggerActivated thisTrigger", 
    "thisTrigger setTriggerTimeout [5,5,5,false]",
    "{if (markerShape _x == 'POLYLINE') then {deleteMarker _x}} forEach allMapMarkers"
];
