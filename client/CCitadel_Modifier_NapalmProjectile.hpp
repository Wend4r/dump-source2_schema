#pragma once

#include <cstdint>

struct ParticleIndex_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1f0
// Has VTable
class CCitadel_Modifier_NapalmProjectile : public CCitadel_Modifier_Intrinsic_Base
{
private:
	[[maybe_unused]] uint8_t __pad00c0[0x118]; // 0xc0
public:
	Vector m_vInitialCastPosition; // 0x1d8	
	float m_flProjectileSpeed; // 0x1e4	
	ParticleIndex_t m_iParticleEffect; // 0x1e8	
};

