#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xbf8
// Has VTable
class CNPC_Trooper_GraphController : public CAI_CitadelNPC_GraphController
{
public:
	CAnimGraphTagRef m_sUsingMelee; // 0xbb0	
	CAnimGraph1ParamOptionalRef< bool > m_b_Falling; // 0xbc8	
	CAnimGraph1ParamOptionalRef< bool > m_b_Ziplining; // 0xbe0	
	
	// Static fields:
	static uint32_t &Get_s_nControllerTypeID(){return *reinterpret_cast<uint32_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_Trooper_GraphController")->m_static_fields[0]->m_instance);};
	static bool &Get_s_bSchemaTest(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_Trooper_GraphController")->m_static_fields[1]->m_instance);};
};

