#pragma once

#include <cstdint>

struct GameTime_t;
struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xb38
// Has VTable
// 
// MNetworkVarNames "string_t m_iszCommentaryFile"
// MNetworkVarNames "CHandle< CBaseEntity> m_hViewPosition"
// MNetworkVarNames "bool m_bActive"
// MNetworkVarNames "GameTime_t m_flStartTime"
// MNetworkVarNames "float32 m_flStartTimeInCommentary"
// MNetworkVarNames "string_t m_iszTitle"
// MNetworkVarNames "string_t m_iszSpeakers"
// MNetworkVarNames "int m_iNodeNumber"
// MNetworkVarNames "int m_iNodeNumberMax"
// MNetworkVarNames "bool m_bListenedTo"
class CPointCommentaryNode : public CBaseAnimGraph
{
public:
	CUtlSymbolLarge m_iszPreCommands; // 0xa40	
	CUtlSymbolLarge m_iszPostCommands; // 0xa48	
	// MNetworkEnable
	CUtlSymbolLarge m_iszCommentaryFile; // 0xa50	
	CUtlSymbolLarge m_iszViewTarget; // 0xa58	
	CHandle< CBaseEntity > m_hViewTarget; // 0xa60	
	CHandle< CBaseEntity > m_hViewTargetAngles; // 0xa64	
	CUtlSymbolLarge m_iszViewPosition; // 0xa68	
	// MNetworkEnable
	CHandle< CBaseEntity > m_hViewPosition; // 0xa70	
	CHandle< CBaseEntity > m_hViewPositionMover; // 0xa74	
	bool m_bPreventMovement; // 0xa78	
	bool m_bUnderCrosshair; // 0xa79	
	bool m_bUnstoppable; // 0xa7a	
private:
	[[maybe_unused]] uint8_t __pad0a7b[0x1]; // 0xa7b
public:
	GameTime_t m_flFinishedTime; // 0xa7c	
	Vector m_vecFinishOrigin; // 0xa80	
	QAngle m_vecOriginalAngles; // 0xa8c	
	QAngle m_vecFinishAngles; // 0xa98	
	bool m_bPreventChangesWhileMoving; // 0xaa4	
	bool m_bDisabled; // 0xaa5	
private:
	[[maybe_unused]] uint8_t __pad0aa6[0x2]; // 0xaa6
public:
	Vector m_vecTeleportOrigin; // 0xaa8	
	GameTime_t m_flAbortedPlaybackAt; // 0xab4	
	CEntityIOOutput m_pOnCommentaryStarted; // 0xab8	
	CEntityIOOutput m_pOnCommentaryStopped; // 0xae0	
	// MNetworkEnable
	bool m_bActive; // 0xb08	
private:
	[[maybe_unused]] uint8_t __pad0b09[0x3]; // 0xb09
public:
	// MNetworkEnable
	GameTime_t m_flStartTime; // 0xb0c	
	// MNetworkEnable
	float m_flStartTimeInCommentary; // 0xb10	
private:
	[[maybe_unused]] uint8_t __pad0b14[0x4]; // 0xb14
public:
	// MNetworkEnable
	CUtlSymbolLarge m_iszTitle; // 0xb18	
	// MNetworkEnable
	CUtlSymbolLarge m_iszSpeakers; // 0xb20	
	// MNetworkEnable
	int32_t m_iNodeNumber; // 0xb28	
	// MNetworkEnable
	int32_t m_iNodeNumberMax; // 0xb2c	
	// MNetworkEnable
	bool m_bListenedTo; // 0xb30	
	
	// Datamap fields:
	// void InputStartCommentary; // 0x0
	// void InputStartUnstoppableCommentary; // 0x0
	// void InputEnable; // 0x0
	// void InputDisable; // 0x0
	// void CPointCommentaryNodeSpinThink; // 0x0
	// void CPointCommentaryNodeUpdateViewThink; // 0x0
	// void CPointCommentaryNodeUpdateViewPostThink; // 0x0
	// void CPointCommentaryNodeAcculumatePlayTimeThink; // 0x0
};

