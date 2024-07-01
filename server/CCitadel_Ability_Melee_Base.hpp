#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xb30
// Has VTable
// Is Abstract
// 
// MNetworkVarNames "bool m_bUsingThisMelee"
// MNetworkVarNames "bool m_bUsingMeleeTagActive"
// MNetworkVarNames "bool m_bHitWithThisAttack"
// MNetworkVarNames "GameTime_t m_flLastActivateTime"
// MNetworkVarNames "GameTime_t m_flNextAttackAllowedTime"
// MNetworkVarNames "GameTime_t m_flAttackTriggeredTime"
class CCitadel_Ability_Melee_Base : public CCitadelBaseAbility
{
public:
	int32_t m_nHitNumber; // 0xaa8	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	bool m_bUsingThisMelee; // 0xaac	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	bool m_bUsingMeleeTagActive; // 0xaad	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	bool m_bHitWithThisAttack; // 0xaae	
private:
	[[maybe_unused]] uint8_t __pad0aaf[0x1]; // 0xaaf
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	GameTime_t m_flLastActivateTime; // 0xab0	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	GameTime_t m_flNextAttackAllowedTime; // 0xab4	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	GameTime_t m_flAttackTriggeredTime; // 0xab8	
};

