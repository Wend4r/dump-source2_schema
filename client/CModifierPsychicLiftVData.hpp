#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x920
// Has VTable
// 
// MGetKV3ClassDefaults
class CModifierPsychicLiftVData : public CCitadel_Modifier_StunnedVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_SilenceModifier; // 0x710	
	CEmbeddedSubclass< CCitadelModifier > m_DisarmModifier; // 0x720	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_LiftParticle; // 0x730	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ImpactParticle; // 0x810	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strImpactSound; // 0x8f0	
	// MPropertyStartGroup "Gameplay"
	float m_flRiseTime; // 0x900	
	float m_flRiseAcc; // 0x904	
	float m_flRiseMaxSpeed; // 0x908	
	float m_flRiseDecayFracStart; // 0x90c	
	float m_flRiseDecayFracEnd; // 0x910	
	float m_flSlamAcc; // 0x914	
	float m_flSlamMaxSpeed; // 0x918	
	float m_flSlamImpactRadius; // 0x91c	
};

