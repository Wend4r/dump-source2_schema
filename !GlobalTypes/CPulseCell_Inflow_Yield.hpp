#pragma once

#include <cstdint>

struct CPulse_ResumePoint;
// Registered binary: pulse_system.dll (project 'pulse_runtime_lib')
// Alignment: 8
// Size: 0x80
// Has VTable
// 
// MGetKV3ClassDefaults
// MCellForDomain
// MPulseCellMethodBindings
// MPulseCellOutflowHookInfo
// MPulseCellWithCustomDocNode
class CPulseCell_Inflow_Yield : public CPulseCell_BaseYieldingInflow
{
public:
	CPulse_ResumePoint m_UnyieldResume; // 0x48	
};

