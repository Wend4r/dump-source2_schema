#pragma once

#include <cstdint>

struct ParticleIndex_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1e0
// Has VTable
class CCitadel_Modifier_ColdFrontAOE : public CCitadelModifier
{
private:
	[[maybe_unused]] uint8_t __pad00c0[0x118]; // 0xc0
public:
	ParticleIndex_t m_hAOEEffect; // 0x1d8	
};

