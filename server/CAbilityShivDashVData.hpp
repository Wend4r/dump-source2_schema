#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1860
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityShivDashVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_DashModifier; // 0x1568	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DashImpactEffect; // 0x1578	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DashSwingEffect; // 0x1658	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DashLineEffect; // 0x1738	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strDashStartWithTargets; // 0x1818	
	CSoundEventName m_strDashStartEcho; // 0x1828	
	CSoundEventName m_strDashStartMiss; // 0x1838	
	CSoundEventName m_strDashHitEnemy; // 0x1848	
	// MPropertyStartGroup "+Dash Properties"
	float m_flEchoDelay; // 0x1858	
};

