#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x650
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_Succor_MoveVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_PullSound; // 0x630	
	// MPropertyStartGroup "Gameplay"
	float m_flPullSpeedMin; // 0x640	
	float m_flPullSpeedMax; // 0x644	
	float m_flPullDistanceMin; // 0x648	
	float m_flPullDistanceMax; // 0x64c	
};

