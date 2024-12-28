#pragma once

#include <cstdint>

struct CCitadelAutoScaledTime;
struct GameTime_t;
struct ParticleIndex_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xba0
// Has VTable
// 
// MNetworkVarNames "CCitadelAutoScaledTime m_flGroundDashSlideTime"
// MNetworkVarNames "GameTime_t m_flSlowGetupStartTime"
// MNetworkVarNames "bool m_bShouldTriggerSlowGetup"
// MNetworkVarNames "bool m_bWantsSlide"
// MNetworkVarNames "bool m_bAirborneWhenDuckPressed"
// MNetworkVarNames "bool m_bIsSliding"
// MNetworkVarNames "float m_flSpeedAdjust"
// MNetworkVarNames "GameTime_t m_flDuckPressedTime"
// MNetworkVarNames "GameTime_t m_flSlideChangeTime"
// MNetworkVarNames "GameTime_t m_flSlidingOnFlatStartTime"
// MNetworkVarNames "int m_nJumpsThisSlideSession"
// MNetworkVarNames "GameTime_t m_flOnGroundStartTime"
// MNetworkVarNames "GameTime_t m_flDashSlideStartTime"
class CCitadel_Ability_Slide : public CCitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0af8[0x58]; // 0xaf8
public:
	// MNetworkEnable
	CCitadelAutoScaledTime m_flGroundDashSlideTime; // 0xb50	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flSlowGetupStartTime; // 0xb68	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	bool m_bShouldTriggerSlowGetup; // 0xb6c	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	bool m_bWantsSlide; // 0xb6d	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	bool m_bAirborneWhenDuckPressed; // 0xb6e	
	// MNetworkEnable
	bool m_bIsSliding; // 0xb6f	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	float m_flSpeedAdjust; // 0xb70	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flDuckPressedTime; // 0xb74	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flSlideChangeTime; // 0xb78	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flSlidingOnFlatStartTime; // 0xb7c	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	int32_t m_nJumpsThisSlideSession; // 0xb80	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flOnGroundStartTime; // 0xb84	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flDashSlideStartTime; // 0xb88	
	bool m_bStartedSlideViaProbeSlope; // 0xb8c	
private:
	[[maybe_unused]] uint8_t __pad0b8d[0x3]; // 0xb8d
public:
	ParticleIndex_t m_nSlideEffectIndex; // 0xb90	
};

