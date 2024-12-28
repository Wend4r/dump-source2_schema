#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xdf0
// Has VTable
// 
// MNetworkVarNames "EHANDLE m_hDummyForCamera"
class CCitadel_Ability_Mirage_Teleport : public C_CitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0c98[0x8]; // 0xc98
public:
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hDummyForCamera; // 0xca0	
	CHandle< C_BaseEntity > m_hTarget; // 0xca4	
	Vector m_vCastStartPosition; // 0xca8	
	Vector m_vTargetPosition; // 0xcb4	
	QAngle m_vTargetAngles; // 0xcc0	
};

