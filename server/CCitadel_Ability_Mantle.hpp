#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xb70
// Has VTable
// 
// MNetworkVarNames "float m_flVertOffset"
// MNetworkVarNames "float m_flHorizGap"
// MNetworkVarNames "Vector m_vStartPos"
// MNetworkVarNames "Vector m_vTargetPos"
// MNetworkVarNames "QAngle m_angFacing"
// MNetworkVarNames "int m_nMantleTypeIndex"
// MNetworkVarNames "GameTime_t m_flStartTime"
class CCitadel_Ability_Mantle : public CCitadelBaseAbility
{
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	float m_flVertOffset; // 0xaf8	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	float m_flHorizGap; // 0xafc	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	Vector m_vStartPos; // 0xb00	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	Vector m_vTargetPos; // 0xb0c	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	QAngle m_angFacing; // 0xb18	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	int32_t m_nMantleTypeIndex; // 0xb24	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flStartTime; // 0xb28	
};

