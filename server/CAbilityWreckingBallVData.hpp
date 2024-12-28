#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1830
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityWreckingBallVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SummonParticle; // 0x1568	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SummonReadyParticle; // 0x1648	
	CUtlString m_SummonParticleAttachment; // 0x1728	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeParticle; // 0x1730	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_AutoThrowModifier; // 0x1810	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_HoldingBallLoop; // 0x1820	
};

