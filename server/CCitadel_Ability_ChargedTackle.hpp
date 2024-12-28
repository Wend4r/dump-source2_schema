#pragma once

#include <cstdint>

struct GameTime_t;
struct ParticleIndex_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xd38
// Has VTable
// 
// MNetworkVarNames "bool m_bPreparing"
// MNetworkVarNames "bool m_bTackling"
// MNetworkVarNames "GameTime_t m_flTackleStartTime"
// MNetworkVarNames "GameTime_t m_flPrepareStartTime"
// MNetworkVarNames "Vector m_vecTackleDir"
class CCitadel_Ability_ChargedTackle : public CCitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0af8[0x1f8]; // 0xaf8
public:
	// MNetworkEnable
	bool m_bPreparing; // 0xcf0	
	// MNetworkEnable
	bool m_bTackling; // 0xcf1	
private:
	[[maybe_unused]] uint8_t __pad0cf2[0x2]; // 0xcf2
public:
	// MNetworkEnable
	GameTime_t m_flTackleStartTime; // 0xcf4	
	// MNetworkEnable
	GameTime_t m_flPrepareStartTime; // 0xcf8	
	// MNetworkEnable
	Vector m_vecTackleDir; // 0xcfc	
	Vector m_vecLastPosition; // 0xd08	
	int32_t m_nStuckFramesCount; // 0xd14	
	CUtlVector< CHandle< CBaseEntity > > m_vecHitEnemies; // 0xd18	
	ParticleIndex_t m_nDistancePreview; // 0xd30	
};

