#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xc28
// Has VTable
// 
// MNetworkVarNames "float m_flProgress"
// MNetworkVarNames "int m_nNumPushers"
class CCitadelPayload : public CCitadelAnimatingModelEntity
{
private:
	[[maybe_unused]] uint8_t __pad0bc0[0x18]; // 0xbc0
public:
	CModifierHandleTyped< CCitadelModifierAura > m_hPusherAura; // 0xbd8	
	CModifierHandleTyped< CCitadelModifierAura > m_hBlockerAura; // 0xbf0	
private:
	[[maybe_unused]] uint8_t __pad0c08[0x18]; // 0xc08
public:
	// MNetworkEnable
	float m_flProgress; // 0xc20	
	// MNetworkEnable
	int32_t m_nNumPushers; // 0xc24	
};

