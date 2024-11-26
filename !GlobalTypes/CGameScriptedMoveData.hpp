#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 4
// Size: 0x74
// Has Trivial Destructor
// 
// MGetKV3ClassDefaults
class CGameScriptedMoveData
{
public:
	Vector m_vAccumulatedRootMotion; // 0x0	
	float m_flAccumulatedRootMotionRotation; // 0xc	
	Vector m_vSrc; // 0x10	
	QAngle m_angSrc; // 0x1c	
	QAngle m_angDst; // 0x28	
	QAngle m_angCurrent; // 0x34	
	float m_flLockedSpeed; // 0x40	
	float m_flAngRate; // 0x44	
	float m_flDuration; // 0x48	
	GameTime_t m_flStartTime; // 0x4c	
	bool m_bActive; // 0x50	
	bool m_bTeleportOnEnd; // 0x51	
	bool m_bIgnoreRotation; // 0x52	
private:
	[[maybe_unused]] uint8_t __pad0053[0x1]; // 0x53
public:
	ScriptedMoveType_t m_nType; // 0x54	
	bool m_bSuccess; // 0x58	
private:
	[[maybe_unused]] uint8_t __pad0059[0x3]; // 0x59
public:
	ForcedCrouchState_t m_nForcedCrouchState; // 0x5c	
	bool m_bIgnoreCollisions; // 0x60	
private:
	[[maybe_unused]] uint8_t __pad0061[0x3]; // 0x61
public:
	Vector m_vDest; // 0x64	
	CHandle< CBaseEntity > m_hDestEntity; // 0x70	
};

