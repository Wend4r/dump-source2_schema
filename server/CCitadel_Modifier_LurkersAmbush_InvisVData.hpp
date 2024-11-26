#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x8e0
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_LurkersAmbush_InvisVData : public CCitadel_Modifier_InvisVData
{
public:
	// MPropertyStartGroup "+Properties"
	float m_flMaxCameraAngleForSeeing; // 0x8d0	
	// MPropertyDescription "Max distance a player can look at Fathom to reveal him"
	float m_flMaxDistanceForSeeing; // 0x8d4	
	// MPropertyDescription "Visual bias on how the invis is applied"
	float m_flInvisBias; // 0x8d8	
	// MPropertyDescription "How long a player needs to look at Fathom before the invis even starts to reveal"
	float m_flSpottedMinTimeToStart; // 0x8dc	
};

