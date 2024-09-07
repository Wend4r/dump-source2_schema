#pragma once

#include <cstdint>

struct GameTime_t;
struct ParticleIndex_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xe70
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
	[[maybe_unused]] uint8_t __pad0c60[0x1c0]; // 0xc60
public:
	// MNetworkEnable
	bool m_bPreparing; // 0xe20	
	// MNetworkEnable
	bool m_bTackling; // 0xe21	
private:
	[[maybe_unused]] uint8_t __pad0e22[0x2]; // 0xe22
public:
	// MNetworkEnable
	GameTime_t m_flTackleStartTime; // 0xe24	
	// MNetworkEnable
	float m_flTackleDuration; // 0xe28	
	// MNetworkEnable
	Vector m_vecTackleDir; // 0xe2c	
	Vector m_vecLastPosition; // 0xe38	
	int32_t m_nStuckFramesCount; // 0xe44	
	CUtlVector< CEntityIndex > m_vecHitEnemies; // 0xe48	
	GameTime_t m_flPrepareStartTime; // 0xe60	
	ParticleIndex_t m_nDistancePreview; // 0xe64	
};

