#pragma once

#include <cstdint>

struct CSkeletonInstance;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x510
// Has VTable
// 
// MNetworkVarNames "CSkeletonInstance m_skeletonInstance"
class CBodyComponentSkeletonInstance : public CBodyComponent
{
private:
	[[maybe_unused]] uint8_t __pad0078[0x8]; // 0x78
public:
	// MNetworkEnable
	CSkeletonInstance m_skeletonInstance; // 0x80	
	
	// Static fields:
	static EntComponentInfo_t &Get_s_EntComponentInfo(){return *reinterpret_cast<EntComponentInfo_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CBodyComponentSkeletonInstance")->m_static_fields[0]->m_instance);};
	static int32_t &Get_entity_component_error_class_decl_says_contained_but_impl_is_referenced(){return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CBodyComponentSkeletonInstance")->m_static_fields[1]->m_instance);};
};

