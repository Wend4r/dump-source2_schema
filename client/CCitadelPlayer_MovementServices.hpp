#pragma once

#include <cstdint>

struct CNetworkVelocityVector;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x280
// Has VTable
// 
// MNetworkVarNames "CNetworkVelocityVector m_vPositionDeltaVelocity"
// MNetworkVarNames "bool m_bToggleDuckActive"
class CCitadelPlayer_MovementServices : public CPlayer_MovementServices_Humanoid
{
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	// MNetworkPriority "32"
	CNetworkVelocityVector m_vPositionDeltaVelocity; // 0x218	
private:
	[[maybe_unused]] uint8_t __pad0240[0x8]; // 0x240
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	// MNetworkPriority "32"
	bool m_bToggleDuckActive; // 0x248	
private:
	[[maybe_unused]] uint8_t __pad0249[0x3]; // 0x249
public:
	Vector m_vecPogoVelocity; // 0x24c	
	Vector m_vecSupport; // 0x258	
	bool m_bColliding; // 0x264	
	bool m_bLandedOnGround; // 0x265	
	bool m_bHasFreeCursor; // 0x266	
};

