#pragma once

#include <cstdint>

struct CitadelCameraOperationsSequence_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1728
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityBullChargeVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Camera"
	CitadelCameraOperationsSequence_t m_cameraSequenceImpact; // 0x1568	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CBaseModifier > m_ModifierTossAirControlLockout; // 0x15f0	
	CEmbeddedSubclass< CBaseModifier > m_ModifierWeaponPowerIncrease; // 0x1600	
	CEmbeddedSubclass< CBaseModifier > m_ModifierChargeDragEnemy; // 0x1610	
	CEmbeddedSubclass< CBaseModifier > m_ModifierBullCharging; // 0x1620	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_WallImpactParticle; // 0x1630	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strWallSlamSound; // 0x1710	
	// MPropertyStartGroup "GamePlay"
	float m_flWallStunLookAheadDist; // 0x1720	
	float m_flEndChargeVelocityScale; // 0x1724	
};

