#pragma once

#include <cstdint>

// Registered binary: pulse_system.dll (project 'pulse_runtime_lib')
// Alignment: 8
// Size: 0x40
// Has Trivial Destructor
// 
// MGetKV3ClassDefaults
class CPulse_OutputConnection
{
public:
	PulseSymbol_t m_SourceOutput; // 0x0	
	PulseSymbol_t m_TargetEntity; // 0x10	
	PulseSymbol_t m_TargetInput; // 0x20	
	PulseSymbol_t m_Param; // 0x30	
};

