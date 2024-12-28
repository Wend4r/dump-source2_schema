#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x568
// Has VTable
class CLogicRelay : public CLogicalEntity
{
public:
	bool m_bDisabled; // 0x560	
	bool m_bWaitForRefire; // 0x561	
	bool m_bTriggerOnce; // 0x562	
	bool m_bFastRetrigger; // 0x563	
	bool m_bPassthoughCaller; // 0x564	
};

