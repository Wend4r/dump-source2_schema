#pragma once

#include <cstdint>

struct GameTime_t;
struct ParticleIndex_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1e8
// Has VTable
class CCitadel_Modifier_Fathom_ScaldingSpray_Aura : public CCitadelModifierAura_Cone
{
public:
	QAngle m_playerAngles; // 0xf0	
	GameTime_t m_flLastStackTime; // 0xfc	
	ParticleIndex_t m_ConeParticle; // 0x100	
};

