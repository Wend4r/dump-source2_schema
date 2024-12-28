#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x810
// Has VTable
class CMarkupVolumeWithRef : public CMarkupVolumeTagged
{
public:
	bool m_bUseRef; // 0x7f8	
private:
	[[maybe_unused]] uint8_t __pad07f9[0x3]; // 0x7f9
public:
	Vector m_vRefPos; // 0x7fc	
	float m_flRefDot; // 0x808	
};

