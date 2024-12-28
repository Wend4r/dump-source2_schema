#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xbb0
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_Mirage_SandPhantom_Passive_Victim_VData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_SlowModifier; // 0x630	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DebuffStatusPlayerParticle; // 0x640	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DebuffStatusVictimParticle; // 0x720	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DebuffStatusNPCParticle; // 0x800	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_StackDamageParticle; // 0x8e0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_StackReadyParticle; // 0x9c0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_StackAppliedParticle; // 0xaa0	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_ConsumeMaxStacksSound; // 0xb80	
	CSoundEventName m_ConsumeMaxStacksNonHeroSound; // 0xb90	
	CSoundEventName m_ApplyStackSound; // 0xba0	
};

