#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xe8
// Has VTable
class CCitadel_Ability_Spinning_Blade_GraphController : public CCitadelBaseAbilityGraphController
{
public:
	CAnimGraphParamOptionalRef< bool > m_bBoomerangCatch; // 0xc8	
	
	// Static fields:
	static uint32_t &Get_s_nControllerTypeID(){return *reinterpret_cast<uint32_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CCitadel_Ability_Spinning_Blade_GraphController")->m_static_fields[0]->m_instance);};
	static bool &Get_s_bSchemaTest(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CCitadel_Ability_Spinning_Blade_GraphController")->m_static_fields[1]->m_instance);};
};

