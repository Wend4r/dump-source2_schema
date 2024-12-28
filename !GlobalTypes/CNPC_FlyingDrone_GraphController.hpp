#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xbf0
// Has VTable
class CNPC_FlyingDrone_GraphController : public CAI_CitadelNPC_GraphController
{
public:
	CAnimGraphParamOptionalRef< float32 > m_flPanel1; // 0xb90	
	CAnimGraphParamOptionalRef< bool > m_bUnpackInstant; // 0xbb0	
	CAnimGraphParamOptionalRef< float32 > m_flVelocity; // 0xbd0	
	
	// Static fields:
	static uint32_t &Get_s_nControllerTypeID(){return *reinterpret_cast<uint32_t*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CNPC_FlyingDrone_GraphController")->m_static_fields[0]->m_instance);};
	static bool &Get_s_bSchemaTest(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CNPC_FlyingDrone_GraphController")->m_static_fields[1]->m_instance);};
};

