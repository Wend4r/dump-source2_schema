#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xd98
// Has VTable
// 
// MNetworkVarNames "Vector m_vStartPosition"
// MNetworkVarNames "Vector m_vDashDirection"
// MNetworkVarNames "bool m_bIsDashing"
// MNetworkVarNames "bool m_bStartedInAir"
class CCitadel_Ability_ShivDash : public CCitadelBaseShivAbility
{
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	Vector m_vStartPosition; // 0xaf8	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	Vector m_vDashDirection; // 0xb04	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	bool m_bIsDashing; // 0xb10	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	bool m_bStartedInAir; // 0xb11	
private:
	[[maybe_unused]] uint8_t __pad0b12[0x6]; // 0xb12
public:
	CUtlVector< CEntityIndex > m_vecHitEnemies; // 0xb18	
	Vector m_vecLastPosition; // 0xb30	
	int32_t m_nReductionsLeft; // 0xb3c	
private:
	[[maybe_unused]] uint8_t __pad0b40[0x230]; // 0xb40
public:
	GameTime_t m_flStuckTime; // 0xd70	
	CHandle< CPointModifierThinker > m_hEchoThinker; // 0xd74	
	GameTime_t m_EchoStartTime; // 0xd78	
	bool m_bLetEchoPlay; // 0xd7c	
};

