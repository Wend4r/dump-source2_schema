#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x168
// Has VTable
class CNPC_BaseDefenseSentry_GraphController : public CNPC_SimpleAnimatingAI_GraphController
{
public:
	CAnimGraphParamOptionalRef< float32 > m_flPanel1; // 0xe8	
	CAnimGraphParamOptionalRef< bool > m_bUnpackInstant; // 0x108	
	CAnimGraphParamOptionalRef< float32 > m_flVelocity; // 0x128	
	CAnimGraphParamOptionalRef< bool > m_bAlert; // 0x148	
	
	// Static fields:
	static uint32_t &Get_s_nControllerTypeID(){return *reinterpret_cast<uint32_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_BaseDefenseSentry_GraphController")->m_static_fields[0]->m_instance);};
	static bool &Get_s_bSchemaTest(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_BaseDefenseSentry_GraphController")->m_static_fields[1]->m_instance);};
};

