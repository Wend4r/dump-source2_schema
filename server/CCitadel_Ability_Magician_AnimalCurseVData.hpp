#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1838
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_Magician_AnimalCurseVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_CurseModifier; // 0x1568	
	CEmbeddedSubclass< CCitadelModifier > m_AirDampingModifier; // 0x1578	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_TargetWarningSound; // 0x1588	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ProjectileImpactParticle; // 0x1598	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TargetWarningParticle; // 0x1678	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ProjectileExplodeParticle; // 0x1758	
};

