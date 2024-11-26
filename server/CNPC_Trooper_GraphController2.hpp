#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x260
// Has VTable
class CNPC_Trooper_GraphController2 : public CAnimGraphControllerBase
{
public:
	CAnimGraph2ParamOptionalRef< float32 > m_flForwardSpeed; // 0x80	
	CAnimGraph2ParamOptionalRef< float32 > m_flHealth; // 0x98	
	CAnimGraph2ParamOptionalRef< float32 > m_flLookHeading; // 0xb0	
	CAnimGraph2ParamOptionalRef< float32 > m_flLookPitch; // 0xc8	
	CAnimGraph2ParamOptionalRef< float32 > m_flMoveSpeed; // 0xe0	
	CAnimGraph2ParamOptionalRef< float32 > m_flStrafeSpeed; // 0xf8	
	CAnimGraph2ParamOptionalRef< float32 > m_flTimeScale; // 0x110	
	CAnimGraph2ParamOptionalRef< float32 > m_flHitLayerTrigger; // 0x128	
	CAnimGraph2ParamOptionalRef< float32 > m_flNumHitReactLayers; // 0x140	
	CAnimGraph2ParamOptionalRef< float32 > m_flRandomMelee; // 0x158	
	CAnimGraph2ParamOptionalRef< Vector > m_Locomotion_Facing; // 0x170	
	CAnimGraph2ParamOptionalRef< Vector > m_Look_Target; // 0x188	
	CAnimGraph2ParamOptionalRef< bool > m_bFalling; // 0x1a0	
	CAnimGraph2ParamOptionalRef< bool > m_bHasTarget; // 0x1b8	
	CAnimGraph2ParamOptionalRef< bool > m_bInAir; // 0x1d0	
	CAnimGraph2ParamOptionalRef< bool > m_bNearDeath; // 0x1e8	
	CAnimGraph2ParamOptionalRef< bool > m_bShoot; // 0x200	
	CAnimGraph2ParamOptionalRef< bool > m_bZiplining; // 0x218	
	CAnimGraph2ParamOptionalRef< CGlobalSymbol > m_TROOPER_MovementState; // 0x230	
	CAnimGraph2ParamOptionalRef< CGlobalSymbol > m_eTurn; // 0x248	
	
	// Static fields:
	static uint32_t &Get_s_nControllerTypeID(){return *reinterpret_cast<uint32_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_Trooper_GraphController2")->m_static_fields[0]->m_instance);};
	static bool &Get_s_bSchemaTest(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_Trooper_GraphController2")->m_static_fields[1]->m_instance);};
};

