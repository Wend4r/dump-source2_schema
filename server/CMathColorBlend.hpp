#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x520
// Has VTable
class CMathColorBlend : public CLogicalEntity
{
public:
	float m_flInMin; // 0x4e8	
	float m_flInMax; // 0x4ec	
	Color m_OutColor1; // 0x4f0	
	Color m_OutColor2; // 0x4f4	
	CEntityOutputTemplate< Color > m_OutValue; // 0x4f8	
	
	// Datamap fields:
	// float InputValue; // 0x0
};

