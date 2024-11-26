#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 16
// Size: 0xb20
// Has VTable
class CUnitStatusOverlayOld : public CUnitStatusOverlay
{
private:
	[[maybe_unused]] uint8_t __pad0ac0[0x40]; // 0xac0
public:
	float m_flUIScale; // 0xb00	
};

