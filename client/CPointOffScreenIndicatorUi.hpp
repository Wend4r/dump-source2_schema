#pragma once

#include <cstdint>

struct C_PointClientUIWorldPanel;
// Registered binary: client.dll (project 'client')
// Alignment: 16
// Size: 0xad0
// Has VTable
class CPointOffScreenIndicatorUi : public C_PointClientUIWorldPanel
{
public:
	bool m_bBeenEnabled; // 0xac0	
	bool m_bHide; // 0xac1	
private:
	[[maybe_unused]] uint8_t __pad0ac2[0x2]; // 0xac2
public:
	float m_flSeenTargetTime; // 0xac4	
	C_PointClientUIWorldPanel* m_pTargetPanel; // 0xac8	
};

