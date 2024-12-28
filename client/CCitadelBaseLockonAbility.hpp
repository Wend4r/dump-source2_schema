#pragma once

#include <cstdint>

struct GameTime_t;
struct ParticleIndex_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xe28
// Has VTable
// 
// MNetworkVarNames "LockonTarget_t m_vecLockonTargets"
// MNetworkVarNames "GameTime_t m_LockOnStartTime"
class CCitadelBaseLockonAbility : public C_CitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0c98[0x118]; // 0xc98
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	C_UtlVectorEmbeddedNetworkVar< LockonTarget_t > m_vecLockonTargets; // 0xdb0	
	// MNetworkEnable
	GameTime_t m_LockOnStartTime; // 0xe18	
private:
	[[maybe_unused]] uint8_t __pad0e1c[0x4]; // 0xe1c
public:
	ParticleIndex_t m_nTargetingLightEffect; // 0xe20	
};

