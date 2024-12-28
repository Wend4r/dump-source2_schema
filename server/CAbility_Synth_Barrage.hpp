#pragma once

#include <cstdint>

struct ShotID_t;
struct ParticleIndex_t;
struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xd78
// Has VTable
// 
// MNetworkVarNames "GameTime_t m_flNextShootTime"
class CAbility_Synth_Barrage : public CCitadelBaseAbility
{
public:
	ShotID_t m_tLastShotID; // 0xaf8	
private:
	[[maybe_unused]] uint8_t __pad0afc[0x26c]; // 0xafc
public:
	int32_t m_nProjectilesScheduled; // 0xd68	
	ParticleIndex_t m_ChannelParticle; // 0xd6c	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flNextShootTime; // 0xd70	
};

