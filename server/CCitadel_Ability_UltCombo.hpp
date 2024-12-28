#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xbc8
// Has VTable
// 
// MNetworkVarNames "int m_iBonusHealth"
// MNetworkVarNames "CHandle< CBaseEntity> m_hTarget"
class CCitadel_Ability_UltCombo : public CCitadelBaseAbility
{
public:
	CModifierHandleTyped< CCitadelModifier > m_hTargetComboModifier; // 0xaf8	
	GameTime_t m_flLastAttackTime; // 0xb10	
	int32_t m_nAttackNum; // 0xb14	
private:
	[[maybe_unused]] uint8_t __pad0b18[0xa8]; // 0xb18
public:
	// MNetworkEnable
	int32_t m_iBonusHealth; // 0xbc0	
	// MNetworkEnable
	CHandle< CBaseEntity > m_hTarget; // 0xbc4	
};

