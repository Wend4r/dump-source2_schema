#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x7d0
// Has VTable
class CFuncNavBlocker : public CBaseModelEntity
{
public:
	bool m_bDisabled; // 0x7c0	
private:
	[[maybe_unused]] uint8_t __pad07c1[0x3]; // 0x7c1
public:
	int32_t m_nBlockedTeamNumber; // 0x7c4	
	
	// Datamap fields:
	// void InputBlockNav; // 0x0
	// void InputUnblockNav; // 0x0
};

