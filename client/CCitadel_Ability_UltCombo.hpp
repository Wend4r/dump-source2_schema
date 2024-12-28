#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xd50
// Has VTable
// 
// MNetworkVarNames "int m_iBonusHealth"
// MNetworkVarNames "CHandle< CBaseEntity> m_hTarget"
class CCitadel_Ability_UltCombo : public C_CitadelBaseAbility
{
public:
	GameTime_t m_flLastAttackTime; // 0xc98	
	int32_t m_nAttackNum; // 0xc9c	
private:
	[[maybe_unused]] uint8_t __pad0ca0[0xa8]; // 0xca0
public:
	// MNetworkEnable
	int32_t m_iBonusHealth; // 0xd48	
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hTarget; // 0xd4c	
};

