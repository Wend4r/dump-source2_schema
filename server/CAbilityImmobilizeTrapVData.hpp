#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1958
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityImmobilizeTrapVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeParticle; // 0x1568	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_PreviewRingParticle; // 0x1648	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TrapHighlightParticle; // 0x1728	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ArmedParticle; // 0x1808	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strTripSound; // 0x18e8	
	CSoundEventName m_strExplodeSound; // 0x18f8	
	CSoundEventName m_strExpiredSound; // 0x1908	
	CSoundEventName m_strImmobilizeTargetSound; // 0x1918	
	CSoundEventName m_strArmingSound; // 0x1928	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_GlitchModifier; // 0x1938	
	CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // 0x1948	
};

