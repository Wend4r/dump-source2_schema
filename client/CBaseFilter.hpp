#pragma once

#include <cstdint>

struct CEntityIOOutput;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x5b8
// Has VTable
class CBaseFilter : public CLogicalEntity
{
public:
	bool m_bNegated; // 0x560	
private:
	[[maybe_unused]] uint8_t __pad0561[0x7]; // 0x561
public:
	CEntityIOOutput m_OnPass; // 0x568	
	CEntityIOOutput m_OnFail; // 0x590	
	
	// Datamap fields:
	// void InputTestActivator; // 0x0
};

