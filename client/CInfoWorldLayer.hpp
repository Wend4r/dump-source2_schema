#pragma once

#include <cstdint>

struct CEntityIOOutput;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x5a8
// Has VTable
// 
// MNetworkVarNames "string_t m_worldName"
// MNetworkVarNames "string_t m_layerName"
// MNetworkVarNames "bool m_bWorldLayerVisible"
// MNetworkVarNames "bool m_bEntitiesSpawned"
class CInfoWorldLayer : public C_BaseEntity
{
public:
	CEntityIOOutput m_pOutputOnEntitiesSpawned; // 0x560	
	// MNetworkEnable
	CUtlSymbolLarge m_worldName; // 0x588	
	// MNetworkEnable
	CUtlSymbolLarge m_layerName; // 0x590	
	// MNetworkEnable
	bool m_bWorldLayerVisible; // 0x598	
	// MNetworkEnable
	bool m_bEntitiesSpawned; // 0x599	
	bool m_bCreateAsChildSpawnGroup; // 0x59a	
private:
	[[maybe_unused]] uint8_t __pad059b[0x1]; // 0x59b
public:
	uint32_t m_hLayerSpawnGroup; // 0x59c	
	bool m_bWorldLayerActuallyVisible; // 0x5a0	
	
	// Datamap fields:
	// void ShowWorldLayer; // 0x0
	// void HideWorldLayer; // 0x0
	// void SpawnEntities; // 0x0
	// void DestroyEntities; // 0x0
	// void ShowWorldLayerAndSpawnEntities; // 0x0
	// void HideWorldLayerAndDestroyEntities; // 0x0
};

