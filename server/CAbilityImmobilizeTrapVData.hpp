#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1960
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityImmobilizeTrapVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeParticle; // 0x1560	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_PreviewRingParticle; // 0x1640	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TrapHighlightParticle; // 0x1720	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ArmedParticle; // 0x1800	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strTripSound; // 0x18e0	
	CSoundEventName m_strExplodeSound; // 0x18f0	
	CSoundEventName m_strExpiredSound; // 0x1900	
	CSoundEventName m_strImmobilizeTargetSound; // 0x1910	
	CSoundEventName m_strArmingSound; // 0x1920	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_TetherModifier; // 0x1930	
	CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // 0x1940	
	CEmbeddedSubclass< CCitadelModifier > m_SlowModifier; // 0x1950	
};

