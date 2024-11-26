#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1930
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_Tengu_StoneFormVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CastParticle; // 0x1560	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ImpactParticle; // 0x1640	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_StoneFormParticle; // 0x1720	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_CastTargetSound; // 0x1800	
	CSoundEventName m_strImpactSound; // 0x1810	
	CSoundEventName m_strFallCollideImpactSound; // 0x1820	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CBaseModifier > m_DragModifier; // 0x1830	
	// MPropertyDescription "Model"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_strTrueFormModel; // 0x1840	
	// MPropertyStartGroup "+Stone Form Params"
	float m_flLandHoldTime; // 0x1920	
	float m_flRisingTime; // 0x1924	
	float m_flCollideRadius; // 0x1928	
};

