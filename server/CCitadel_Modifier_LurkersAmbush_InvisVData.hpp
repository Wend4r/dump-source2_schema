#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x908
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_LurkersAmbush_InvisVData : public CCitadel_Modifier_InvisVData
{
public:
	// MPropertyStartGroup "+Properties"
	float m_flMaxCameraAngleForSeeing; // 0x8f8	
	// MPropertyDescription "Max distance a player can look at Fathom to reveal him"
	float m_flMaxDistanceForSeeing; // 0x8fc	
	// MPropertyDescription "Visual bias on how the invis is applied"
	float m_flInvisBias; // 0x900	
	// MPropertyDescription "How long a player needs to look at Fathom before the invis even starts to reveal"
	float m_flSpottedMinTimeToStart; // 0x904	
};

