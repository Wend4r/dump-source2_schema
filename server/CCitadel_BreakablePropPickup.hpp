#pragma once

#include <cstdint>

struct CCitadelMinimapComponent;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xa80
// Has VTable
// 
// MNetworkVarNames "CCitadelMinimapComponent::Storage_t m_CCitadelMinimapComponent"
// MNetworkVarNames "bool m_bActive"
// MNetworkVarNames "CUtlString m_sPickupName"
// MNetworkVarNames "int m_nNameOffset"
// MNetworkVarNames "CUtlString m_sAmbientNoise"
class CCitadel_BreakablePropPickup : public CBaseAnimGraph
{
public:
	// MNetworkEnable
	// MNetworkUserGroup "CCitadelMinimapComponent"
	// MNetworkAlias "CCitadelMinimapComponent"
	// MNetworkTypeAlias "CCitadelMinimapComponent"
	CCitadelMinimapComponent m_CCitadelMinimapComponent; // 0xa40	
	// MNetworkEnable
	bool m_bActive; // 0xa58	
private:
	[[maybe_unused]] uint8_t __pad0a59[0x7]; // 0xa59
public:
	// MNetworkEnable
	CUtlString m_sPickupName; // 0xa60	
	// MNetworkEnable
	int32_t m_nNameOffset; // 0xa68	
private:
	[[maybe_unused]] uint8_t __pad0a6c[0x4]; // 0xa6c
public:
	// MNetworkEnable
	CUtlString m_sAmbientNoise; // 0xa70	
	
	// Datamap fields:
	// Vector spawn_position; // 0x7fffffff
};

