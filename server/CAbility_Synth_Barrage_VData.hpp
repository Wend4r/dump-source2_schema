#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1850
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbility_Synth_Barrage_VData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_BarrageCasterModifier; // 0x1568	
	CEmbeddedSubclass< CCitadelModifier > m_AmpModifier; // 0x1578	
	CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // 0x1588	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ShootParticle; // 0x1598	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ImpactParticle; // 0x1678	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ChannelParticle; // 0x1758	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strProjectileLaunchSound; // 0x1838	
	// MPropertyStartGroup "Gameplay"
	float m_flAttackInterval; // 0x1848	
};

