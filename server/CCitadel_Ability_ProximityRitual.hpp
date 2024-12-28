#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xcb0
// Has VTable
// 
// MNetworkVarNames "ECatStatueState_t m_eState"
// MNetworkVarNames "EHANDLE m_hStatue"
class CCitadel_Ability_ProximityRitual : public CCitadelBaseAbility
{
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	ECatStatueState_t m_eState; // 0xaf8	
private:
	[[maybe_unused]] uint8_t __pad0af9[0x3]; // 0xaf9
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	CHandle< CBaseEntity > m_hStatue; // 0xafc	
	GameTime_t m_tCatRecallTime; // 0xb00	
	int32_t m_iCatRecallHealth; // 0xb04	
	Vector m_vLaunchPosition; // 0xb08	
	QAngle m_qLaunchAngle; // 0xb14	
};

