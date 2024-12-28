#pragma once

#include <cstdint>

struct ParticleIndex_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xba8
// Has VTable
// 
// MNetworkVarNames "bool m_bActive"
class CCitadel_Ability_RiotProtocol : public CCitadelBaseAbility
{
public:
	ParticleIndex_t m_ChargeUpParticle; // 0xaf8	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	bool m_bActive; // 0xafc	
};

