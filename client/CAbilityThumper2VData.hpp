#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1678
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityThumper2VData : public CitadelAbilityVData
{
public:
	// MPropertyGroupName "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_StompParticle; // 0x1568	
	// MPropertyGroupName "Sounds"
	CSoundEventName m_strStompExplosionSound; // 0x1648	
	// MPropertyGroupName "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_BuffModifier; // 0x1658	
	CEmbeddedSubclass< CCitadelModifier > m_BarbedWireAuraModifier; // 0x1668	
};

