#pragma once

#include <cstdint>

struct CEntityIOOutput;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x5c0
// Has VTable
class CBaseFilter : public CLogicalEntity
{
public:
	bool m_bNegated; // 0x568	
private:
	[[maybe_unused]] uint8_t __pad0569[0x7]; // 0x569
public:
	CEntityIOOutput m_OnPass; // 0x570	
	CEntityIOOutput m_OnFail; // 0x598	
	
	// Datamap fields:
	// void InputTestActivator; // 0x0
};

