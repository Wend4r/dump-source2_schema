#pragma once

#include <cstdint>

struct CCitadelAutoScaledTime;
struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1080
// Has VTable
// 
// MNetworkVarNames "bool m_bActive"
// MNetworkVarNames "EHANDLE m_hCurrentTarget"
// MNetworkVarNames "Vector m_vStartPosition"
// MNetworkVarNames "Vector m_vDeparturePosition"
// MNetworkVarNames "CCitadelAutoScaledTime m_flDepartureTime"
// MNetworkVarNames "CCitadelAutoScaledTime m_flArrivalTime"
// MNetworkVarNames "GameTime_t m_flDrainSuppressEndTime"
class CCitadel_Ability_Shiv_KillingBlow : public CCitadelBaseShivAbility
{
private:
	[[maybe_unused]] uint8_t __pad0c98[0x1c0]; // 0xc98
public:
	// MNetworkEnable
	bool m_bActive; // 0xe58	
private:
	[[maybe_unused]] uint8_t __pad0e59[0x3]; // 0xe59
public:
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hCurrentTarget; // 0xe5c	
	// MNetworkEnable
	Vector m_vStartPosition; // 0xe60	
	// MNetworkEnable
	Vector m_vDeparturePosition; // 0xe6c	
	// MNetworkEnable
	CCitadelAutoScaledTime m_flDepartureTime; // 0xe78	
	// MNetworkEnable
	CCitadelAutoScaledTime m_flArrivalTime; // 0xe90	
	Vector m_vLastKnownSafePos; // 0xea8	
private:
	[[maybe_unused]] uint8_t __pad0eb4[0x4]; // 0xeb4
public:
	// MNetworkEnable
	GameTime_t m_flDrainSuppressEndTime; // 0xeb8	
};

