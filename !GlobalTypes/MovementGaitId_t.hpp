#pragma once

#include <cstdint>

// Registered binary: animationsystem.dll (project 'modellib')
// Alignment: 8
// Size: 0x8
// Has Trivial Destructor
// 
// MGetKV3ClassDefaults
struct MovementGaitId_t
{
public:
	CGlobalSymbol m_sId; // 0x0	
	
	// Static fields:
	static MovementGaitId_t &Get_Invalid(){return *reinterpret_cast<MovementGaitId_t*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("MovementGaitId_t")->m_static_fields[0]->m_instance);};
	static MovementGaitId_t &Get_Slow(){return *reinterpret_cast<MovementGaitId_t*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("MovementGaitId_t")->m_static_fields[1]->m_instance);};
	static MovementGaitId_t &Get_Medium(){return *reinterpret_cast<MovementGaitId_t*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("MovementGaitId_t")->m_static_fields[2]->m_instance);};
	static MovementGaitId_t &Get_Fast(){return *reinterpret_cast<MovementGaitId_t*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("MovementGaitId_t")->m_static_fields[3]->m_instance);};
	static MovementGaitId_t &Get_VeryFast(){return *reinterpret_cast<MovementGaitId_t*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("MovementGaitId_t")->m_static_fields[4]->m_instance);};
};

