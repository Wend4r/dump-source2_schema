#pragma once

#include <cstdint>

struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x540
// Has VTable
class CBaseFilter : public CLogicalEntity
{
public:
	bool m_bNegated; // 0x4e8	
private:
	[[maybe_unused]] uint8_t __pad04e9[0x7]; // 0x4e9
public:
	CEntityIOOutput m_OnPass; // 0x4f0	
	CEntityIOOutput m_OnFail; // 0x518	
	
	// Datamap fields:
	// void InputTestActivator; // 0x0
};

