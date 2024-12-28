#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1588
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityVacuumVData : public CitadelAbilityVData
{
public:
	// MPropertyGroupName "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_VacuumAuraModifier; // 0x1568	
	// MPropertyStartGroup "+Vacuum Properties"
	float m_flAirSpeedMax; // 0x1578	
	float m_flFallSpeedMax; // 0x157c	
	float m_flAirDrag; // 0x1580	
	float m_flMaxMovespeed; // 0x1584	
};

