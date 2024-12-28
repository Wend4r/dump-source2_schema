#pragma once

#include <cstdint>

struct CRemapFloat;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x18d0
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityJumpVData : public CitadelAbilityVData
{
public:
	float m_flShootingLockoutAfterJump; // 0x1568	
private:
	[[maybe_unused]] uint8_t __pad156c[0x4]; // 0x156c
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DashJumpParticle; // 0x1570	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AirJumpParticle; // 0x1650	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_WallJumpParticle; // 0x1730	
	// MPropertyStartGroup "Air Jump"
	CSoundEventName m_AirJumpExecutedSound; // 0x1810	
	float m_flMantleRefundWindow; // 0x1820	
	float m_flZiplineRefundWindow; // 0x1824	
	float m_flLateJumpGraceWindow; // 0x1828	
	// MPropertyDescription "The most we'll adjust your speed in the input direction when performing an air jump"
	float m_flMaxSpeedDelta; // 0x182c	
	// MPropertyStartGroup "Roll Jump"
	CSoundEventName m_strDashJumpActivate; // 0x1830	
	float m_flDashJumpStartTime; // 0x1840	
	float m_flDashJumpEndTime; // 0x1844	
	// MPropertyDescription "How far a dash jump will send you forward.  This is on top of the ~8m already traveled by the dash."
	float m_flDashJumpDistanceInMeters; // 0x1848	
private:
	[[maybe_unused]] uint8_t __pad184c[0x4]; // 0x184c
public:
	float m_flDashJumpVerticalSpeed; // 0x1850	
	float m_flDashJumpMissMaxSpeed; // 0x1854	
	float m_flDashJumpMantleDisableTime; // 0x1858	
private:
	[[maybe_unused]] uint8_t __pad185c[0x4]; // 0x185c
public:
	// MPropertyStartGroup "Wall Jump"
	CSoundEventName m_WallJumpExecutedSound; // 0x1860	
	// MPropertyDescription "How far we'll trace to see if the wall we collided with is close enough to trigger a wall jump"
	float m_flCollidedWallMaxDist; // 0x1870	
	// MPropertyDescription "How far we'll trace using the player's velocity to find a wall to jump off of"
	CRemapFloat m_flRemapSpeedToWallJumpVelocityDist; // 0x1874	
	// MPropertyDescription "Speed to apply away from the wall"
	float m_flWallJumpNormalSpeed; // 0x1884	
	// MPropertyDescription "Air-Drag after using a wall jump"
	CPiecewiseCurve m_WallJumpAirDragCurve; // 0x1888	
	// MPropertyDescription "How much player input can steer the velocity relative to the wall normal"
	float m_flMaxWallYawOffset; // 0x18c8	
};

