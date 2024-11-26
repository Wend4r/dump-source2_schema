#pragma once

#include <cstdint>

struct GameTime_t;
struct ParticleIndex_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1d8
// Has VTable
class CCitadel_Modifier_Fathom_ScaldingSpray_Aura : public CCitadelModifierAura_Cone
{
public:
	QAngle m_playerAngles; // 0xe0	
	GameTime_t m_flLastStackTime; // 0xec	
	ParticleIndex_t m_ConeParticle; // 0xf0	
};

