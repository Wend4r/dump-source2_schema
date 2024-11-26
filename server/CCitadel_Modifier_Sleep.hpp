#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xe8
// Has VTable
class CCitadel_Modifier_Sleep : public CCitadelModifier
{
public:
	CUtlVector< CModifierHandleTyped< CCitadelModifier > > m_vecSleepModifiers; // 0xc0	
	bool m_bIsWakingUp; // 0xd8	
private:
	[[maybe_unused]] uint8_t __pad00d9[0x3]; // 0xd9
public:
	float m_flMinSleepTime; // 0xdc	
	float m_flWakeUpDelay; // 0xe0	
};

