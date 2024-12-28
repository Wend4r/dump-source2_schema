#pragma once

#include <cstdint>

struct GameTime_t;
struct ParticleIndex_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xed8
// Has VTable
// 
// MNetworkVarNames "bool m_bPreparing"
// MNetworkVarNames "bool m_bTackling"
// MNetworkVarNames "GameTime_t m_flTackleStartTime"
// MNetworkVarNames "GameTime_t m_flPrepareStartTime"
// MNetworkVarNames "Vector m_vecTackleDir"
class CCitadel_Ability_ChargedTackle : public C_CitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0c98[0x1f8]; // 0xc98
public:
	// MNetworkEnable
	bool m_bPreparing; // 0xe90	
	// MNetworkEnable
	bool m_bTackling; // 0xe91	
private:
	[[maybe_unused]] uint8_t __pad0e92[0x2]; // 0xe92
public:
	// MNetworkEnable
	GameTime_t m_flTackleStartTime; // 0xe94	
	// MNetworkEnable
	GameTime_t m_flPrepareStartTime; // 0xe98	
	// MNetworkEnable
	Vector m_vecTackleDir; // 0xe9c	
	Vector m_vecLastPosition; // 0xea8	
	int32_t m_nStuckFramesCount; // 0xeb4	
	CUtlVector< CHandle< C_BaseEntity > > m_vecHitEnemies; // 0xeb8	
	ParticleIndex_t m_nDistancePreview; // 0xed0	
};

