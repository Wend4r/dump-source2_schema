#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xc50
// Has VTable
// 
// MNetworkVarNames "EHANDLE m_hDummyForCamera"
class CCitadel_Ability_Mirage_Teleport : public CCitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0af8[0x8]; // 0xaf8
public:
	// MNetworkEnable
	CHandle< CBaseEntity > m_hDummyForCamera; // 0xb00	
	CHandle< CBaseEntity > m_hTarget; // 0xb04	
	Vector m_vCastStartPosition; // 0xb08	
	Vector m_vTargetPosition; // 0xb14	
	QAngle m_vTargetAngles; // 0xb20	
};

