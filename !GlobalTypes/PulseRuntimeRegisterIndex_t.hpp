#pragma once

#include <cstdint>

// Registered binary: pulse_system.dll (project 'pulse_runtime_lib')
// Alignment: 8
// Size: 0x2
// Has Trivial Destructor
// 
// MIsBoxedIntegerType
struct PulseRuntimeRegisterIndex_t
{
public:
	int16_t m_Value; // 0x0	
	
	// Static fields:
	static bool &Get_IS_TYPESAFE_INTEGER(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("PulseRuntimeRegisterIndex_t")->m_static_fields[0]->m_instance);};
};

