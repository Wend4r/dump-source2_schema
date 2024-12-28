#pragma once

#include <cstdint>

struct PulseDocNodeID_t;
// Registered binary: pulse_system.dll (project 'pulse_runtime_lib')
// Alignment: 8
// Size: 0x48
// 
// MGetKV3ClassDefaults
class CPulse_Variable
{
public:
	PulseSymbol_t m_Name; // 0x0	
	CUtlString m_Description; // 0x10	
	CPulseValueFullType m_Type; // 0x18	
	KeyValues3 m_DefaultValue; // 0x30	
private:
	[[maybe_unused]] uint8_t __pad0040[0x2]; // 0x40
public:
	bool m_bIsPublic; // 0x42	
	bool m_bIsObservable; // 0x43	
	PulseDocNodeID_t m_nEditorNodeID; // 0x44	
};

