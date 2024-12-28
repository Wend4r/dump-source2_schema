#pragma once

#include <cstdint>

struct GameTime_t;
struct ParticleIndex_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xea8
// Has VTable
// 
// MNetworkVarNames "bool m_bPreparing"
// MNetworkVarNames "bool m_bTackling"
// MNetworkVarNames "GameTime_t m_flTackleStartTime"
// MNetworkVarNames "float m_flTackleDuration"
// MNetworkVarNames "Vector m_vecTackleDir"
class CCitadel_Ability_SuperNeutralCharge : public C_CitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0c98[0x1c0]; // 0xc98
public:
	// MNetworkEnable
	bool m_bPreparing; // 0xe58	
	// MNetworkEnable
	bool m_bTackling; // 0xe59	
private:
	[[maybe_unused]] uint8_t __pad0e5a[0x2]; // 0xe5a
public:
	// MNetworkEnable
	GameTime_t m_flTackleStartTime; // 0xe5c	
	// MNetworkEnable
	float m_flTackleDuration; // 0xe60	
	// MNetworkEnable
	Vector m_vecTackleDir; // 0xe64	
	Vector m_vecLastPosition; // 0xe70	
	int32_t m_nStuckFramesCount; // 0xe7c	
	CUtlVector< CEntityIndex > m_vecHitEnemies; // 0xe80	
	GameTime_t m_flPrepareStartTime; // 0xe98	
	ParticleIndex_t m_nDistancePreview; // 0xe9c	
};

