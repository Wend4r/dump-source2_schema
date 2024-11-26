#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1860
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityExplosiveBarrelVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BarrelExplodeParticle; // 0x1560	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_MirvExplodeParticle; // 0x1640	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BarrelBurnParticle; // 0x1720	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strExplodeSound; // 0x1800	
	CSoundEventName m_strMirvExplodeSound; // 0x1810	
	CSoundEventName m_strRiccochetSound; // 0x1820	
	CSoundEventName m_strBarrelSoundLp; // 0x1830	
	CSoundEventName m_strBarrelLaunchSound; // 0x1840	
	CSoundEventName m_strBarrelMeleedSound; // 0x1850	
};

