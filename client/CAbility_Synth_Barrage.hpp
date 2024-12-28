#pragma once

#include <cstdint>

struct ParticleIndex_t;
struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xf10
// Has VTable
// 
// MNetworkVarNames "GameTime_t m_flNextShootTime"
class CAbility_Synth_Barrage : public C_CitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0c98[0x268]; // 0xc98
public:
	int32_t m_nProjectilesScheduled; // 0xf00	
	ParticleIndex_t m_ChannelParticle; // 0xf04	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flNextShootTime; // 0xf08	
};

