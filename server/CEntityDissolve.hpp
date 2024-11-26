#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x7f0
// Has VTable
// 
// MNetworkVarNames "float32 m_flFadeInStart"
// MNetworkVarNames "float32 m_flFadeInLength"
// MNetworkVarNames "float32 m_flFadeOutModelStart"
// MNetworkVarNames "float32 m_flFadeOutModelLength"
// MNetworkVarNames "float32 m_flFadeOutStart"
// MNetworkVarNames "float32 m_flFadeOutLength"
// MNetworkVarNames "GameTime_t m_flStartTime"
// MNetworkVarNames "EntityDisolveType_t m_nDissolveType"
// MNetworkVarNames "Vector m_vDissolverOrigin"
// MNetworkVarNames "uint32 m_nMagnitude"
class CEntityDissolve : public CBaseModelEntity
{
public:
	// MNetworkEnable
	float m_flFadeInStart; // 0x7c0	
	// MNetworkEnable
	float m_flFadeInLength; // 0x7c4	
	// MNetworkEnable
	float m_flFadeOutModelStart; // 0x7c8	
	// MNetworkEnable
	float m_flFadeOutModelLength; // 0x7cc	
	// MNetworkEnable
	float m_flFadeOutStart; // 0x7d0	
	// MNetworkEnable
	float m_flFadeOutLength; // 0x7d4	
	// MNetworkEnable
	GameTime_t m_flStartTime; // 0x7d8	
	// MNetworkEnable
	EntityDisolveType_t m_nDissolveType; // 0x7dc	
	// MNetworkEnable
	Vector m_vDissolverOrigin; // 0x7e0	
	// MNetworkEnable
	uint32_t m_nMagnitude; // 0x7ec	
	
	// Datamap fields:
	// void CEntityDissolveDissolveThink; // 0x0
	// void CEntityDissolveElectrocuteThink; // 0x0
	// CUtlSymbolLarge InputDissolve; // 0x0
};

