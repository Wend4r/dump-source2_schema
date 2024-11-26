#pragma once

#include <cstdint>

// Registered binary: animationsystem.dll (project 'animlib')
// Alignment: 16
// Size: 0x40
// Has Trivial Destructor
// 
// MGetKV3ClassDefaults
class CNmIKEffector
{
public:
	int32_t m_nBodyIndex; // 0x0	
	bool m_bEnabled; // 0x4	
private:
	[[maybe_unused]] uint8_t __pad0005[0x3]; // 0x5
public:
	Vector m_vTargetPosition; // 0x8	
private:
	[[maybe_unused]] uint8_t __pad0014[0xc]; // 0x14
public:
	Quaternion m_qTargetOrientation; // 0x20	
	float m_flWeight; // 0x30	
};

