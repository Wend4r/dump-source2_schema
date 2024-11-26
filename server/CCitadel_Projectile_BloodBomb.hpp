#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x8a0
// Has VTable
class CCitadel_Projectile_BloodBomb : public CCitadelProjectile
{
public:
	bool m_bSecondBomb; // 0x870	
private:
	[[maybe_unused]] uint8_t __pad0871[0x3]; // 0x871
public:
	int32_t m_nBeepSoundBuildupCount; // 0x874	
	float m_flBeepSoundIntervalBias; // 0x878	
	float m_flBeepSoundMaxFrequency; // 0x87c	
	float m_flArmingDuration; // 0x880	
private:
	[[maybe_unused]] uint8_t __pad0884[0x4]; // 0x884
public:
	CUtlVector< float32 > m_vecBeepIntervals; // 0x888	
};

