#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1688
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityChargedTackleVData : public CitadelAbilityVData
{
public:
	// MPropertyGroupName "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ChargePreviewParticle; // 0x1568	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_ChargePrepareModifier; // 0x1648	
	CEmbeddedSubclass< CCitadelModifier > m_ChargeActiveModifier; // 0x1658	
	CEmbeddedSubclass< CCitadelModifier > m_DragModifier; // 0x1668	
	// MPropertyGroupName "Sounds"
	CSoundEventName m_strHitSound; // 0x1678	
};

