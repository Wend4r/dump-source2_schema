#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x28
// 
// MGetKV3ClassDefaults
struct AI_MovementHeadingSettings_t
{
public:
	AI_MovementHeadingMode_t m_eMode; // 0x0	
	bool m_bUseBadZones; // 0x4	
private:
	[[maybe_unused]] uint8_t __pad0005[0x3]; // 0x5
public:
	CUtlVector< AI_MovementHeadingBadZone_t > m_badZones; // 0x8	
	float m_flPredictionLookAhead; // 0x20	
};

