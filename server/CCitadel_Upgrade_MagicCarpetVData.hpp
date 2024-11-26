#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x16f0
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Upgrade_MagicCarpetVData : public CitadelItemVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SummonParticle; // 0x15a8	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_FlyingCarpetModifier; // 0x1688	
	CEmbeddedSubclass< CCitadelModifier > m_SummonFlyingCarpetModifier; // 0x1698	
	CEmbeddedSubclass< CCitadelModifier > m_SummonFlyingCarpetVisualModifier; // 0x16a8	
	CEmbeddedSubclass< CCitadelModifier > m_FlyingCarpetVisualModifier; // 0x16b8	
	CEmbeddedSubclass< CCitadelModifier > m_ShieldModifier; // 0x16c8	
	// MPropertyStartGroup "Gameplay"
	float m_flSummonVisualDuration; // 0x16d8	
	float m_flBurstSpeedBonus; // 0x16dc	
	float m_flBurstSpeedMin; // 0x16e0	
	float m_flBurstSpeedDuration; // 0x16e4	
	float m_flMinDistanceAboveGround; // 0x16e8	
};

