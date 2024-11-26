#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x118
// Has VTable
class C_PortraitWorldUnit_GraphController : public CBaseAnimGraphAnimGraphController
{
public:
	CAnimGraphParamOptionalRef< char* > m_pszHeroUI; // 0xc8	
	CAnimGraphParamOptionalRef< char* > m_pszShopUI; // 0xf0	
	
	// Static fields:
	static uint32_t &Get_s_nControllerTypeID(){return *reinterpret_cast<uint32_t*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("C_PortraitWorldUnit_GraphController")->m_static_fields[0]->m_instance);};
	static bool &Get_s_bSchemaTest(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("C_PortraitWorldUnit_GraphController")->m_static_fields[1]->m_instance);};
};

