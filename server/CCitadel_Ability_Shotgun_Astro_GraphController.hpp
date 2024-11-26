#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1b0
// Has VTable
class CCitadel_Ability_Shotgun_Astro_GraphController : public CCitadel_Ability_PrimaryWeapon_GraphController
{
public:
	CAnimGraphParamOptionalRef< bool > m_bShootForward; // 0x170	
	CAnimGraphParamOptionalRef< bool > m_bShootBackward; // 0x190	
	
	// Static fields:
	static uint32_t &Get_s_nControllerTypeID(){return *reinterpret_cast<uint32_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CCitadel_Ability_Shotgun_Astro_GraphController")->m_static_fields[0]->m_instance);};
	static bool &Get_s_bSchemaTest(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CCitadel_Ability_Shotgun_Astro_GraphController")->m_static_fields[1]->m_instance);};
};

