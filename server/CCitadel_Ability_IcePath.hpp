#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xb98
// Has VTable
// 
// MNetworkVarNames "bool m_bIcePathing"
// MNetworkVarNames "QAngle m_qLastAngles"
// MNetworkVarNames "Vector m_vLastVelocity"
// MNetworkVarNames "bool m_bFirstMovementTick"
class CCitadel_Ability_IcePath : public CCitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0af8[0x70]; // 0xaf8
public:
	Vector m_vInitialPosition; // 0xb68	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	bool m_bIcePathing; // 0xb74	
private:
	[[maybe_unused]] uint8_t __pad0b75[0x3]; // 0xb75
public:
	// MNetworkEnable
	QAngle m_qLastAngles; // 0xb78	
	// MNetworkEnable
	Vector m_vLastVelocity; // 0xb84	
	// MNetworkEnable
	bool m_bFirstMovementTick; // 0xb90	
};

