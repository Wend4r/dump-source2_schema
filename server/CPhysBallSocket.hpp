#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x578
// Has VTable
class CPhysBallSocket : public CPhysConstraint
{
public:
	float m_flJointFriction; // 0x560	
	bool m_bEnableSwingLimit; // 0x564	
private:
	[[maybe_unused]] uint8_t __pad0565[0x3]; // 0x565
public:
	float m_flSwingLimit; // 0x568	
	bool m_bEnableTwistLimit; // 0x56c	
private:
	[[maybe_unused]] uint8_t __pad056d[0x3]; // 0x56d
public:
	float m_flMinTwistAngle; // 0x570	
	float m_flMaxTwistAngle; // 0x574	
};

