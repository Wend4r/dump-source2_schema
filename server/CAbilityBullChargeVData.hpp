#pragma once

#include <cstdint>

struct CitadelCameraOperationsSequence_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1720
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityBullChargeVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Camera"
	CitadelCameraOperationsSequence_t m_cameraSequenceImpact; // 0x1560	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CBaseModifier > m_ModifierTossAirControlLockout; // 0x15e8	
	CEmbeddedSubclass< CBaseModifier > m_ModifierWeaponPowerIncrease; // 0x15f8	
	CEmbeddedSubclass< CBaseModifier > m_ModifierChargeDragEnemy; // 0x1608	
	CEmbeddedSubclass< CBaseModifier > m_ModifierBullCharging; // 0x1618	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_WallImpactParticle; // 0x1628	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strWallSlamSound; // 0x1708	
	// MPropertyStartGroup "GamePlay"
	float m_flWallStunLookAheadDist; // 0x1718	
	float m_flEndChargeVelocityScale; // 0x171c	
};

