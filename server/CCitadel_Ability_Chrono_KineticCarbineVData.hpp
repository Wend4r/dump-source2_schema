#pragma once

#include <cstdint>

struct CitadelCameraOperationsSequence_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1618
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_Chrono_KineticCarbineVData : public CitadelAbilityVData
{
public:
	float m_flShotTimeScaleLingerDuration; // 0x1568	
private:
	[[maybe_unused]] uint8_t __pad156c[0x4]; // 0x156c
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_ChargingModifier; // 0x1570	
	CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // 0x1580	
	// MPropertyStartGroup "Camera"
	CitadelCameraOperationsSequence_t m_cameraKineticCarbineShotFired; // 0x1590	
};

