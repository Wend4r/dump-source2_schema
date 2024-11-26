#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1680
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityChargedTackleVData : public CitadelAbilityVData
{
public:
	// MPropertyGroupName "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ChargePreviewParticle; // 0x1560	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_ChargePrepareModifier; // 0x1640	
	CEmbeddedSubclass< CCitadelModifier > m_ChargeActiveModifier; // 0x1650	
	CEmbeddedSubclass< CCitadelModifier > m_DragModifier; // 0x1660	
	// MPropertyGroupName "Sounds"
	CSoundEventName m_strHitSound; // 0x1670	
};

