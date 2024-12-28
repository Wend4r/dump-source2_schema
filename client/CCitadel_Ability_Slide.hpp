#pragma once

#include <cstdint>

struct CCitadelAutoScaledTime;
struct GameTime_t;
struct ParticleIndex_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xd40
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
class CCitadel_Ability_Slide : public C_CitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0c98[0x58]; // 0xc98
public:
	// MNetworkEnable
	CCitadelAutoScaledTime m_flGroundDashSlideTime; // 0xcf0	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flSlowGetupStartTime; // 0xd08	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	bool m_bShouldTriggerSlowGetup; // 0xd0c	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	bool m_bWantsSlide; // 0xd0d	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	bool m_bAirborneWhenDuckPressed; // 0xd0e	
	// MNetworkEnable
	bool m_bIsSliding; // 0xd0f	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	float m_flSpeedAdjust; // 0xd10	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flDuckPressedTime; // 0xd14	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flSlideChangeTime; // 0xd18	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flSlidingOnFlatStartTime; // 0xd1c	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	int32_t m_nJumpsThisSlideSession; // 0xd20	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flOnGroundStartTime; // 0xd24	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flDashSlideStartTime; // 0xd28	
	bool m_bStartedSlideViaProbeSlope; // 0xd2c	
private:
	[[maybe_unused]] uint8_t __pad0d2d[0x3]; // 0xd2d
public:
	ParticleIndex_t m_nSlideEffectIndex; // 0xd30	
};

