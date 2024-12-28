#pragma once

#include <cstdint>

// Registered binary: pulse_system.dll (project 'pulse_runtime_lib')
// Alignment: 8
// Size: 0x128
// Has VTable
// 
// MPulseInstanceDomainInfo
// MPulseDomainHookInfo
// MPulseLibraryBindings
// MPulseDomainOptInFeatureTag
class CPulseGraphInstance_TestDomain : public CBasePulseGraphInstance
{
public:
	bool m_bIsRunningUnitTests; // 0xf8	
	bool m_bExplicitTimeStepping; // 0xf9	
	bool m_bExpectingToDestroyWithYieldedCursors; // 0xfa	
	bool m_bQuietTracepoints; // 0xfb	
	bool m_bExpectingCursorTerminatedDueToMaxInstructions; // 0xfc	
private:
	[[maybe_unused]] uint8_t __pad00fd[0x3]; // 0xfd
public:
	int32_t m_nCursorsTerminatedDueToMaxInstructions; // 0x100	
	int32_t m_nNextValidateIndex; // 0x104	
	CUtlVector< CUtlString > m_Tracepoints; // 0x108	
	bool m_bTestYesOrNoPath; // 0x120	
	
	// Static fields:
	static double &Get_s_flExplicitCurTime(){return *reinterpret_cast<double*>(interfaces::g_schema->FindTypeScopeForModule("pulse_system.dll")->FindDeclaredClass("CPulseGraphInstance_TestDomain")->m_static_fields[0]->m_instance);};
};

