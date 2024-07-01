#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x15f0
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityThumper2VData : public CitadelAbilityVData
{
public:
	// MPropertyGroupName "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_StompParticle; // 0x14e0	
	// MPropertyGroupName "Sounds"
	CSoundEventName m_strStompExplosionSound; // 0x15c0	
	// MPropertyGroupName "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_BuffModifier; // 0x15d0	
	CEmbeddedSubclass< CCitadelModifier > m_BarbedWireAuraModifier; // 0x15e0	
};

