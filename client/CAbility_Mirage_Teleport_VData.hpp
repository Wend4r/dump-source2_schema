#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1780
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbility_Mirage_Teleport_VData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_BuffModifier; // 0x1560	
	CEmbeddedSubclass< CCitadelModifier > m_ImmunityModifier; // 0x1570	
	CEmbeddedSubclass< CCitadelModifier > m_FireRateModifier; // 0x1580	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TeleportStartParticle; // 0x1590	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TeleportEndParticle; // 0x1670	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strArriveSound; // 0x1750	
	CSoundEventName m_strDepartSound; // 0x1760	
	CSoundEventName m_strChannelDestinationSound; // 0x1770	
};

