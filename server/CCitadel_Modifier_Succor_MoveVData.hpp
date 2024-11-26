#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x628
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_Succor_MoveVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_PullSound; // 0x608	
	// MPropertyStartGroup "Gameplay"
	float m_flPullSpeedMin; // 0x618	
	float m_flPullSpeedMax; // 0x61c	
	float m_flPullDistanceMin; // 0x620	
	float m_flPullDistanceMax; // 0x624	
};

