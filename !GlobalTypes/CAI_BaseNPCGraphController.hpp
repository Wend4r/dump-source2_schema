#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xa88
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
	CAnimGraphParamOptionalRef< Vector > m_vMovementDirection; // 0x350	
	CAnimGraphParamOptionalRef< bool > m_bMovementCodeDriven; // 0x370	
	CAnimGraphParamOptionalRef< float32 > m_flMovementLean; // 0x390	
	CAnimGraphParamOptionalRef< float32 > m_flMovementDesiredHeading; // 0x3b0	
	CAnimGraphParamOptionalRef< float32 > m_flMovementDesiredHeadingDelta; // 0x3d0	
	CAnimGraphParamOptionalRef< float32 > m_flMovementHeading; // 0x3f0	
	CAnimGraphParamOptionalRef< float32 > m_flMovementTargetSpeed; // 0x410	
	CAnimGraphParamOptionalRef< float32 > m_flMovementCurrentSpeed; // 0x430	
	CAnimGraphParamOptionalRef< char* > m_sMovementHeading; // 0x450	
	CAnimGraphParamOptionalRef< char* > m_sMovementDesiredHeading; // 0x478	
	CAnimGraphParamOptionalRef< char* > m_sMovementStopType; // 0x4a0	
	CAnimGraphParamOptionalRef< char* > m_sMovementState; // 0x4c8	
	CAnimGraphParamOptionalRef< char* > m_sMovementHandshakeState; // 0x4f0	
	CAnimGraphParamOptionalRef< char* > m_sMovementBadZoneState; // 0x518	
	CAnimGraphTagOptionalRef m_sMovementStopsEnabled; // 0x540	
	CAnimGraphTagOptionalRef m_sMovementInstantStopsEnabled; // 0x558	
	CAnimGraphTagOptionalRef m_sMovementStartsEnabled; // 0x570	
	CAnimGraphTagOptionalRef m_sMovementIdleTurnsEnabled; // 0x588	
	CAnimGraphTagOptionalRef m_sMovementHopsEnabled; // 0x5a0	
	CAnimGraphTagOptionalRef m_sMovementPlantedTurnsEnabled; // 0x5b8	
	CAnimGraphTagOptionalRef m_sMovementStrafeSupported; // 0x5d0	
	CAnimGraphTagOptionalRef m_sMovementTransitionBlockAll; // 0x5e8	
	CAnimGraphTagOptionalRef m_sMovementTransitionBlockIdle; // 0x600	
	CAnimGraphTagOptionalRef m_sMovementTransitionBlockLoop; // 0x618	
	CAnimGraphTagOptionalRef m_sMovementTransitionBlockIdleTurn; // 0x630	
	CAnimGraphTagOptionalRef m_sMovementTransitionBlockStart; // 0x648	
	CAnimGraphTagOptionalRef m_sMovementTransitionBlockStop; // 0x660	
	CAnimGraphTagOptionalRef m_sMovementTransitionBlockHop; // 0x678	
	CAnimGraphTagOptionalRef m_sMovementTransitionBlockPlantedTurn; // 0x690	
	CAnimGraphTagOptionalRef m_sMovementRightFootDown; // 0x6a8	
	CAnimGraphTagOptionalRef m_sMovementLeftFootDown; // 0x6c0	
	CAnimGraphTagOptionalRef m_sMovementRightBadZonePassAllowed; // 0x6d8	
	CAnimGraphTagOptionalRef m_sMovementLeftBadZonePassAllowed; // 0x6f0	
	CAnimGraphParamOptionalRef< float32 > m_flEnemyDistance; // 0x708	
	CAnimGraphParamOptionalRef< float32 > m_flEnemyDirection; // 0x728	
	CAnimGraphParamOptionalRef< bool > m_bCanSeeEnemy; // 0x748	
	CAnimGraphParamOptionalRef< bool > m_bEnemyFacingMe; // 0x768	
	CAnimGraphParamOptionalRef< bool > m_bHitTrigger; // 0x788	
	CAnimGraphParamOptionalRef< Vector > m_vecHitDirection; // 0x7a8	
	CAnimGraphParamOptionalRef< float32 > m_flHitHeading; // 0x7c8	
	CAnimGraphParamOptionalRef< Vector > m_vecHitOffset; // 0x7e8	
	CAnimGraphParamOptionalRef< float32 > m_flHitStrength; // 0x808	
	CAnimGraphParamOptionalRef< char* > m_pszHitDamageType; // 0x828	
	CAnimGraphParamOptionalRef< char* > m_pszDeathHitLocation; // 0x850	
	CAnimGraphParamOptionalRef< int32 > m_nHitBone; // 0x878	
	CAnimGraphParamOptionalRef< char* > m_pszNPCState; // 0x898	
	CAnimGraphParamOptionalRef< bool > m_bStunned; // 0x8c0	
	CAnimGraphParamOptionalRef< bool > m_bLookTargetChargedAutoclear; // 0x8e0	
	CAnimGraphParamOptionalRef< char* > m_sBodyIdle; // 0x900	
	CAnimGraphParamOptionalRef< char* > m_sFlashlightMode; // 0x928	
	CAnimGraphParamOptionalRef< char* > m_sFacingReason; // 0x950	
	CAnimGraphTagOptionalRef m_sFacingModeUsePath; // 0x978	
	CAnimGraphTagOptionalRef m_sAllowMovementOffPath; // 0x990	
	CAnimGraphTagOptionalRef m_sKeepPathActiveStop; // 0x9a8	
	CAnimGraphParamOptionalRef< bool > m_bMoveSolveNudgeActive; // 0x9c0	
	CAnimGraphParamOptionalRef< float32 > m_flMoveSolveNudgeYaw; // 0x9e0	
	CAnimGraphParamOptionalRef< char* > m_pszDoorOpenAction; // 0xa00	
	CAnimGraphParamOptionalRef< float32 > m_flDistanceToDoor; // 0xa28	
	CAnimGraphParamOptionalRef< bool > m_bDoorLeft; // 0xa48	
	CAnimGraphParamOptionalRef< float32 > m_flBlinkAmount; // 0xa68	
	
	// Static fields:
	static uint32_t &Get_s_nControllerTypeID(){return *reinterpret_cast<uint32_t*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CAI_BaseNPCGraphController")->m_static_fields[0]->m_instance);};
	static bool &Get_s_bSchemaTest(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CAI_BaseNPCGraphController")->m_static_fields[1]->m_instance);};
};

