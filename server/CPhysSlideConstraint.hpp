#pragma once

#include <cstdint>

struct ConstraintSoundInfo;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x618
// Has VTable
class CPhysSlideConstraint : public CPhysConstraint
{
private:
	[[maybe_unused]] uint8_t __pad0560[0x8]; // 0x560
public:
	Vector m_axisEnd; // 0x568	
	float m_slideFriction; // 0x574	
	float m_systemLoadScale; // 0x578	
	float m_initialOffset; // 0x57c	
	bool m_bEnableLinearConstraint; // 0x580	
	bool m_bEnableAngularConstraint; // 0x581	
private:
	[[maybe_unused]] uint8_t __pad0582[0x2]; // 0x582
public:
	float m_flMotorFrequency; // 0x584	
	float m_flMotorDampingRatio; // 0x588	
	bool m_bUseEntityPivot; // 0x58c	
private:
	[[maybe_unused]] uint8_t __pad058d[0x3]; // 0x58d
public:
	ConstraintSoundInfo m_soundInfo; // 0x590	
	
	// Datamap fields:
	// float InputSetOffset; // 0x0
	// float InputSetVelocity; // 0x0
	// float InputSetSlideFriction; // 0x0
	// void CPhysSlideConstraintSoundThink; // 0x0
};

