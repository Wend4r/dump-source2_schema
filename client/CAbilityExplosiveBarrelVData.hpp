#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1868
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityExplosiveBarrelVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BarrelExplodeParticle; // 0x1568	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_MirvExplodeParticle; // 0x1648	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BarrelBurnParticle; // 0x1728	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strExplodeSound; // 0x1808	
	CSoundEventName m_strMirvExplodeSound; // 0x1818	
	CSoundEventName m_strRiccochetSound; // 0x1828	
	CSoundEventName m_strBarrelSoundLp; // 0x1838	
	CSoundEventName m_strBarrelLaunchSound; // 0x1848	
	CSoundEventName m_strBarrelMeleedSound; // 0x1858	
};

