#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xd48
// Has VTable
// 
// MNetworkVarNames "float m_flTotalPendingDamage"
class CCitadel_Ability_Shiv_Defer_Damage : public CCitadelBaseShivAbility
{
private:
	[[maybe_unused]] uint8_t __pad0c60[0xe0]; // 0xc60
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	float m_flTotalPendingDamage; // 0xd40	
};
