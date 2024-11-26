#pragma once

#include <cstdint>

struct ConstraintSoundInfo;
struct CEntityIOOutput;
struct constraint_hingeparams_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x700
// Has VTable
class CPhysHinge : public CPhysConstraint
{
private:
	[[maybe_unused]] uint8_t __pad0560[0x8]; // 0x560
public:
	ConstraintSoundInfo m_soundInfo; // 0x568	
	CEntityIOOutput m_NotifyMinLimitReached; // 0x5f0	
	CEntityIOOutput m_NotifyMaxLimitReached; // 0x618	
	bool m_bAtMinLimit; // 0x640	
	bool m_bAtMaxLimit; // 0x641	
private:
	[[maybe_unused]] uint8_t __pad0642[0x2]; // 0x642
public:
	constraint_hingeparams_t m_hinge; // 0x644	
	float m_hingeFriction; // 0x684	
	float m_systemLoadScale; // 0x688	
	bool m_bIsAxisLocal; // 0x68c	
private:
	[[maybe_unused]] uint8_t __pad068d[0x3]; // 0x68d
public:
	float m_flMinRotation; // 0x690	
	float m_flMaxRotation; // 0x694	
	float m_flInitialRotation; // 0x698	
	float m_flMotorFrequency; // 0x69c	
	float m_flMotorDampingRatio; // 0x6a0	
	float m_flAngleSpeed; // 0x6a4	
	float m_flAngleSpeedThreshold; // 0x6a8	
private:
	[[maybe_unused]] uint8_t __pad06ac[0x4]; // 0x6ac
public:
	CEntityIOOutput m_OnStartMoving; // 0x6b0	
	CEntityIOOutput m_OnStopMoving; // 0x6d8	
	
	// Datamap fields:
	// Vector m_hinge.worldPosition; // 0x644
	// Vector m_hinge.worldAxisDirection; // 0x650
	// float InputSetMotorTargetAngle; // 0x0
	// float InputSetVelocity; // 0x0
	// float InputSetHingeFriction; // 0x0
	// float InputSetMinLimit; // 0x0
	// float InputSetMaxLimit; // 0x0
	// void CPhysHingeSoundThink; // 0x0
	// void CPhysHingeLimitThink; // 0x0
	// void CPhysHingeMoveThink; // 0x0
};

