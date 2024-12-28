#pragma once

#include <cstdint>

struct CCitadelMinimapComponent;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xa78
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
	CCitadelMinimapComponent m_CCitadelMinimapComponent; // 0xa38	
	// MNetworkEnable
	bool m_bActive; // 0xa50	
private:
	[[maybe_unused]] uint8_t __pad0a51[0x7]; // 0xa51
public:
	// MNetworkEnable
	CUtlString m_sPickupName; // 0xa58	
	// MNetworkEnable
	int32_t m_nNameOffset; // 0xa60	
private:
	[[maybe_unused]] uint8_t __pad0a64[0x4]; // 0xa64
public:
	// MNetworkEnable
	CUtlString m_sAmbientNoise; // 0xa68	
	
	// Datamap fields:
	// Vector spawn_position; // 0x7fffffff
};

