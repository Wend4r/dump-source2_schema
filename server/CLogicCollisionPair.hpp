#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x500
// Has VTable
class CLogicCollisionPair : public CLogicalEntity
{
public:
	CUtlSymbolLarge m_nameAttach1; // 0x4e8	
	CUtlSymbolLarge m_nameAttach2; // 0x4f0	
	bool m_supportMultipleEntitiesWithSameName; // 0x4f8	
	bool m_disabled; // 0x4f9	
	bool m_succeeded; // 0x4fa	
	
	// Datamap fields:
	// void InputDisableCollisions; // 0x0
	// CUtlSymbolLarge InputDisableCollisionsWith; // 0x0
	// void InputEnableCollisions; // 0x0
};

