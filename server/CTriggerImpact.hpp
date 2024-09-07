#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x998
// Has VTable
class CTriggerImpact : public CTriggerMultiple
{
public:
	float m_flMagnitude; // 0x960	
	float m_flNoise; // 0x964	
	float m_flViewkick; // 0x968	
private:
	[[maybe_unused]] uint8_t __pad096c[0x4]; // 0x96c
public:
	CEntityOutputTemplate< Vector > m_pOutputForce; // 0x970	
	
	// Datamap fields:
	// void InputImpact; // 0x0
	// float InputSetMagnitude; // 0x0
	// void CTriggerImpactDisable; // 0x0
};

