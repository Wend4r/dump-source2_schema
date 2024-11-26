#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x520
// Has VTable
// 
// MNetworkVarNames "CHandle< CBaseEntity> m_hEntAttached"
// MNetworkVarNames "bool m_bCheapEffect"
class CEntityFlame : public CBaseEntity
{
public:
	// MNetworkEnable
	CHandle< CBaseEntity > m_hEntAttached; // 0x4e8	
	// MNetworkEnable
	bool m_bCheapEffect; // 0x4ec	
private:
	[[maybe_unused]] uint8_t __pad04ed[0x3]; // 0x4ed
public:
	float m_flSize; // 0x4f0	
	bool m_bUseHitboxes; // 0x4f4	
private:
	[[maybe_unused]] uint8_t __pad04f5[0x3]; // 0x4f5
public:
	int32_t m_iNumHitboxFires; // 0x4f8	
	float m_flHitboxFireScale; // 0x4fc	
	GameTime_t m_flLifetime; // 0x500	
	CHandle< CBaseEntity > m_hAttacker; // 0x504	
	int32_t m_iDangerSound; // 0x508	
	float m_flDirectDamagePerSecond; // 0x50c	
	int32_t m_iCustomDamageType; // 0x510	
	
	// Datamap fields:
	// void m_hPlayingSound; // 0x514
	// void CEntityFlameFlameThink; // 0x0
};

