///////////////////////////////////////////////////////////////////////////////
// Static Objects
///////////////////////////////////////////////////////////////////////////////

//Welcome Mensagem
[] execVM "welcome.sqf";
// Taken away for now
//#include "initServer.sqf"
//statusbar
[] execVM "addons\statusBar\statusBar.sqf";
//Claim Vehicles
[] execVM "ClaimVehicles_Client\ClaimVehicles_Client_init.sqf";
if (!hasInterface || isServer) exitWith {};

///////////////////////////////////////////////////////////////////////////
// Hardware Trader
///////////////////////////////////////////////////////////////////////////
_workBench = "Land_Workbench_01_F" createVehicleLocal [0,0,0];
_workBench setDir 258.9981;
_workBench setPosATL [6889.51,7465.99,0.147625];

_trader = 
[
    "Exile_Trader_Hardware",
    "WhiteHead_17",
    ["InBaseMoves_sitHighUp1"],
    [0, 0, -0.5],
    170,
    _workBench
]
call ExileClient_object_trader_create;

_trader setVariable ["ExileTraderType", "Exile_Trader_Hardware"];


///////////////////////////////////////////////////////////////////////////
// Fast Food Trader
///////////////////////////////////////////////////////////////////////////
_cashDesk = "Land_CashDesk_F" createVehicleLocal [0,0,0];
_cashDesk setDir 259.8685;
_cashDesk setPosATL [6891.26,7459.62,0.155284];

_microwave = "Land_Microwave_01_F" createVehicleLocal [0,0,0];
_cashDesk disableCollisionWith _microwave;         
_microwave disableCollisionWith _cashDesk; 
_microwave attachTo [_cashDesk, [-0.6, 0.2, 1.1]];

_ketchup = "Land_Ketchup_01_F" createVehicleLocal [0,0,0];
_cashDesk disableCollisionWith _ketchup;         
_ketchup disableCollisionWith _cashDesk; 
_ketchup attachTo [_cashDesk, [-0.6, 0, 1.1]];

_mustard = "Land_Mustard_01_F" createVehicleLocal [0,0,0];
_cashDesk disableCollisionWith _mustard;         
_mustard disableCollisionWith _cashDesk; 
_mustard attachTo [_cashDesk, [-0.5, -0.05, 1.1]];

_trader = 
[
    "Exile_Trader_Food",
    "GreekHead_A3_01",
    ["InBaseMoves_table1"],
    [0.1, 0.5, 0.2],
    170,
    _cashDesk
]
call ExileClient_object_trader_create;

_trader setVariable ["ExileTraderType", "Exile_Trader_Food"];

///////////////////////////////////////////////////////////////////////////
// Armory Trader
///////////////////////////////////////////////////////////////////////////
_chair = "Land_CampingChair_V2_F" createVehicleLocal [0,0,0];
_chair setDir 170;    
_chair setPosATL [6897.93,7456.44,0.155284];

_trader = 
[
    "Exile_Trader_Armory",
    "PersianHead_A3_02",
    ["InBaseMoves_SittingRifle1"],
    [0, -0.15, -0.45],
    350,
    _chair
]
call ExileClient_object_trader_create;

_trader setVariable ["ExileTraderType", "Exile_Trader_Armory"];

///////////////////////////////////////////////////////////////////////////
// Equipment Trader
///////////////////////////////////////////////////////////////////////////
_trader = 
[
    "Exile_Trader_Equipment",
    "WhiteHead_19",
    ["HubStanding_idle1", "HubStanding_idle2", "HubStanding_idle3"],
    [6895.33,7455.85,0.155284],
	0
]
call ExileClient_object_trader_create;

_trader setVariable ["ExileTraderType", "Exile_Trader_Equipment"];

///////////////////////////////////////////////////////////////////////////
// Specops Trader
///////////////////////////////////////////////////////////////////////////
_trader = 
[
    "Exile_Trader_SpecialOperations",
    "AfricanHead_02",
    ["HubStanding_idle1", "HubStanding_idle2", "HubStanding_idle3"],
    [6898.45,7467.31,0.155284],
	250.08
]
call ExileClient_object_trader_create;

_trader setVariable ["ExileTraderType", "Exile_Trader_SpecialOperations"];

///////////////////////////////////////////////////////////////////////////
// Office Trader
///////////////////////////////////////////////////////////////////////////
_trader = 
[
    "Exile_Trader_Office",
    "GreekHead_A3_04",
    ["HubBriefing_scratch", "HubBriefing_stretch", "HubBriefing_think", "HubBriefing_lookAround1", "HubBriefing_lookAround2"],
   [6893.73,7469.72,0.151713],
   171.234
]
call ExileClient_object_trader_create;

///////////////////////////////////////////////////////////////////////////
// Waste Dump Trader
///////////////////////////////////////////////////////////////////////////
_trader = 
[
    "Exile_Trader_WasteDump",
    "GreekHead_A3_01",
    ["HubStandingUA_move1", "HubStandingUA_move2", "HubStandingUA_idle1", "HubStandingUA_idle2", "HubStandingUA_idle3"],
	[6929.65,7505.12,0.00223732],
	175.704
]
call ExileClient_object_trader_create;


///////////////////////////////////////////////////////////////////////////
// Aircraft Trader
///////////////////////////////////////////////////////////////////////////
_trader = 
[
    "Exile_Trader_Aircraft",
    "WhiteHead_17",
    ["LHD_krajPaluby"],
    [6908.96,7439.04,0.00143886],
	77.5319
]
call ExileClient_object_trader_create;

_trader setVariable ["ExileTraderType", "Exile_Trader_Aircraft"];


///////////////////////////////////////////////////////////////////////////
// Aircraft Customs Trader
///////////////////////////////////////////////////////////////////////////
_trader = 
[
    "Exile_Trader_AircraftCustoms",
    "GreekHead_A3_07",
    ["HubStandingUC_idle1", "HubStandingUC_idle2", "HubStandingUC_idle3", "HubStandingUC_move1", "HubStandingUC_move2"],
    [6907.46,7447.23,0.00143886],
	70.32
]
call ExileClient_object_trader_create;

///////////////////////////////////////////////////////////////////////////
// Vehicle Trader
///////////////////////////////////////////////////////////////////////////

_trader = 
[
    "Exile_Trader_Vehicle",
    "WhiteHead_11",
    ["InBaseMoves_repairVehicleKnl", "InBaseMoves_repairVehiclePne"],
    [6862.43,7468.16,0.00143886],
    220
]
call ExileClient_object_trader_create;

_carWreck = "Land_Wreck_CarDismantled_F" createVehicleLocal [0,0,0];
_carWreck setDir 130.1162;
_carWreck setPosATL [6860.69,7466.47,0.00143886];

_trader setVariable ["ExileTraderType", "Exile_Trader_Vehicle"];


///////////////////////////////////////////////////////////////////////////
// Vehicle Customs Trader
///////////////////////////////////////////////////////////////////////////
_trader = 
[
    "Exile_Trader_VehicleCustoms",
    "WhiteHead_11",
    ["AidlPercMstpSnonWnonDnon_G01", "AidlPercMstpSnonWnonDnon_G02", "AidlPercMstpSnonWnonDnon_G03", "AidlPercMstpSnonWnonDnon_G04", "AidlPercMstpSnonWnonDnon_G05", "AidlPercMstpSnonWnonDnon_G06"],
    [6850.75,7484.36,0.00143886],
	174.162
]
call ExileClient_object_trader_create;

///////////////////////////////////////////////////////////////////////////
// Guard 01
///////////////////////////////////////////////////////////////////////////
_trader = 
[
    "Exile_Guard_01",
    "WhiteHead_17",
    ["InBaseMoves_patrolling1"],
    [6902.41,7428.56,13],
    323.53
]
call ExileClient_object_trader_create;

///////////////////////////////////////////////////////////////////////////
// Guard 02
///////////////////////////////////////////////////////////////////////////
_trader = 
[
    "Exile_Guard_02",
    "WhiteHead_03",
    ["InBaseMoves_patrolling2"],
    [6899.12,7474.9,0],
    326.455
]
call ExileClient_object_trader_create;

///////////////////////////////////////////////////////////////////////////
// Guard 03
///////////////////////////////////////////////////////////////////////////
_trader = 
[
    "Exile_Guard_03",
    "AfricanHead_03",
    ["InBaseMoves_patrolling1"],
    [6832.9,7467.25,0],
    313.349
]
call ExileClient_object_trader_create;

///////////////////////////////////////////////////////////////////////////
// Guard 02
///////////////////////////////////////////////////////////////////////////
_trader = 
[
    "Exile_Guard_02",
    "WhiteHead_03",
    ["InBaseMoves_patrolling2"],
    [6830.74,7466.88,0],
    326.455
]
call ExileClient_object_trader_create;