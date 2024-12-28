#pragma once

#include <cstdint>

// Registered binary: pulse_system.dll (project 'pulse_runtime_lib')
// Alignment: 8
// Size: 0x28
// 
// MGetKV3ClassDefaults
class CPulse_PublicOutput
{
public:
	PulseSymbol_t m_Name; // 0x0	
	CUtlString m_Description; // 0x10	
	CUtlLeanVector< CPulseRuntimeMethodArg > m_Args; // 0x18	
};

