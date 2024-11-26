#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x200
// Has VTable
class CCitadel_Modifier_Nikuman : public CCitadelModifierAura
{
private:
	[[maybe_unused]] uint8_t __pad00e0[0x118]; // 0xe0
public:
	int32_t m_nTotalSelfHeal; // 0x1f8	
	int32_t m_nTotalTeammateHeal; // 0x1fc	
};

