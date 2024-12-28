#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x578
// Has VTable
// 
// MNetworkVarNames "int m_nMode"
// MNetworkVarNames "Vector m_vBoxSize"
// MNetworkVarNames "bool m_bEnabled"
class C_InfoVisibilityBox : public C_BaseEntity
{
private:
	[[maybe_unused]] uint8_t __pad0560[0x4]; // 0x560
public:
	// MNetworkEnable
	int32_t m_nMode; // 0x564	
	// MNetworkEnable
	Vector m_vBoxSize; // 0x568	
	// MNetworkEnable
	bool m_bEnabled; // 0x574	
	
	// Datamap fields:
	// void InputEnable; // 0x0
	// void InputDisable; // 0x0
};

