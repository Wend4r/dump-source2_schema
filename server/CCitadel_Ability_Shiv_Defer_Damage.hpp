#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xc00
// Has VTable
// 
// MNetworkVarNames "float m_flTotalPendingDamage"
class CCitadel_Ability_Shiv_Defer_Damage : public CCitadelBaseShivAbility
{
private:
	[[maybe_unused]] uint8_t __pad0af8[0xe0]; // 0xaf8
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	float m_flTotalPendingDamage; // 0xbd8	
private:
	[[maybe_unused]] uint8_t __pad0bdc[0x1c]; // 0xbdc
public:
	GameTime_t m_flLastDeferredDamageApplicationTime; // 0xbf8	
};

