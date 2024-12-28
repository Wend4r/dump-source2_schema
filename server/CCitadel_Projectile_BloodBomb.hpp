#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x898
// Has VTable
class CCitadel_Projectile_BloodBomb : public CCitadelProjectile
{
public:
	bool m_bSecondBomb; // 0x868	
private:
	[[maybe_unused]] uint8_t __pad0869[0x3]; // 0x869
public:
	int32_t m_nBeepSoundBuildupCount; // 0x86c	
	float m_flBeepSoundIntervalBias; // 0x870	
	float m_flBeepSoundMaxFrequency; // 0x874	
	float m_flArmingDuration; // 0x878	
private:
	[[maybe_unused]] uint8_t __pad087c[0x4]; // 0x87c
public:
	CUtlVector< float32 > m_vecBeepIntervals; // 0x880	
};

