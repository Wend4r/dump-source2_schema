#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xc18
// Has VTable
// 
// MNetworkVarNames "EHANDLE m_hDummyForCamera"
class CCitadel_Ability_Mirage_Teleport : public CCitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0b00[0x8]; // 0xb00
public:
	// MNetworkEnable
	CHandle< CBaseEntity > m_hDummyForCamera; // 0xb08	
	Vector m_vCastStartPosition; // 0xb0c	
	Vector m_vTargetPosition; // 0xb18	
	QAngle m_vTargetAngles; // 0xb24	
};

