#pragma once

#include <cstdint>

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x1d8
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_FadeAndKill : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "start fade in time"
	float m_flStartFadeInTime; // 0x1b8	
	// MPropertyFriendlyName "end fade in time"
	float m_flEndFadeInTime; // 0x1bc	
	// MPropertyFriendlyName "start fade out time"
	float m_flStartFadeOutTime; // 0x1c0	
	// MPropertyFriendlyName "end fade out time"
	float m_flEndFadeOutTime; // 0x1c4	
	// MPropertyFriendlyName "start alpha"
	float m_flStartAlpha; // 0x1c8	
	// MPropertyFriendlyName "end alpha"
	float m_flEndAlpha; // 0x1cc	
	// MPropertyFriendlyName "force preserving particle order"
	bool m_bForcePreserveParticleOrder; // 0x1d0	
};
