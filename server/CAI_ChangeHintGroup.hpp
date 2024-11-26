#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x508
// Has VTable
class CAI_ChangeHintGroup : public CBaseEntity
{
public:
	int32_t m_iSearchType; // 0x4e8	
private:
	[[maybe_unused]] uint8_t __pad04ec[0x4]; // 0x4ec
public:
	CUtlSymbolLarge m_strSearchName; // 0x4f0	
	CUtlSymbolLarge m_strNewHintGroup; // 0x4f8	
	float m_flRadius; // 0x500	
	
	// Datamap fields:
	// void InputActivate; // 0x0
};

