#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xd28
// Has VTable
// 
// MNetworkVarNames "bool m_bIcePathing"
// MNetworkVarNames "QAngle m_qLastAngles"
// MNetworkVarNames "Vector m_vLastVelocity"
// MNetworkVarNames "bool m_bFirstMovementTick"
class CCitadel_Ability_IcePath : public C_CitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0c98[0x70]; // 0xc98
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	bool m_bIcePathing; // 0xd08	
private:
	[[maybe_unused]] uint8_t __pad0d09[0x3]; // 0xd09
public:
	// MNetworkEnable
	QAngle m_qLastAngles; // 0xd0c	
	// MNetworkEnable
	Vector m_vLastVelocity; // 0xd18	
	// MNetworkEnable
	bool m_bFirstMovementTick; // 0xd24	
};

