#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xd18
// Has VTable
// Is Abstract
// 
// MNetworkVarNames "bool m_bUsingThisMelee"
// MNetworkVarNames "bool m_bUsingMeleeTagActive"
// MNetworkVarNames "bool m_bHitWithThisAttack"
// MNetworkVarNames "GameTime_t m_flLastActivateTime"
// MNetworkVarNames "GameTime_t m_flNextAttackAllowedTime"
// MNetworkVarNames "GameTime_t m_flAttackTriggeredTime"
class CCitadel_Ability_Melee_Base : public C_CitadelBaseAbility
{
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	bool m_bUsingThisMelee; // 0xc98	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	bool m_bUsingMeleeTagActive; // 0xc99	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	bool m_bHitWithThisAttack; // 0xc9a	
private:
	[[maybe_unused]] uint8_t __pad0c9b[0x1]; // 0xc9b
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flLastActivateTime; // 0xc9c	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flNextAttackAllowedTime; // 0xca0	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flAttackTriggeredTime; // 0xca4	
};

