#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x2d0
// Has VTable
class CCitadelPlayerPawn_GraphController : public CBaseAnimGraphAnimGraphController
{
public:
	CAnimGraph1ParamRef< char* > m_pszSprintState; // 0xc8	
	CAnimGraph1ParamRef< char* > m_pszFullBodySequence; // 0xe8	
	CAnimGraph1ParamRef< char* > m_pszFlinchType; // 0x108	
	CAnimGraph1ParamRef< bool > m_bShootLean; // 0x128	
	CAnimGraph1ParamRef< float32 > m_flReloadFraction; // 0x140	
	CAnimGraph1ParamRef< bool > m_bMovementInputActive; // 0x158	
	CAnimGraph1ParamRef< bool > m_bLowHealth; // 0x170	
	CAnimGraph1ParamRef< float32 > m_flTimeScale; // 0x188	
	CAnimGraph1ParamRef< bool > m_bCrouching; // 0x1a0	
	CAnimGraph1ParamRef< bool > m_bInAir; // 0x1b8	
	CAnimGraph1ParamRef< bool > m_bShopOpen; // 0x1d0	
	CAnimGraph1ParamRef< bool > m_bRespawn; // 0x1e8	
	CAnimGraphTagRef m_sAnimClippedMovement; // 0x200	
	CAnimGraphTagRef m_sDisableGravity; // 0x218	
	CAnimGraphTagRef m_sDirectAirControl; // 0x230	
	CAnimGraph1ParamOptionalRef< char* > m_pszMaxSpeedState; // 0x248	
	CAnimGraph1ParamOptionalRef< char* > m_pszDeathSequence; // 0x268	
	CAnimGraph1ParamOptionalRef< bool > m_bHardLanding; // 0x288	
	CAnimGraph1ParamOptionalRef< float32 > m_flUltCooldownProgress; // 0x2a0	
	CAnimGraph1ParamOptionalRef< bool > m_bSpawn; // 0x2b8	
	
	// Static fields:
	static uint32_t &Get_s_nControllerTypeID(){return *reinterpret_cast<uint32_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CCitadelPlayerPawn_GraphController")->m_static_fields[0]->m_instance);};
	static bool &Get_s_bSchemaTest(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CCitadelPlayerPawn_GraphController")->m_static_fields[1]->m_instance);};
};

