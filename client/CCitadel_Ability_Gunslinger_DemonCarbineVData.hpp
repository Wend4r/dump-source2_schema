#pragma once

#include <cstdint>

struct CitadelCameraOperationsSequence_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1610
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_Gunslinger_DemonCarbineVData : public CitadelAbilityVData
{
public:
	float m_flShotTimeScaleLingerDuration; // 0x1560	
private:
	[[maybe_unused]] uint8_t __pad1564[0x4]; // 0x1564
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_ChargingModifier; // 0x1568	
	CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // 0x1578	
	// MPropertyStartGroup "Camera"
	CitadelCameraOperationsSequence_t m_cameraDemonCarbineShotFired; // 0x1588	
};

