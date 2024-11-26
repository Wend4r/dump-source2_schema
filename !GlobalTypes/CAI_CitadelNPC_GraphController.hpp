#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xbb0
// Has VTable
class CAI_CitadelNPC_GraphController : public CAI_BaseNPCGraphController
{
public:
	CAnimGraph1ParamOptionalRef< int32 > m_nHitLayerTrigger; // 0xaa8	
	CAnimGraphParamOptionalRef< char* > m_pszDamageState; // 0xac0	
	CAnimGraphParamOptionalRef< float32 > m_flHealth; // 0xae8	
	CAnimGraph1ParamOptionalRef< float32 > m_flTimeScale; // 0xb08	
	CAnimGraphParamOptionalRef< bool > m_bBeam; // 0xb20	
	CAnimGraphParamOptionalRef< bool > m_bCrouching; // 0xb40	
	CAnimGraph1ParamOptionalRef< bool > m_bInAir; // 0xb60	
	CAnimGraph1ParamOptionalRef< bool > m_bHasTarget; // 0xb78	
	CAnimGraphParamOptionalRef< bool > m_bReloading; // 0xb90	
	
	// Static fields:
	static uint32_t &Get_s_nControllerTypeID(){return *reinterpret_cast<uint32_t*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CAI_CitadelNPC_GraphController")->m_static_fields[0]->m_instance);};
	static bool &Get_s_bSchemaTest(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CAI_CitadelNPC_GraphController")->m_static_fields[1]->m_instance);};
};

