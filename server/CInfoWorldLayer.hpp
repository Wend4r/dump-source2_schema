#pragma once

#include <cstdint>

struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x528
// Has VTable
// 
// MNetworkVarNames "string_t m_worldName"
// MNetworkVarNames "string_t m_layerName"
// MNetworkVarNames "bool m_bWorldLayerVisible"
// MNetworkVarNames "bool m_bEntitiesSpawned"
class CInfoWorldLayer : public CBaseEntity
{
public:
	CEntityIOOutput m_pOutputOnEntitiesSpawned; // 0x4e8	
	// MNetworkEnable
	CUtlSymbolLarge m_worldName; // 0x510	
	// MNetworkEnable
	CUtlSymbolLarge m_layerName; // 0x518	
	// MNetworkEnable
	bool m_bWorldLayerVisible; // 0x520	
	// MNetworkEnable
	bool m_bEntitiesSpawned; // 0x521	
	bool m_bCreateAsChildSpawnGroup; // 0x522	
private:
	[[maybe_unused]] uint8_t __pad0523[0x1]; // 0x523
public:
	uint32_t m_hLayerSpawnGroup; // 0x524	
	
	// Datamap fields:
	// void ShowWorldLayer; // 0x0
	// void HideWorldLayer; // 0x0
	// void SpawnEntities; // 0x0
	// void DestroyEntities; // 0x0
	// void ShowWorldLayerAndSpawnEntities; // 0x0
	// void HideWorldLayerAndDestroyEntities; // 0x0
};

