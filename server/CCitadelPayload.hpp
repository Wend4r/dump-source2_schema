#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xc20
// Has VTable
// 
// MNetworkVarNames "float m_flProgress"
// MNetworkVarNames "int m_nNumPushers"
class CCitadelPayload : public CCitadelAnimatingModelEntity
{
private:
	[[maybe_unused]] uint8_t __pad0bb8[0x18]; // 0xbb8
public:
	CModifierHandleTyped< CCitadelModifierAura > m_hPusherAura; // 0xbd0	
	CModifierHandleTyped< CCitadelModifierAura > m_hBlockerAura; // 0xbe8	
private:
	[[maybe_unused]] uint8_t __pad0c00[0x18]; // 0xc00
public:
	// MNetworkEnable
	float m_flProgress; // 0xc18	
	// MNetworkEnable
	int32_t m_nNumPushers; // 0xc1c	
};

