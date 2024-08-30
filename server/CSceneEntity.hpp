#pragma once

#include <cstdint>

struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xa38
// Has VTable
// 
// MNetworkVarNames "bool m_bIsPlayingBack"
// MNetworkVarNames "bool m_bPaused"
// MNetworkVarNames "bool m_bMultiplayer"
// MNetworkVarNames "bool m_bAutogenerated"
// MNetworkVarNames "float32 m_flForceClientTime"
// MNetworkVarNames "CHandle< CBaseFlex > m_hActorList"
// MNetworkVarNames "uint16 m_nSceneStringIndex"
class CSceneEntity : public CPointEntity
{
private:
	[[maybe_unused]] uint8_t __pad04d8[0x8]; // 0x4d8
public:
	CUtlSymbolLarge m_iszSceneFile; // 0x4e0	
	CUtlSymbolLarge m_iszResumeSceneFile; // 0x4e8	
	CUtlSymbolLarge m_iszTarget1; // 0x4f0	
	CUtlSymbolLarge m_iszTarget2; // 0x4f8	
	CUtlSymbolLarge m_iszTarget3; // 0x500	
	CUtlSymbolLarge m_iszTarget4; // 0x508	
	CUtlSymbolLarge m_iszTarget5; // 0x510	
	CUtlSymbolLarge m_iszTarget6; // 0x518	
	CUtlSymbolLarge m_iszTarget7; // 0x520	
	CUtlSymbolLarge m_iszTarget8; // 0x528	
	CHandle< CBaseEntity > m_hTarget1; // 0x530	
	CHandle< CBaseEntity > m_hTarget2; // 0x534	
	CHandle< CBaseEntity > m_hTarget3; // 0x538	
	CHandle< CBaseEntity > m_hTarget4; // 0x53c	
	CHandle< CBaseEntity > m_hTarget5; // 0x540	
	CHandle< CBaseEntity > m_hTarget6; // 0x544	
	CHandle< CBaseEntity > m_hTarget7; // 0x548	
	CHandle< CBaseEntity > m_hTarget8; // 0x54c	
	CUtlSymbolLarge m_sTargetAttachment; // 0x550	
	// MNetworkEnable
	bool m_bIsPlayingBack; // 0x558	
	// MNetworkEnable
	bool m_bPaused; // 0x559	
	// MNetworkEnable
	bool m_bMultiplayer; // 0x55a	
	// MNetworkEnable
	bool m_bAutogenerated; // 0x55b	
	// MNetworkEnable
	float m_flForceClientTime; // 0x55c	
	float m_flCurrentTime; // 0x560	
	float m_flFrameTime; // 0x564	
	bool m_bCancelAtNextInterrupt; // 0x568	
private:
	[[maybe_unused]] uint8_t __pad0569[0x3]; // 0x569
public:
	float m_fPitch; // 0x56c	
	bool m_bAutomated; // 0x570	
private:
	[[maybe_unused]] uint8_t __pad0571[0x3]; // 0x571
public:
	int32_t m_nAutomatedAction; // 0x574	
	float m_flAutomationDelay; // 0x578	
	float m_flAutomationTime; // 0x57c	
	CHandle< CBaseEntity > m_hWaitingForThisResumeScene; // 0x580	
	bool m_bWaitingForResumeScene; // 0x584	
	bool m_bPausedViaInput; // 0x585	
	bool m_bPauseAtNextInterrupt; // 0x586	
	bool m_bWaitingForActor; // 0x587	
	bool m_bWaitingForInterrupt; // 0x588	
	bool m_bInterruptedActorsScenes; // 0x589	
	bool m_bBreakOnNonIdle; // 0x58a	
	bool m_bSceneFinished; // 0x58b	
private:
	[[maybe_unused]] uint8_t __pad058c[0x4]; // 0x58c
public:
	// MNetworkEnable
	CNetworkUtlVectorBase< CHandle< CBaseFlex > > m_hActorList; // 0x590	
	CUtlVector< CHandle< CBaseEntity > > m_hRemoveActorList; // 0x5a8	
private:
	[[maybe_unused]] uint8_t __pad05c0[0x30]; // 0x5c0
public:
	int32_t m_nSceneFlushCounter; // 0x5f0	
	// MNetworkEnable
	uint16_t m_nSceneStringIndex; // 0x5f4	
private:
	[[maybe_unused]] uint8_t __pad05f6[0x2]; // 0x5f6
public:
	CEntityIOOutput m_OnStart; // 0x5f8	
	CEntityIOOutput m_OnCompletion; // 0x620	
	CEntityIOOutput m_OnCanceled; // 0x648	
	CEntityIOOutput m_OnPaused; // 0x670	
	CEntityIOOutput m_OnResumed; // 0x698	
	CEntityIOOutput m_OnTrigger[16]; // 0x6c0	
private:
	[[maybe_unused]] uint8_t __pad0940[0x90]; // 0x940
public:
	CHandle< CSceneEntity > m_hInterruptScene; // 0x9d0	
	int32_t m_nInterruptCount; // 0x9d4	
	bool m_bSceneMissing; // 0x9d8	
	bool m_bInterrupted; // 0x9d9	
	bool m_bCompletedEarly; // 0x9da	
	bool m_bInterruptSceneFinished; // 0x9db	
	bool m_bRestoring; // 0x9dc	
private:
	[[maybe_unused]] uint8_t __pad09dd[0x3]; // 0x9dd
public:
	CUtlVector< CHandle< CSceneEntity > > m_hNotifySceneCompletion; // 0x9e0	
	CUtlVector< CHandle< CSceneListManager > > m_hListManagers; // 0x9f8	
	CUtlSymbolLarge m_iszSoundName; // 0xa10	
	CUtlSymbolLarge m_iszSequenceName; // 0xa18	
	CHandle< CBaseFlex > m_hActor; // 0xa20	
	CHandle< CBaseEntity > m_hActivator; // 0xa24	
	int32_t m_BusyActor; // 0xa28	
	SceneOnPlayerDeath_t m_iPlayerDeathBehavior; // 0xa2c	
	
	// Static fields:
	static int32_t &Get_s_nSceneFlushCounter(){return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CSceneEntity")->m_static_fields[0]->m_instance);};
	
	// Datamap fields:
	// void m_pScene; // 0x5e8
	// void m_pRecipientFilter; // 0xa30
	// void InputStartPlayback; // 0x0
	// void InputPausePlayback; // 0x0
	// void InputResumePlayback; // 0x0
	// void InputCancelPlayback; // 0x0
	// void InputCancelAtNextInterrupt; // 0x0
	// float InputPitchShiftPlayback; // 0x0
	// CUtlSymbolLarge InputInterjectResponse; // 0x0
	// void InputStopWaitingForActor; // 0x0
	// int32_t InputTriggerEvent; // 0x0
	// CUtlSymbolLarge InputSetTarget1; // 0x0
	// CUtlSymbolLarge InputSetTarget2; // 0x0
	// void InputScriptPlayerDeath; // 0x0
	// void InputPauseAtNextInterrupt; // 0x0
	// void m_OnTrigger[ 0 ]; // 0x6c0
	// void m_OnTrigger[ 1 ]; // 0x6e8
	// void m_OnTrigger[ 2 ]; // 0x710
	// void m_OnTrigger[ 3 ]; // 0x738
	// void m_OnTrigger[ 4 ]; // 0x760
	// void m_OnTrigger[ 5 ]; // 0x788
	// void m_OnTrigger[ 6 ]; // 0x7b0
	// void m_OnTrigger[ 7 ]; // 0x7d8
	// void m_OnTrigger[ 8 ]; // 0x800
	// void m_OnTrigger[ 9 ]; // 0x828
	// void m_OnTrigger[ 10 ]; // 0x850
	// void m_OnTrigger[ 11 ]; // 0x878
	// void m_OnTrigger[ 12 ]; // 0x8a0
	// void m_OnTrigger[ 13 ]; // 0x8c8
	// void m_OnTrigger[ 14 ]; // 0x8f0
	// void m_OnTrigger[ 15 ]; // 0x918
};

