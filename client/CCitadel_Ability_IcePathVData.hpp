#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1598
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_IcePathVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_IcePathModifier; // 0x1568	
	// MPropertyStartGroup "Gameplay"
	float m_flMomentumDecayRate; // 0x1578	
	float m_flMomentumWeight; // 0x157c	
	float m_flMaxPitchChange; // 0x1580	
	float m_flMaxPitchUp; // 0x1584	
	float m_flMaxPitchDown; // 0x1588	
	float m_flMaxHeight; // 0x158c	
	float m_flForwardAngleBias; // 0x1590	
};

