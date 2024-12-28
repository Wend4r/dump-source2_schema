#pragma once

#include <cstdint>

struct CCitadelMinimapComponent;
struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x64c0
// Has VTable
// 
// MNetworkVarNames "CCitadelMinimapComponent::Storage_t m_CCitadelMinimapComponent"
// MNetworkVarNames "int32 m_eLootType"
// MNetworkVarNames "int32 m_nCurrencyValue"
// MNetworkVarNames "string_t m_iszModelName"
// MNetworkVarNames "float m_flModelScale"
// MNetworkVarNames "EHANDLE m_hTargetPlayer"
// MNetworkVarNames "float m_flFallRate"
class CCitadelItemPickup : public CCitadelAnimatingModelEntity
{
private:
	[[maybe_unused]] uint8_t __pad0bb8[0x8]; // 0xbb8
public:
	// MNetworkEnable
	// MNetworkUserGroup "CCitadelMinimapComponent"
	// MNetworkAlias "CCitadelMinimapComponent"
	// MNetworkTypeAlias "CCitadelMinimapComponent"
	CCitadelMinimapComponent m_CCitadelMinimapComponent; // 0xbc0	
	// MNetworkEnable
	int32_t m_eLootType; // 0xbd8	
	// MNetworkEnable
	int32_t m_nCurrencyValue; // 0xbdc	
	// MNetworkEnable
	CUtlSymbolLarge m_iszModelName; // 0xbe0	
	// MNetworkEnable
	float m_flModelScale; // 0xbe8	
	// MNetworkEnable
	CHandle< CBaseEntity > m_hTargetPlayer; // 0xbec	
	// MNetworkEnable
	float m_flFallRate; // 0xbf0	
private:
	[[maybe_unused]] uint8_t __pad0bf4[0xc]; // 0xbf4
public:
	Vector m_vHomePosition; // 0xc00	
	Vector m_vDropPosition; // 0xc0c	
	GameTime_t m_tFirstPickupTime; // 0xc18	
	
	// Datamap fields:
	// bool m_bRequireGroundForPickup; // 0xbf8
	// bool from_crate; // 0x7fffffff
	// int32_t m_eObjectivePosition; // 0xbf4
	// int32_t m_nKillingTeamNumber; // 0xbfc
};

