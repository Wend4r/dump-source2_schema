#pragma once

#include <cstdint>

struct GameTime_t;
struct ParticleIndex_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xce8
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
	[[maybe_unused]] uint8_t __pad0ad8[0x1c0]; // 0xad8
public:
	// MNetworkEnable
	bool m_bPreparing; // 0xc98	
	// MNetworkEnable
	bool m_bTackling; // 0xc99	
private:
	[[maybe_unused]] uint8_t __pad0c9a[0x2]; // 0xc9a
public:
	// MNetworkEnable
	GameTime_t m_flTackleStartTime; // 0xc9c	
	// MNetworkEnable
	float m_flTackleDuration; // 0xca0	
	// MNetworkEnable
	Vector m_vecTackleDir; // 0xca4	
	Vector m_vecLastPosition; // 0xcb0	
	int32_t m_nStuckFramesCount; // 0xcbc	
	CUtlVector< CEntityIndex > m_vecHitEnemies; // 0xcc0	
	GameTime_t m_flPrepareStartTime; // 0xcd8	
	ParticleIndex_t m_nDistancePreview; // 0xcdc	
};

