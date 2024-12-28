#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xb90
// Has VTable
class CAI_CitadelNPC_GraphController : public CAI_BaseNPCGraphController
{
public:
	CAnimGraph1ParamOptionalRef< int32 > m_nHitLayerTrigger; // 0xa88	
	CAnimGraphParamOptionalRef< char* > m_pszDamageState; // 0xaa0	
	CAnimGraphParamOptionalRef< float32 > m_flHealth; // 0xac8	
	CAnimGraph1ParamOptionalRef< float32 > m_flTimeScale; // 0xae8	
	CAnimGraphParamOptionalRef< bool > m_bBeam; // 0xb00	
	CAnimGraphParamOptionalRef< bool > m_bCrouching; // 0xb20	
	CAnimGraph1ParamOptionalRef< bool > m_bInAir; // 0xb40	
	CAnimGraph1ParamOptionalRef< bool > m_bHasTarget; // 0xb58	
	CAnimGraphParamOptionalRef< bool > m_bReloading; // 0xb70	
	
	// Static fields:
	static uint32_t &Get_s_nControllerTypeID(){return *reinterpret_cast<uint32_t*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CAI_CitadelNPC_GraphController")->m_static_fields[0]->m_instance);};
	static bool &Get_s_bSchemaTest(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CAI_CitadelNPC_GraphController")->m_static_fields[1]->m_instance);};
};

