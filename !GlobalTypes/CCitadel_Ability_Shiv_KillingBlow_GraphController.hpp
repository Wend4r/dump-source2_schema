#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x108
// Has VTable
class CCitadel_Ability_Shiv_KillingBlow_GraphController : public CCitadelBaseAbilityGraphController
{
public:
	CAnimGraphParamRef< bool > m_bSlashLeap; // 0xc8	
	CAnimGraphParamRef< bool > m_bSlashAttack; // 0xe8	
	
	// Static fields:
	static uint32_t &Get_s_nControllerTypeID(){return *reinterpret_cast<uint32_t*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CCitadel_Ability_Shiv_KillingBlow_GraphController")->m_static_fields[0]->m_instance);};
	static bool &Get_s_bSchemaTest(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CCitadel_Ability_Shiv_KillingBlow_GraphController")->m_static_fields[1]->m_instance);};
};

