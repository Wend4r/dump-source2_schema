#pragma once

#include <cstdint>

struct ParticleIndex_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xe8
// Has VTable
class CCitadel_Modifier_ControlPointCapturerAura : public CCitadelModifierAura
{
public:
	ParticleIndex_t m_particle; // 0xe0	
	CHandle< CCitadelControlPointTrigger > m_hCP; // 0xe4	
};

