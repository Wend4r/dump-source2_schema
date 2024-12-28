#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x4e8
// Has VTable
class CLogicRelay : public CLogicalEntity
{
public:
	bool m_bDisabled; // 0x4e0	
	bool m_bWaitForRefire; // 0x4e1	
	bool m_bTriggerOnce; // 0x4e2	
	bool m_bFastRetrigger; // 0x4e3	
	bool m_bPassthoughCaller; // 0x4e4	
};

