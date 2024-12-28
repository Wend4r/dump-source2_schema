#pragma once

#include <cstdint>

// Registered binary: pulse_system.dll (project 'pulse_runtime_lib')
// Alignment: 8
// Size: 0xb8
// Has VTable
// 
// MGetKV3ClassDefaults
// MCellForDomain
// MPulseCellMethodBindings
// MPulseCellOutflowHookInfo
// MPulseCellWithCustomDocNode
class CPulseCell_Inflow_EntOutputHandler : public CPulseCell_Inflow_BaseEntrypoint
{
public:
	PulseSymbol_t m_SourceEntity; // 0x70	
	PulseSymbol_t m_SourceOutput; // 0x80	
	PulseSymbol_t m_TargetInput; // 0x90	
	CPulseValueFullType m_ExpectedParamType; // 0xa0	
};

