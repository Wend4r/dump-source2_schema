#pragma once

#include <cstdint>

// Registered binary: animationsystem.dll (project 'animlib')
// Alignment: 16
// Size: 0x40
// Has Trivial Destructor
// 
// MGetKV3ClassDefaults
class CNmIKJoint
{
public:
	int32_t m_nParentIndex; // 0x0	
	int32_t m_nBodyIndex; // 0x4	
private:
	[[maybe_unused]] uint8_t __pad0008[0x8]; // 0x8
public:
	CTransform m_xLocalFrame; // 0x10	
	float m_flSwingLimit; // 0x30	
	float m_flMinTwistLimit; // 0x34	
	float m_flMaxTwistLimit; // 0x38	
	float m_flWeight; // 0x3c	
};

