#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xca0
// Has VTable
class CNPC_Boss_Tier2_GraphController : public CAI_CitadelNPC_GraphController
{
public:
	CAnimGraphParamRef< char* > m_pszActivity; // 0xbb0	
	CAnimGraphParamRef< char* > m_pszStompAttack; // 0xbd8	
	CAnimGraphParamRef< char* > m_pszStaggerDirection; // 0xc00	
	CAnimGraphParamRef< char* > m_pszElectricBeamPosition; // 0xc28	
	CAnimGraphTagRef m_sStaggered; // 0xc50	
	CAnimGraphTagRef m_sStomp; // 0xc68	
private:
	[[maybe_unused]] uint8_t __pad0c80[0x8]; // 0xc80
public:
	CAnimGraphTagRef m_sApplyStompDamage; // 0xc88	
	
	// Static fields:
	static uint32_t &Get_s_nControllerTypeID(){return *reinterpret_cast<uint32_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_Boss_Tier2_GraphController")->m_static_fields[0]->m_instance);};
	static bool &Get_s_bSchemaTest(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_Boss_Tier2_GraphController")->m_static_fields[1]->m_instance);};
};

