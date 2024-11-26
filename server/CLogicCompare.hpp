#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x590
// Has VTable
class CLogicCompare : public CLogicalEntity
{
public:
	float m_flInValue; // 0x4e8	
	float m_flCompareValue; // 0x4ec	
	CEntityOutputTemplate< float32 > m_OnLessThan; // 0x4f0	
	CEntityOutputTemplate< float32 > m_OnEqualTo; // 0x518	
	CEntityOutputTemplate< float32 > m_OnNotEqualTo; // 0x540	
	CEntityOutputTemplate< float32 > m_OnGreaterThan; // 0x568	
	
	// Datamap fields:
	// float InputSetValue; // 0x0
	// float InputSetValueCompare; // 0x0
	// float InputSetCompareValue; // 0x0
	// void InputCompare; // 0x0
};

