#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x930
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_TargetPracticeEnemyVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // 0x630	
	CEmbeddedSubclass< CCitadelModifier > m_BuildupCompleteModifier; // 0x640	
	CEmbeddedSubclass< CCitadel_Modifier_Base_Buildup > m_BuildupModifier; // 0x650	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TargetParticle; // 0x660	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_HitParticle; // 0x740	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_HeadParticle; // 0x820	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strTargetHitSound; // 0x900	
	CSoundEventName m_strTargetHeadShotHitSound; // 0x910	
	CSoundEventName m_strTargetCompleteSound; // 0x920	
};

