#pragma once

#include <cstdint>

struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x578
// Has VTable
class CLogicDistanceCheck : public CLogicalEntity
{
public:
	CUtlSymbolLarge m_iszEntityA; // 0x4e8	
	CUtlSymbolLarge m_iszEntityB; // 0x4f0	
	float m_flZone1Distance; // 0x4f8	
	float m_flZone2Distance; // 0x4fc	
	CEntityIOOutput m_InZone1; // 0x500	
	CEntityIOOutput m_InZone2; // 0x528	
	CEntityIOOutput m_InZone3; // 0x550	
	
	// Datamap fields:
	// void InputCheckDistance; // 0x0
};

