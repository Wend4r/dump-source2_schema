#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x500
// Has VTable
class CCitadelPlayerPawn_GraphController2 : public CAnimGraphControllerBase
{
public:
	CAnimGraph2ParamRef< bool > m_bAiming; // 0x80	
	CAnimGraph2ParamRef< bool > m_bAirDash; // 0x98	
	CAnimGraph2ParamRef< bool > m_bCrouching; // 0xb0	
	CAnimGraph2ParamRef< bool > m_bDashJump; // 0xc8	
	CAnimGraph2ParamRef< bool > m_bInAir; // 0xe0	
	CAnimGraph2ParamRef< bool > m_bKnockedDown; // 0xf8	
	CAnimGraph2ParamRef< bool > m_bParryActive; // 0x110	
	CAnimGraph2ParamRef< bool > m_bParrySuccess; // 0x128	
	CAnimGraph2ParamRef< bool > m_bPredictionError; // 0x140	
	CAnimGraph2ParamRef< bool > m_bPsychicLiftSelf; // 0x158	
	CAnimGraph2ParamRef< bool > m_bQuickReload; // 0x170	
	CAnimGraph2ParamRef< bool > m_bReloading; // 0x188	
	CAnimGraph2ParamRef< bool > m_bSelfCast; // 0x1a0	
	CAnimGraph2ParamRef< bool > m_bShoot; // 0x1b8	
	CAnimGraph2ParamOptionalRef< bool > m_bShootAlt; // 0x1d0	
	CAnimGraph2ParamRef< bool > m_bShooting; // 0x1e8	
	CAnimGraph2ParamRef< bool > m_bSleepSelf; // 0x200	
	CAnimGraph2ParamRef< bool > m_bSlideGetup; // 0x218	
	CAnimGraph2ParamRef< bool > m_bSliding; // 0x230	
	CAnimGraph2ParamRef< bool > m_bStartGroundDash; // 0x248	
	CAnimGraph2ParamRef< bool > m_bZipLining; // 0x260	
	CAnimGraph2ParamOptionalRef< bool > m_bReloadingSingleRoundStart; // 0x278	
	CAnimGraph2ParamOptionalRef< bool > m_bReloadingSingleRound; // 0x290	
	CAnimGraph2ParamRef< float32 > m_flAirDashHeading; // 0x2a8	
	CAnimGraph2ParamRef< float32 > m_flCrouching; // 0x2c0	
	CAnimGraph2ParamRef< float32 > m_flForwardSpeed; // 0x2d8	
	CAnimGraph2ParamRef< float32 > m_flLookHeading; // 0x2f0	
	CAnimGraph2ParamRef< float32 > m_flLookPitch; // 0x308	
	CAnimGraph2ParamRef< float32 > m_flMeleeRandom; // 0x320	
	CAnimGraph2ParamRef< float32 > m_flMoveSpeed; // 0x338	
	CAnimGraph2ParamRef< float32 > m_flReloadFraction; // 0x350	
	CAnimGraph2ParamRef< float32 > m_flReloadTransitionTime; // 0x368	
	CAnimGraph2ParamRef< float32 > m_flStrafeSpeed; // 0x380	
	CAnimGraph2ParamRef< float32 > m_flAmmoFraction; // 0x398	
	CAnimGraph2ParamRef< CGlobalSymbol > m_eDeathSequence; // 0x3b0	
	CAnimGraph2ParamRef< CGlobalSymbol > m_eFlinchType; // 0x3c8	
	CAnimGraph2ParamRef< CGlobalSymbol > m_eFullBodySequence; // 0x3e0	
	CAnimGraph2ParamRef< CGlobalSymbol > m_eGenericCast; // 0x3f8	
	CAnimGraph2ParamRef< CGlobalSymbol > m_eGenericThrow; // 0x410	
	CAnimGraph2ParamRef< CGlobalSymbol > m_eLaunchType; // 0x428	
	CAnimGraph2ParamRef< CGlobalSymbol > m_eMelee; // 0x440	
	CAnimGraph2ParamRef< CGlobalSymbol > m_eMovementType; // 0x458	
	CAnimGraph2ParamRef< CGlobalSymbol > m_eRopeClimb; // 0x470	
	CAnimGraph2ParamRef< CGlobalSymbol > m_eSelectedAbility; // 0x488	
	CAnimGraph2ParamRef< CGlobalSymbol > m_eTurn; // 0x4a0	
	CAnimGraph2ParamRef< CGlobalSymbol > m_eZiplineState; // 0x4b8	
	CAnimGraph2ParamRef< Vector > m_Locomotion_Facing; // 0x4d0	
	CAnimGraph2ParamOptionalRef< Vector > m_Look_Target; // 0x4e8	
	
	// Static fields:
	static uint32_t &Get_s_nControllerTypeID(){return *reinterpret_cast<uint32_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CCitadelPlayerPawn_GraphController2")->m_static_fields[0]->m_instance);};
	static bool &Get_s_bSchemaTest(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CCitadelPlayerPawn_GraphController2")->m_static_fields[1]->m_instance);};
};

