#pragma once

#include <cstdint>

struct CRemapFloat;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x18c8
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityJumpVData : public CitadelAbilityVData
{
public:
	float m_flShootingLockoutAfterJump; // 0x1560	
private:
	[[maybe_unused]] uint8_t __pad1564[0x4]; // 0x1564
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DashJumpParticle; // 0x1568	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AirJumpParticle; // 0x1648	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_WallJumpParticle; // 0x1728	
	// MPropertyStartGroup "Air Jump"
	CSoundEventName m_AirJumpExecutedSound; // 0x1808	
	float m_flMantleRefundWindow; // 0x1818	
	float m_flZiplineRefundWindow; // 0x181c	
	float m_flLateJumpGraceWindow; // 0x1820	
	// MPropertyDescription "The most we'll adjust your speed in the input direction when performing an air jump"
	float m_flMaxSpeedDelta; // 0x1824	
	// MPropertyStartGroup "Roll Jump"
	CSoundEventName m_strDashJumpActivate; // 0x1828	
	float m_flDashJumpStartTime; // 0x1838	
	float m_flDashJumpEndTime; // 0x183c	
	// MPropertyDescription "How far a dash jump will send you forward.  This is on top of the ~8m already traveled by the dash."
	float m_flDashJumpDistanceInMeters; // 0x1840	
private:
	[[maybe_unused]] uint8_t __pad1844[0x4]; // 0x1844
public:
	float m_flDashJumpVerticalSpeed; // 0x1848	
	float m_flDashJumpMissMaxSpeed; // 0x184c	
	float m_flDashJumpMantleDisableTime; // 0x1850	
private:
	[[maybe_unused]] uint8_t __pad1854[0x4]; // 0x1854
public:
	// MPropertyStartGroup "Wall Jump"
	CSoundEventName m_WallJumpExecutedSound; // 0x1858	
	// MPropertyDescription "How far we'll trace to see if the wall we collided with is close enough to trigger a wall jump"
	float m_flCollidedWallMaxDist; // 0x1868	
	// MPropertyDescription "How far we'll trace using the player's velocity to find a wall to jump off of"
	CRemapFloat m_flRemapSpeedToWallJumpVelocityDist; // 0x186c	
	// MPropertyDescription "Speed to apply away from the wall"
	float m_flWallJumpNormalSpeed; // 0x187c	
	// MPropertyDescription "Air-Drag after using a wall jump"
	CPiecewiseCurve m_WallJumpAirDragCurve; // 0x1880	
	// MPropertyDescription "How much player input can steer the velocity relative to the wall normal"
	float m_flMaxWallYawOffset; // 0x18c0	
};

