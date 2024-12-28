#pragma once

#include <cstdint>

struct CitadelCameraOperationsSequence_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1620
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_FlameDashVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_FlameDashModifier; // 0x1568	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_DashBurstSound; // 0x1578	
	CSoundEventName m_ChargeHitSound; // 0x1588	
	// MPropertyStartGroup "Camera"
	CitadelCameraOperationsSequence_t m_cameraSpeedBoost; // 0x1598	
};

