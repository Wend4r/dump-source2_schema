#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x16a0
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityStormCloudVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AoEPreviewParticle; // 0x1568	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CBaseModifier > m_StormCloudModifier; // 0x1648	
	CEmbeddedSubclass< CCitadelModifier > m_LightningStrikeAOEModifier; // 0x1658	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strLightningStrikeCast; // 0x1668	
	// MPropertyStartGroup "Gameplay"
	float m_flOscillateFrequency; // 0x1678	
	float m_flOscillateSpeed; // 0x167c	
	float m_flOscillateSpeedStart; // 0x1680	
	float m_flOscillateStartOffset; // 0x1684	
	float m_flAirDrag; // 0x1688	
	float m_flFlightAirDrag; // 0x168c	
	float m_flFlightLateralMoveSpeed; // 0x1690	
	float m_flVerticalMoveSpeedPercent; // 0x1694	
	float m_flAirAcceleration; // 0x1698	
};

