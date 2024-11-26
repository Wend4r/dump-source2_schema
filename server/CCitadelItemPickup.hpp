#pragma once

#include <cstdint>

struct CCitadelMinimapComponent;
struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x64c8
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
	[[maybe_unused]] uint8_t __pad0bc0[0x8]; // 0xbc0
public:
	// MNetworkEnable
	// MNetworkUserGroup "CCitadelMinimapComponent"
	// MNetworkAlias "CCitadelMinimapComponent"
	// MNetworkTypeAlias "CCitadelMinimapComponent"
	CCitadelMinimapComponent m_CCitadelMinimapComponent; // 0xbc8	
	// MNetworkEnable
	int32_t m_eLootType; // 0xbe0	
	// MNetworkEnable
	int32_t m_nCurrencyValue; // 0xbe4	
	// MNetworkEnable
	CUtlSymbolLarge m_iszModelName; // 0xbe8	
	// MNetworkEnable
	float m_flModelScale; // 0xbf0	
	// MNetworkEnable
	CHandle< CBaseEntity > m_hTargetPlayer; // 0xbf4	
	// MNetworkEnable
	float m_flFallRate; // 0xbf8	
private:
	[[maybe_unused]] uint8_t __pad0bfc[0xc]; // 0xbfc
public:
	Vector m_vHomePosition; // 0xc08	
	Vector m_vDropPosition; // 0xc14	
	GameTime_t m_tFirstPickupTime; // 0xc20	
	
	// Datamap fields:
	// bool m_bRequireGroundForPickup; // 0xc00
	// bool from_crate; // 0x7fffffff
	// int32_t m_eObjectivePosition; // 0xbfc
	// int32_t m_nKillingTeamNumber; // 0xc04
};

