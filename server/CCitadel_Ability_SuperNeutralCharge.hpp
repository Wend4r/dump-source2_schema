#pragma once

#include <cstdint>

struct GameTime_t;
struct ParticleIndex_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xd08
// Has VTable
// 
// MNetworkVarNames "bool m_bPreparing"
// MNetworkVarNames "bool m_bTackling"
// MNetworkVarNames "GameTime_t m_flTackleStartTime"
// MNetworkVarNames "float m_flTackleDuration"
// MNetworkVarNames "Vector m_vecTackleDir"
class CCitadel_Ability_SuperNeutralCharge : public CCitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0af8[0x1c0]; // 0xaf8
public:
	// MNetworkEnable
	bool m_bPreparing; // 0xcb8	
	// MNetworkEnable
	bool m_bTackling; // 0xcb9	
private:
	[[maybe_unused]] uint8_t __pad0cba[0x2]; // 0xcba
public:
	// MNetworkEnable
	GameTime_t m_flTackleStartTime; // 0xcbc	
	// MNetworkEnable
	float m_flTackleDuration; // 0xcc0	
	// MNetworkEnable
	Vector m_vecTackleDir; // 0xcc4	
	Vector m_vecLastPosition; // 0xcd0	
	int32_t m_nStuckFramesCount; // 0xcdc	
	CUtlVector< CEntityIndex > m_vecHitEnemies; // 0xce0	
	GameTime_t m_flPrepareStartTime; // 0xcf8	
	ParticleIndex_t m_nDistancePreview; // 0xcfc	
};

