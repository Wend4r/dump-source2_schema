#pragma once

#include <cstdint>

struct GameTime_t;
struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xb30
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
	CUtlSymbolLarge m_iszPreCommands; // 0xa38	
	CUtlSymbolLarge m_iszPostCommands; // 0xa40	
	// MNetworkEnable
	CUtlSymbolLarge m_iszCommentaryFile; // 0xa48	
	CUtlSymbolLarge m_iszViewTarget; // 0xa50	
	CHandle< CBaseEntity > m_hViewTarget; // 0xa58	
	CHandle< CBaseEntity > m_hViewTargetAngles; // 0xa5c	
	CUtlSymbolLarge m_iszViewPosition; // 0xa60	
	// MNetworkEnable
	CHandle< CBaseEntity > m_hViewPosition; // 0xa68	
	CHandle< CBaseEntity > m_hViewPositionMover; // 0xa6c	
	bool m_bPreventMovement; // 0xa70	
	bool m_bUnderCrosshair; // 0xa71	
	bool m_bUnstoppable; // 0xa72	
private:
	[[maybe_unused]] uint8_t __pad0a73[0x1]; // 0xa73
public:
	GameTime_t m_flFinishedTime; // 0xa74	
	Vector m_vecFinishOrigin; // 0xa78	
	QAngle m_vecOriginalAngles; // 0xa84	
	QAngle m_vecFinishAngles; // 0xa90	
	bool m_bPreventChangesWhileMoving; // 0xa9c	
	bool m_bDisabled; // 0xa9d	
private:
	[[maybe_unused]] uint8_t __pad0a9e[0x2]; // 0xa9e
public:
	Vector m_vecTeleportOrigin; // 0xaa0	
	GameTime_t m_flAbortedPlaybackAt; // 0xaac	
	CEntityIOOutput m_pOnCommentaryStarted; // 0xab0	
	CEntityIOOutput m_pOnCommentaryStopped; // 0xad8	
	// MNetworkEnable
	bool m_bActive; // 0xb00	
private:
	[[maybe_unused]] uint8_t __pad0b01[0x3]; // 0xb01
public:
	// MNetworkEnable
	GameTime_t m_flStartTime; // 0xb04	
	// MNetworkEnable
	float m_flStartTimeInCommentary; // 0xb08	
private:
	[[maybe_unused]] uint8_t __pad0b0c[0x4]; // 0xb0c
public:
	// MNetworkEnable
	CUtlSymbolLarge m_iszTitle; // 0xb10	
	// MNetworkEnable
	CUtlSymbolLarge m_iszSpeakers; // 0xb18	
	// MNetworkEnable
	int32_t m_iNodeNumber; // 0xb20	
	// MNetworkEnable
	int32_t m_iNodeNumberMax; // 0xb24	
	// MNetworkEnable
	bool m_bListenedTo; // 0xb28	
	
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

