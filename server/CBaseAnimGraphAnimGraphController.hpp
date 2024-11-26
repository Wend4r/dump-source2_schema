#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xc8
// Has VTable
class CBaseAnimGraphAnimGraphController : public CAnimGraphControllerBase
{
public:
	CAnimGraphParamOptionalRef< char* > m_sDestructiblePartDestroyedHitGroup; // 0x80	
	CAnimGraphParamOptionalRef< int32 > m_nDestructiblePartDestroyedPartIndex; // 0xa8	
	
	// Static fields:
	static uint32_t &Get_s_nControllerTypeID(){return *reinterpret_cast<uint32_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CBaseAnimGraphAnimGraphController")->m_static_fields[0]->m_instance);};
	static bool &Get_s_bSchemaTest(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CBaseAnimGraphAnimGraphController")->m_static_fields[1]->m_instance);};
};

