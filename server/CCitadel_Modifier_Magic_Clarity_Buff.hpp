#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1b8
// Has VTable
class CCitadel_Modifier_Magic_Clarity_Buff : public CCitadelModifier
{
private:
	[[maybe_unused]] uint8_t __pad00c8[0xa8]; // 0xc8
public:
	uint64_t m_iAbilityID; // 0x170	
private:
	[[maybe_unused]] uint8_t __pad0178[0x38]; // 0x178
public:
	bool m_bAbilityLocked; // 0x1b0	
};

