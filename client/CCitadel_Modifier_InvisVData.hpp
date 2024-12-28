#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x8f8
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_InvisVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_InvisLoopParticle; // 0x630	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_InvisDetectRadiusParticle; // 0x710	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_InvisRevealedParticle; // 0x7f0	
	float m_flDesatFactor; // 0x8d0	
private:
	[[maybe_unused]] uint8_t __pad08d4[0x4]; // 0x8d4
public:
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strInvisRevealedSound; // 0x8d8	
	// MPropertyStartGroup "Behavior"
	bool m_bFadeInsteadOfRemoveOnBulletFire; // 0x8e8	
	bool m_bFadeInsteadOfRemoveOnAbilityUse; // 0x8e9	
	bool m_bBreakOnItemUse; // 0x8ea	
	// MPropertyDescription "Fade from hidden to fully visible as invis is about to expire. Does not work with Aura applied invis, since that has no duration."
	bool m_bFadeToVisibleAtEndOfDuration; // 0x8eb	
	float m_flMinCloak; // 0x8ec	
	float m_flMaxCloak; // 0x8f0	
};

