#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xc40
// Has VTable
class CNPC_TrooperNeutral_GraphController : public CAI_CitadelNPC_GraphController
{
public:
	CAnimGraphParamOptionalRef< bool > m_bShielded; // 0xb90	
	CAnimGraphParamOptionalRef< bool > m_bAlert; // 0xbb0	
	CAnimGraphParamOptionalRef< char* > m_pszAttackLeanPosition; // 0xbd0	
	CAnimGraphParamOptionalRef< char* > m_pszOrbDrop; // 0xbf8	
	CAnimGraphParamOptionalRef< bool > m_bHeavyMelee; // 0xc20	
	
	// Static fields:
	static uint32_t &Get_s_nControllerTypeID(){return *reinterpret_cast<uint32_t*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CNPC_TrooperNeutral_GraphController")->m_static_fields[0]->m_instance);};
	static bool &Get_s_bSchemaTest(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CNPC_TrooperNeutral_GraphController")->m_static_fields[1]->m_instance);};
};

