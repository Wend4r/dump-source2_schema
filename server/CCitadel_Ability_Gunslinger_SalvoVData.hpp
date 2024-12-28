#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1668
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_Gunslinger_SalvoVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BulletWarningParticle; // 0x1568	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_ProcWatcherModifier; // 0x1648	
	CEmbeddedSubclass< CCitadelModifier > m_VictimWarningModifier; // 0x1658	
};

