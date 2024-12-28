#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x9d8
// Has VTable
class CTriggerImpact : public CTriggerMultiple
{
public:
	float m_flMagnitude; // 0x9a0	
	float m_flNoise; // 0x9a4	
	float m_flViewkick; // 0x9a8	
private:
	[[maybe_unused]] uint8_t __pad09ac[0x4]; // 0x9ac
public:
	CEntityOutputTemplate< Vector > m_pOutputForce; // 0x9b0	
	
	// Datamap fields:
	// void InputImpact; // 0x0
	// float InputSetMagnitude; // 0x0
	// void CTriggerImpactDisable; // 0x0
};

