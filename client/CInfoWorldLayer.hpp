#pragma once

#include <cstdint>

struct CEntityIOOutput;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x590
// Has VTable
// 
// MNetworkVarNames "string_t m_worldName"
// MNetworkVarNames "string_t m_layerName"
// MNetworkVarNames "bool m_bWorldLayerVisible"
// MNetworkVarNames "bool m_bEntitiesSpawned"
class CInfoWorldLayer : public C_BaseEntity
{
public:
	CEntityIOOutput m_pOutputOnEntitiesSpawned; // 0x548	
	// MNetworkEnable
	CUtlSymbolLarge m_worldName; // 0x570	
	// MNetworkEnable
	CUtlSymbolLarge m_layerName; // 0x578	
	// MNetworkEnable
	bool m_bWorldLayerVisible; // 0x580	
	// MNetworkEnable
	bool m_bEntitiesSpawned; // 0x581	
	bool m_bCreateAsChildSpawnGroup; // 0x582	
private:
	[[maybe_unused]] uint8_t __pad0583[0x1]; // 0x583
public:
	uint32_t m_hLayerSpawnGroup; // 0x584	
	bool m_bWorldLayerActuallyVisible; // 0x588	
	
	// Datamap fields:
	// void ShowWorldLayer; // 0x0
	// void HideWorldLayer; // 0x0
	// void SpawnEntities; // 0x0
	// void DestroyEntities; // 0x0
	// void ShowWorldLayerAndSpawnEntities; // 0x0
	// void HideWorldLayerAndDestroyEntities; // 0x0
};
