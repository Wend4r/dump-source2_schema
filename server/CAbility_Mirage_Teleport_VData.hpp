#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1788
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbility_Mirage_Teleport_VData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_BuffModifier; // 0x1568	
	CEmbeddedSubclass< CCitadelModifier > m_ImmunityModifier; // 0x1578	
	CEmbeddedSubclass< CCitadelModifier > m_FireRateModifier; // 0x1588	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TeleportStartParticle; // 0x1598	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TeleportEndParticle; // 0x1678	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strArriveSound; // 0x1758	
	CSoundEventName m_strDepartSound; // 0x1768	
	CSoundEventName m_strChannelDestinationSound; // 0x1778	
};

