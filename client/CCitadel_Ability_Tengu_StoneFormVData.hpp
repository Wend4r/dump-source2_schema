#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1938
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_Tengu_StoneFormVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CastParticle; // 0x1568	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ImpactParticle; // 0x1648	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_StoneFormParticle; // 0x1728	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_CastTargetSound; // 0x1808	
	CSoundEventName m_strImpactSound; // 0x1818	
	CSoundEventName m_strFallCollideImpactSound; // 0x1828	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CBaseModifier > m_DragModifier; // 0x1838	
	// MPropertyDescription "Model"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_strTrueFormModel; // 0x1848	
	// MPropertyStartGroup "+Stone Form Params"
	float m_flLandHoldTime; // 0x1928	
	float m_flRisingTime; // 0x192c	
	float m_flCollideRadius; // 0x1930	
};

