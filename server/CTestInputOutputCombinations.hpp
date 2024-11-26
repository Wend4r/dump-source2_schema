#pragma once

#include <cstdint>

struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x608
// Has VTable
class CTestInputOutputCombinations : public CLogicalEntity
{
public:
	CEntityIOOutput m_OnVariantVoid; // 0x4e8	
	CEntityIOOutput m_OnVariantBool; // 0x510	
	CEntityIOOutput m_OnVariantInt; // 0x538	
	CEntityIOOutput m_OnVariantFloat; // 0x560	
	CEntityIOOutput m_OnVariantString; // 0x588	
	CEntityIOOutput m_OnVariantColor; // 0x5b0	
	CEntityIOOutput m_OnVariantVector; // 0x5d8	
	bool m_bAllowEmptyInputs; // 0x600	
	
	// Datamap fields:
	// void InputVariantVoid; // 0x0
	// bool InputVariantBool; // 0x0
	// int32_t InputVariantInt; // 0x0
	// float InputVariantFloat; // 0x0
	// CUtlSymbolLarge InputVariantString; // 0x0
	// Color InputVariantColor; // 0x0
	// Vector InputVariantVector; // 0x0
};

