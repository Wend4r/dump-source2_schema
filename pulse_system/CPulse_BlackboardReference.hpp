#pragma once

#include <cstdint>

struct PulseDocNodeID_t;
// Registered binary: pulse_system.dll (project 'pulse_runtime_lib')
// Alignment: 8
// Size: 0x100
// 
// MGetKV3ClassDefaults
class CPulse_BlackboardReference
{
public:
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIPulseGraphDef > > m_hBlackboardResource; // 0x0	
	PulseSymbol_t m_BlackboardResource; // 0xe0	
	PulseDocNodeID_t m_nNodeID; // 0xf0	
private:
	[[maybe_unused]] uint8_t __pad00f4[0x4]; // 0xf4
public:
	CGlobalSymbol m_NodeName; // 0xf8	
};

