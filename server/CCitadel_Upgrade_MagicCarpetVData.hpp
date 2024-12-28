#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x16f8
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Upgrade_MagicCarpetVData : public CitadelItemVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SummonParticle; // 0x15b0	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_FlyingCarpetModifier; // 0x1690	
	CEmbeddedSubclass< CCitadelModifier > m_SummonFlyingCarpetModifier; // 0x16a0	
	CEmbeddedSubclass< CCitadelModifier > m_SummonFlyingCarpetVisualModifier; // 0x16b0	
	CEmbeddedSubclass< CCitadelModifier > m_FlyingCarpetVisualModifier; // 0x16c0	
	CEmbeddedSubclass< CCitadelModifier > m_ShieldModifier; // 0x16d0	
	// MPropertyStartGroup "Gameplay"
	float m_flSummonVisualDuration; // 0x16e0	
	float m_flBurstSpeedBonus; // 0x16e4	
	float m_flBurstSpeedMin; // 0x16e8	
	float m_flBurstSpeedDuration; // 0x16ec	
	float m_flMinDistanceAboveGround; // 0x16f0	
};

