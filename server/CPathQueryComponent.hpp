#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x60
// Has VTable
class CPathQueryComponent : public CEntityComponent
{
private:
	[[maybe_unused]] uint8_t __pad0008[0x10]; // 0x8
public:
	CUtlVector< Vector > m_vecPathSamplePositions; // 0x18	
	CUtlVector< float32 > m_vecPathSampleParameters; // 0x30	
	CUtlVector< float32 > m_vecPathSampleDistances; // 0x48	
	
	// Static fields:
	static EntComponentInfo_t &Get_s_EntComponentInfo(){return *reinterpret_cast<EntComponentInfo_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CPathQueryComponent")->m_static_fields[0]->m_instance);};
	static int32_t &Get_entity_component_error_class_decl_says_referenced_but_impl_is_contained(){return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CPathQueryComponent")->m_static_fields[1]->m_instance);};
};

