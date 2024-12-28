#pragma once

#include <cstdint>

struct SignatureOutflow_Continue;
struct SignatureOutflow_Resume;
// Registered binary: pulse_system.dll (project 'pulse_runtime_lib')
// Alignment: 8
// Size: 0x160
// Has VTable
// 
// MGetKV3ClassDefaults
// MCellForDomain
// MPulseCellMethodBindings
// MPulseCellOutflowHookInfo
class CPulseCell_Test_MultiOutflow_WithParams_Yielding : public CPulseCell_BaseYieldingInflow
{
public:
	// MPulseCellOutflow_IsDefault
	// MPulseSignatureName
	SignatureOutflow_Continue m_Out1; // 0x48	
	// MPulseSignatureName
	SignatureOutflow_Continue m_AsyncChild1; // 0x80	
	// MPulseSignatureName
	SignatureOutflow_Continue m_AsyncChild2; // 0xb8	
	// MPulseSignatureName
	SignatureOutflow_Resume m_YieldResume1; // 0xf0	
	// MPulseSignatureName
	SignatureOutflow_Resume m_YieldResume2; // 0x128	
};

