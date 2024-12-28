#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1be8
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_ProximityRitual_VData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_PredatoryStatueModel; // 0x1568	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CatReappearParticle; // 0x1648	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CatDisappearParticle; // 0x1728	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CatEyesParticle; // 0x1808	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CatSummonParticle; // 0x18e8	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CatRecallParticle; // 0x19c8	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_RecallLineParticle; // 0x1aa8	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strRecallSound; // 0x1b88	
	CSoundEventName m_strKilledSound; // 0x1b98	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_PredatoryStatueModifier; // 0x1ba8	
	CEmbeddedSubclass< CCitadelModifier > m_RecentDamageModifier; // 0x1bb8	
	// MPropertyStartGroup "Gameplay"
	float m_flHeavyMeleeDmg; // 0x1bc8	
	float m_flLightMeleeDmg; // 0x1bcc	
	float m_flAbilityDamageScale; // 0x1bd0	
	float m_flNPCDamageScale; // 0x1bd4	
	float m_flCastDelayMin; // 0x1bd8	
	float m_flCastDelayMax; // 0x1bdc	
	float m_flCastDelayMaxDist; // 0x1be0	
	float m_flPostCastCooldown; // 0x1be4	
};

