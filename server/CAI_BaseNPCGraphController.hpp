#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xaa8
// Has VTable
class CAI_BaseNPCGraphController : public CBaseAnimGraphAnimGraphController
{
public:
	CAnimGraph1ParamRef< char* > m_sCurrScheduleName; // 0xc8	
	CAnimGraph1ParamRef< char* > m_sCurrTaskName; // 0xe8	
	CAnimGraphParamOptionalRef< char* > m_sTaskHandshakeType; // 0x108	
	CAnimGraph1ParamRef< char* > m_sTaskHandshakeTypeShared; // 0x130	
	CAnimGraph1ParamRef< bool > m_bTaskHandshakeRestart; // 0x150	
	CAnimGraphParamOptionalRef< char* > m_sMovementHandshakeType; // 0x168	
	CAnimGraph1ParamRef< char* > m_sMovementHandshakeTypeShared; // 0x190	
	CAnimGraph1ParamRef< bool > m_bMovementHandshakeRestart; // 0x1b0	
	CAnimGraphParamOptionalRef< char* > m_sNavLinkType; // 0x1c8	
	CAnimGraph1ParamRef< char* > m_sNavLinkTypeShared; // 0x1f0	
	CAnimGraphParamOptionalRef< float32 > m_flPathDistanceToNavLink; // 0x210	
	CAnimGraphParamOptionalRef< bool > m_bNavLinkIsOnPath; // 0x230	
	CAnimGraphParamOptionalRef< Vector > m_vecNavLinkTarget; // 0x250	
	CAnimGraphParamOptionalRef< Vector > m_vecNavLinkUp; // 0x270	
	CAnimGraphParamOptionalRef< Vector > m_vMovementStopFacePosition; // 0x290	
	CAnimGraphParamOptionalRef< Vector > m_vMovementHopFacePosition; // 0x2b0	
	CAnimGraphParamOptionalRef< Vector > m_vMovementStopPosition; // 0x2d0	
	CAnimGraphParamOptionalRef< Vector > m_vMovementStartFacePosition; // 0x2f0	
	CAnimGraphParamOptionalRef< Vector > m_vMovementIdleTurnFacePosition; // 0x310	
	CAnimGraphParamOptionalRef< Vector > m_vMovementPlantedTurnFacePosition; // 0x330	
	CAnimGraphParamOptionalRef< Vector > m_vMovementForwardDirectionOverride; // 0x350	
	CAnimGraphParamOptionalRef< Vector > m_vMovementDirection; // 0x370	
	CAnimGraphParamOptionalRef< bool > m_bMovementCodeDriven; // 0x390	
	CAnimGraphParamOptionalRef< float32 > m_flMovementLean; // 0x3b0	
	CAnimGraphParamOptionalRef< float32 > m_flMovementDesiredHeading; // 0x3d0	
	CAnimGraphParamOptionalRef< float32 > m_flMovementDesiredHeadingDelta; // 0x3f0	
	CAnimGraphParamOptionalRef< float32 > m_flMovementHeading; // 0x410	
	CAnimGraphParamOptionalRef< float32 > m_flMovementTargetSpeed; // 0x430	
	CAnimGraphParamOptionalRef< float32 > m_flMovementCurrentSpeed; // 0x450	
	CAnimGraphParamOptionalRef< char* > m_sMovementHeading; // 0x470	
	CAnimGraphParamOptionalRef< char* > m_sMovementDesiredHeading; // 0x498	
	CAnimGraphParamOptionalRef< char* > m_sMovementStopType; // 0x4c0	
	CAnimGraphParamOptionalRef< char* > m_sMovementState; // 0x4e8	
	CAnimGraphParamOptionalRef< char* > m_sMovementHandshakeState; // 0x510	
	CAnimGraphParamOptionalRef< char* > m_sMovementBadZoneState; // 0x538	
	CAnimGraphTagOptionalRef m_sMovementStopsEnabled; // 0x560	
	CAnimGraphTagOptionalRef m_sMovementInstantStopsEnabled; // 0x578	
	CAnimGraphTagOptionalRef m_sMovementStartsEnabled; // 0x590	
	CAnimGraphTagOptionalRef m_sMovementIdleTurnsEnabled; // 0x5a8	
	CAnimGraphTagOptionalRef m_sMovementHopsEnabled; // 0x5c0	
	CAnimGraphTagOptionalRef m_sMovementPlantedTurnsEnabled; // 0x5d8	
	CAnimGraphTagOptionalRef m_sMovementStrafeSupported; // 0x5f0	
	CAnimGraphTagOptionalRef m_sMovementTransitionBlockAll; // 0x608	
	CAnimGraphTagOptionalRef m_sMovementTransitionBlockIdle; // 0x620	
	CAnimGraphTagOptionalRef m_sMovementTransitionBlockLoop; // 0x638	
	CAnimGraphTagOptionalRef m_sMovementTransitionBlockIdleTurn; // 0x650	
	CAnimGraphTagOptionalRef m_sMovementTransitionBlockStart; // 0x668	
	CAnimGraphTagOptionalRef m_sMovementTransitionBlockStop; // 0x680	
	CAnimGraphTagOptionalRef m_sMovementTransitionBlockHop; // 0x698	
	CAnimGraphTagOptionalRef m_sMovementTransitionBlockPlantedTurn; // 0x6b0	
	CAnimGraphTagOptionalRef m_sMovementRightFootDown; // 0x6c8	
	CAnimGraphTagOptionalRef m_sMovementLeftFootDown; // 0x6e0	
	CAnimGraphTagOptionalRef m_sMovementRightBadZonePassAllowed; // 0x6f8	
	CAnimGraphTagOptionalRef m_sMovementLeftBadZonePassAllowed; // 0x710	
	CAnimGraphParamOptionalRef< float32 > m_flEnemyDistance; // 0x728	
	CAnimGraphParamOptionalRef< float32 > m_flEnemyDirection; // 0x748	
	CAnimGraphParamOptionalRef< bool > m_bCanSeeEnemy; // 0x768	
	CAnimGraphParamOptionalRef< bool > m_bEnemyFacingMe; // 0x788	
	CAnimGraphParamOptionalRef< bool > m_bHitTrigger; // 0x7a8	
	CAnimGraphParamOptionalRef< Vector > m_vecHitDirection; // 0x7c8	
	CAnimGraphParamOptionalRef< float32 > m_flHitHeading; // 0x7e8	
	CAnimGraphParamOptionalRef< Vector > m_vecHitOffset; // 0x808	
	CAnimGraphParamOptionalRef< float32 > m_flHitStrength; // 0x828	
	CAnimGraphParamOptionalRef< char* > m_pszHitDamageType; // 0x848	
	CAnimGraphParamOptionalRef< char* > m_pszDeathHitLocation; // 0x870	
	CAnimGraphParamOptionalRef< int32 > m_nHitBone; // 0x898	
	CAnimGraphParamOptionalRef< char* > m_pszNPCState; // 0x8b8	
	CAnimGraphParamOptionalRef< bool > m_bStunned; // 0x8e0	
	CAnimGraphParamOptionalRef< bool > m_bLookTargetChargedAutoclear; // 0x900	
	CAnimGraphParamOptionalRef< char* > m_sBodyIdle; // 0x920	
	CAnimGraphParamOptionalRef< char* > m_sFlashlightMode; // 0x948	
	CAnimGraphParamOptionalRef< char* > m_sFacingReason; // 0x970	
	CAnimGraphTagOptionalRef m_sFacingModeUsePath; // 0x998	
	CAnimGraphTagOptionalRef m_sAllowMovementOffPath; // 0x9b0	
	CAnimGraphTagOptionalRef m_sKeepPathActiveStop; // 0x9c8	
	CAnimGraphParamOptionalRef< bool > m_bMoveSolveNudgeActive; // 0x9e0	
	CAnimGraphParamOptionalRef< float32 > m_flMoveSolveNudgeYaw; // 0xa00	
	CAnimGraphParamOptionalRef< char* > m_pszDoorOpenAction; // 0xa20	
	CAnimGraphParamOptionalRef< float32 > m_flDistanceToDoor; // 0xa48	
	CAnimGraphParamOptionalRef< bool > m_bDoorLeft; // 0xa68	
	CAnimGraphParamOptionalRef< float32 > m_flBlinkAmount; // 0xa88	
	
	// Static fields:
	static uint32_t &Get_s_nControllerTypeID(){return *reinterpret_cast<uint32_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CAI_BaseNPCGraphController")->m_static_fields[0]->m_instance);};
	static bool &Get_s_bSchemaTest(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CAI_BaseNPCGraphController")->m_static_fields[1]->m_instance);};
};

