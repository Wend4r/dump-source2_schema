#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1800
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_Tengu_AirLiftVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_FlyingModifier; // 0x1560	
	CEmbeddedSubclass< CCitadelModifier > m_GrabModifier; // 0x1570	
	CEmbeddedSubclass< CCitadelModifier > m_HoldBombModifier; // 0x1580	
	CEmbeddedSubclass< CCitadelModifier > m_DroppedBuffModifier; // 0x1590	
	CEmbeddedSubclass< CCitadelModifier > m_ExplodingAllyModifier; // 0x15a0	
	CEmbeddedSubclass< CCitadelModifier > m_AoEModifier; // 0x15b0	
	// MPropertyGroupName "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_InitialExplodeParticle; // 0x15c0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_HoldBombEffect; // 0x16a0	
	// MPropertyGroupName "Sounds"
	CSoundEventName m_strExplodeSound; // 0x1780	
	// MPropertyStartGroup "Gameplay"
	float m_flAirDrag; // 0x1790	
	float m_flMaxFallSpeed; // 0x1794	
	float m_flTargetAirSpeedFast; // 0x1798	
	float m_flTargetAirSpeedBase; // 0x179c	
	float m_flSprintMult; // 0x17a0	
	float m_flAcceleration; // 0x17a4	
	float m_flDecceleration; // 0x17a8	
	float m_flAirSideSpeedPercent; // 0x17ac	
	float m_flBoostTime; // 0x17b0	
	float m_flBoostSpeedUp; // 0x17b4	
	float m_flCrouchLaunchReduction; // 0x17b8	
	float m_flMinFlyHeight; // 0x17bc	
	float m_flMaxFlyHeight; // 0x17c0	
	float m_flMaxPitchUp; // 0x17c4	
	float m_flMaxPitchDown; // 0x17c8	
	float m_flAllyDelayedBoostTime; // 0x17cc	
	float m_flChannelingAirDrag; // 0x17d0	
	float m_flChannelingMaxFallSpeed; // 0x17d4	
	float m_flBombReleaseSpeed; // 0x17d8	
	float m_flBombReleasePitch; // 0x17dc	
	float m_flBombDropReleaseOffset; // 0x17e0	
	float m_flHoldBombOffsetX; // 0x17e4	
	float m_flHoldBombOffsetY; // 0x17e8	
	float m_flHoldBombOffsetZ; // 0x17ec	
	float m_flAnglePitchBias; // 0x17f0	
	float m_flTrackAmount; // 0x17f4	
	float m_flMoveCollideSpeed; // 0x17f8	
};

