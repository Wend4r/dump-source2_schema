#pragma once

#include <cstdint>

struct CCitadelAbilityComponent;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x66d0
// Has VTable
// 
// MNetworkVarNames "CCitadelAbilityComponent::Storage_t m_CCitadelAbilityComponent"
// MNetworkVarNames "bool m_bPickedUp"
class CCitadelItemPickupRejuv : public CCitadelItemPickup
{
public:
	// MNetworkEnable
	// MNetworkUserGroup "CCitadelAbilityComponent"
	// MNetworkAlias "CCitadelAbilityComponent"
	// MNetworkTypeAlias "CCitadelAbilityComponent"
	CCitadelAbilityComponent m_CCitadelAbilityComponent; // 0x64c0	
private:
	[[maybe_unused]] uint8_t __pad66c8[0x4]; // 0x66c8
public:
	// MNetworkEnable
	bool m_bPickedUp; // 0x66cc	
};

