#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x7d8
// Has VTable
class CFuncBrush : public CBaseModelEntity
{
public:
	BrushSolidities_e m_iSolidity; // 0x7b8	
	int32_t m_iDisabled; // 0x7bc	
	bool m_bSolidBsp; // 0x7c0	
private:
	[[maybe_unused]] uint8_t __pad07c1[0x7]; // 0x7c1
public:
	CUtlSymbolLarge m_iszExcludedClass; // 0x7c8	
	bool m_bInvertExclusion; // 0x7d0	
	bool m_bScriptedMovement; // 0x7d1	
	
	// Datamap fields:
	// void InputTurnOn; // 0x0
	// void InputTurnOff; // 0x0
	// void InputToggle; // 0x0
	// CUtlSymbolLarge InputSetExcluded; // 0x0
	// bool InputSetInvert; // 0x0
	// void InputSetSolid; // 0x0
	// void InputSetNonsolid; // 0x0
};

