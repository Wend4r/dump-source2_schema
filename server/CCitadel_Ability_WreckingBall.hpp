#pragma once

#include <cstdint>

struct ParticleIndex_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xc08
// Has VTable
// 
// MNetworkVarNames "bool m_bHoldingBall"
class CCitadel_Ability_WreckingBall : public CCitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0af8[0x8]; // 0xaf8
public:
	ParticleIndex_t m_nBallParticle; // 0xb00	
	ParticleIndex_t m_nCastCompleteParticle; // 0xb04	
	CUtlVector< CHandle< CBaseEntity > > m_vecTargetsHit; // 0xb08	
private:
	[[maybe_unused]] uint8_t __pad0b20[0xe0]; // 0xb20
public:
	// MNetworkEnable
	bool m_bHoldingBall; // 0xc00	
};

