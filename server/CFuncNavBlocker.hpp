#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x7c8
// Has VTable
class CFuncNavBlocker : public CBaseModelEntity
{
public:
	bool m_bDisabled; // 0x7b8	
private:
	[[maybe_unused]] uint8_t __pad07b9[0x3]; // 0x7b9
public:
	int32_t m_nBlockedTeamNumber; // 0x7bc	
	
	// Datamap fields:
	// void InputBlockNav; // 0x0
	// void InputUnblockNav; // 0x0
};

