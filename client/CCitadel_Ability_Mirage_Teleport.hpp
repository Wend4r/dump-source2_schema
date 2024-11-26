#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xdb8
// Has VTable
// 
// MNetworkVarNames "EHANDLE m_hDummyForCamera"
class CCitadel_Ability_Mirage_Teleport : public C_CitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0ca0[0x8]; // 0xca0
public:
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hDummyForCamera; // 0xca8	
	Vector m_vCastStartPosition; // 0xcac	
	Vector m_vTargetPosition; // 0xcb8	
	QAngle m_vTargetAngles; // 0xcc4	
};

