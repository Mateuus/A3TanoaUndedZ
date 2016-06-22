/**
 * ExileServer_system_garbageCollector_cleanDatabase
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_territoryLifeTime","_containerLifeTime","_constructionLifeTime","_vehicleLifeTime","_abandonedSafeTime"];
_territoryLifeTime    = getNumber (configFile >> "CfgSettings" >> "GarbageCollector" >> "Database" >> "territoryLifeTime");
_containerLifeTime    = getNumber (configFile >> "CfgSettings" >> "GarbageCollector" >> "Database" >> "containerLifeTime");
_constructionLifeTime = getNumber (configFile >> "CfgSettings" >> "GarbageCollector" >> "Database" >> "constructionLifeTime");
_vehicleLifeTime      = getNumber (configFile >> "CfgSettings" >> "GarbageCollector" >> "Database" >> "vehicleLifeTime");
_abandonedSafeTime    = getNumber (configFile >> "CfgSettings" >> "GarbageCollector" >> "Database" >> "abandonedTime");
format ["deleteUnpaidTerritories:%1", _territoryLifeTime] call ExileServer_system_database_query_fireAndForget;
format ["addAbandonedSafes:%1", _abandonedSafeTime] call ExileServer_system_database_query_fireAndForget;
format ["deleteOldContainers:%1", _containerLifeTime] call ExileServer_system_database_query_fireAndForget;
format ["deleteOldConstructions:%1", _constructionLifeTime] call ExileServer_system_database_query_fireAndForget;
format ["deleteOldVehicles:%1", _vehicleLifeTime] call ExileServer_system_database_query_fireAndForget;
