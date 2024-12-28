#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x8a0
// Has VTable
// 
// MNetworkVarNames "GameTime_t m_flStartTime"
// MNetworkVarNames "float32 m_flFadeInStart"
// MNetworkVarNames "float32 m_flFadeInLength"
// MNetworkVarNames "float32 m_flFadeOutModelStart"
// MNetworkVarNames "float32 m_flFadeOutModelLength"
// MNetworkVarNames "float32 m_flFadeOutStart"
// MNetworkVarNames "float32 m_flFadeOutLength"
// MNetworkVarNames "EntityDisolveType_t m_nDissolveType"
// MNetworkVarNames "Vector m_vDissolverOrigin"
// MNetworkVarNames "uint32 m_nMagnitude"
class C_EntityDissolve : public C_BaseModelEntity
{
private:
	[[maybe_unused]] uint8_t __pad0858[0x8]; // 0x858
public:
	// MNetworkEnable
	GameTime_t m_flStartTime; // 0x860	
	// MNetworkEnable
	float m_flFadeInStart; // 0x864	
	// MNetworkEnable
	float m_flFadeInLength; // 0x868	
	// MNetworkEnable
	float m_flFadeOutModelStart; // 0x86c	
	// MNetworkEnable
	float m_flFadeOutModelLength; // 0x870	
	// MNetworkEnable
	float m_flFadeOutStart; // 0x874	
	// MNetworkEnable
	float m_flFadeOutLength; // 0x878	
	GameTime_t m_flNextSparkTime; // 0x87c	
	// MNetworkEnable
	EntityDisolveType_t m_nDissolveType; // 0x880	
	// MNetworkEnable
	Vector m_vDissolverOrigin; // 0x884	
	// MNetworkEnable
	uint32_t m_nMagnitude; // 0x890	
	bool m_bCoreExplode; // 0x894	
	bool m_bLinkedToServerEnt; // 0x895	
};

