#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x7c8
// Has VTable
class CRevertSaved : public CModelPointEntity
{
public:
	float m_loadTime; // 0x7b8	
	float m_Duration; // 0x7bc	
	float m_HoldTime; // 0x7c0	
	
	// Datamap fields:
	// void InputReload; // 0x0
	// void CRevertSavedLoadThink; // 0x0
};

