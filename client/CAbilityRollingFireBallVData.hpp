#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1580
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityRollingFireBallVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Visuals"
	// MPropertyStartGroup "Sounds"
	// MPropertyStartGroup "Modifiers"
	// MPropertyStartGroup "Gameplay"
	float m_flBallLifetime; // 0x1568	
	float m_flBallStepUpHeight; // 0x156c	
	float m_flBallDistAboveGround; // 0x1570	
	float m_flBallFloatDownRate; // 0x1574	
	float m_flBallSpeed; // 0x1578	
	float m_flBallTraceRadius; // 0x157c	
};

