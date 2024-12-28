#pragma once

#include <cstdint>

struct ParticleIndex_t;
struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xf08
// Has VTable
// 
// MNetworkVarNames "GameTime_t m_flCastTime"
// MNetworkVarNames "bool m_bCrashingDown"
// MNetworkVarNames "bool m_bImpulseApplied"
// MNetworkVarNames "bool m_bCanCrash"
// MNetworkVarNames "Vector m_vecCrashPosition"
// MNetworkVarNames "Vector m_vecCrashDirection"
class CCitadel_UtilityUpgrade_RocketBooster : public CCitadel_UtilityUpgrade_RocketBoots
{
private:
	[[maybe_unused]] uint8_t __pad0d20[0x4]; // 0xd20
public:
	ParticleIndex_t m_nTargetingParticleIndex; // 0xd24	
	// MNetworkEnable
	// MNetworkChangeCallback "OnCanSlamDownChanged"
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flCastTime; // 0xd28	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	bool m_bCrashingDown; // 0xd2c	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	bool m_bImpulseApplied; // 0xd2d	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	bool m_bCanCrash; // 0xd2e	
private:
	[[maybe_unused]] uint8_t __pad0d2f[0x1]; // 0xd2f
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	Vector m_vecCrashPosition; // 0xd30	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	Vector m_vecCrashDirection; // 0xd3c	
};

