#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1688
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityStompVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_StompParticle; // 0x1568	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strStompExplosionSound; // 0x1648	
	CSoundEventName m_strCastDelayLocalPlayerSound; // 0x1658	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // 0x1668	
	CEmbeddedSubclass< CCitadelModifier > m_BulletResistModifier; // 0x1678	
};

