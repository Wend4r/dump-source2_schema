#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x130
// Has VTable
class CCitadel_Ability_Jump_GraphController : public CCitadelBaseAbilityGraphController
{
public:
	CAnimGraphParamOptionalRef< bool > m_bDashJump; // 0xc8	
	CAnimGraphParamOptionalRef< bool > m_bJump; // 0xe8	
	CAnimGraphParamOptionalRef< char* > m_pszLaunchType; // 0x108	
	
	// Static fields:
	static uint32_t &Get_s_nControllerTypeID(){return *reinterpret_cast<uint32_t*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CCitadel_Ability_Jump_GraphController")->m_static_fields[0]->m_instance);};
	static bool &Get_s_bSchemaTest(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CCitadel_Ability_Jump_GraphController")->m_static_fields[1]->m_instance);};
};

