#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 16
// Size: 0xb50
// Has VTable
class CUnitStatusOverlayNew : public CUnitStatusOverlay
{
private:
	[[maybe_unused]] uint8_t __pad0ac0[0x68]; // 0xac0
public:
	float m_flUIScale; // 0xb28	
};

