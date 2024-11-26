#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xc8
// Has VTable
class CCitadel_Modifier_RespawnCredit : public CCitadelModifier
{
public:
	bool m_bActivated; // 0xc0	
	bool m_bSpokeAboutToExpire; // 0xc1	
private:
	[[maybe_unused]] uint8_t __pad00c2[0x2]; // 0xc2
public:
	int32_t m_iMessageCount; // 0xc4	
};

