#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xf18
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
	Vector m_vStartPosition; // 0xc98	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	Vector m_vDashDirection; // 0xca4	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	bool m_bIsDashing; // 0xcb0	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	bool m_bStartedInAir; // 0xcb1	
private:
	[[maybe_unused]] uint8_t __pad0cb2[0x6]; // 0xcb2
public:
	CUtlVector< CEntityIndex > m_vecHitEnemies; // 0xcb8	
	Vector m_vecLastPosition; // 0xcd0	
	int32_t m_nReductionsLeft; // 0xcdc	
private:
	[[maybe_unused]] uint8_t __pad0ce0[0x230]; // 0xce0
public:
	GameTime_t m_flStuckTime; // 0xf10	
};

