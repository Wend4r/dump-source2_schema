#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xc80
// Has VTable
class CNPC_Boss_Tier2_GraphController : public CAI_CitadelNPC_GraphController
{
public:
	CAnimGraphParamRef< char* > m_pszActivity; // 0xb90	
	CAnimGraphParamRef< char* > m_pszStompAttack; // 0xbb8	
	CAnimGraphParamRef< char* > m_pszStaggerDirection; // 0xbe0	
	CAnimGraphParamRef< char* > m_pszElectricBeamPosition; // 0xc08	
	CAnimGraphTagRef m_sStaggered; // 0xc30	
	CAnimGraphTagRef m_sStomp; // 0xc48	
private:
	[[maybe_unused]] uint8_t __pad0c60[0x8]; // 0xc60
public:
	CAnimGraphTagRef m_sApplyStompDamage; // 0xc68	
	
	// Static fields:
	static uint32_t &Get_s_nControllerTypeID(){return *reinterpret_cast<uint32_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_Boss_Tier2_GraphController")->m_static_fields[0]->m_instance);};
	static bool &Get_s_bSchemaTest(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_Boss_Tier2_GraphController")->m_static_fields[1]->m_instance);};
};

