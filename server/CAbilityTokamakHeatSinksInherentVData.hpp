#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1758
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityTokamakHeatSinksInherentVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_HotTracerParticle; // 0x1568	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_HotWeaponFxParticle; // 0x1648	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strHotWeaponShootSound; // 0x1728	
	CSoundEventName m_strOverheatRed; // 0x1738	
	CSoundEventName m_strOverheatFull; // 0x1748	
};

