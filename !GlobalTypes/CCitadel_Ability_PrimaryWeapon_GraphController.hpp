#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x170
// Has VTable
class CCitadel_Ability_PrimaryWeapon_GraphController : public CCitadelBaseAbilityGraphController
{
public:
	CAnimGraph1ParamOptionalRef< bool > m_bAiming; // 0xc8	
	CAnimGraph1ParamOptionalRef< float32 > m_flReloadSpeed; // 0xe0	
	CAnimGraph1ParamOptionalRef< bool > m_bReloadingSingleRoundStart; // 0xf8	
	CAnimGraph1ParamOptionalRef< bool > m_bReloadingSingleRound; // 0x110	
	CAnimGraph1ParamOptionalRef< bool > m_bReloading; // 0x128	
	CAnimGraph1ParamOptionalRef< bool > m_bShootAlt; // 0x140	
	CAnimGraph1ParamOptionalRef< bool > m_bShoot; // 0x158	
	
	// Static fields:
	static uint32_t &Get_s_nControllerTypeID(){return *reinterpret_cast<uint32_t*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CCitadel_Ability_PrimaryWeapon_GraphController")->m_static_fields[0]->m_instance);};
	static bool &Get_s_bSchemaTest(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CCitadel_Ability_PrimaryWeapon_GraphController")->m_static_fields[1]->m_instance);};
};

