#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x500
// Has VTable
// 
// MNetworkVarNames "int m_nMode"
// MNetworkVarNames "Vector m_vBoxSize"
// MNetworkVarNames "bool m_bEnabled"
class CInfoVisibilityBox : public CBaseEntity
{
private:
	[[maybe_unused]] uint8_t __pad04e8[0x4]; // 0x4e8
public:
	// MNetworkEnable
	int32_t m_nMode; // 0x4ec	
	// MNetworkEnable
	Vector m_vBoxSize; // 0x4f0	
	// MNetworkEnable
	bool m_bEnabled; // 0x4fc	
	
	// Datamap fields:
	// void InputEnable; // 0x0
	// void InputDisable; // 0x0
};

