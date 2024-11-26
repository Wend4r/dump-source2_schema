#pragma once

#include <cstdint>

struct HintNodeData;
struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x5d0
// Has VTable
class CAI_Hint : public CServerOnlyEntity
{
public:
	HintNodeData m_NodeData; // 0x4e8	
	CHandle< CBaseEntity > m_hHintOwner; // 0x528	
	GameTime_t m_flNextUseTime; // 0x52c	
	CEntityOutputTemplate< CHandle< CBaseEntity > > m_OnNPCStartedUsing; // 0x530	
	CEntityOutputTemplate< CHandle< CBaseEntity > > m_OnNPCStoppedUsing; // 0x558	
	float m_nodeFOV; // 0x580	
	bool m_bNodeFOVCheckBehind; // 0x584	
private:
	[[maybe_unused]] uint8_t __pad0585[0x3]; // 0x585
public:
	Vector m_vecForward; // 0x588	
private:
	[[maybe_unused]] uint8_t __pad0594[0x4]; // 0x594
public:
	CUtlSymbolLarge m_iszAnimgraphEntryAction; // 0x598	
	CUtlSymbolLarge m_iszAnimgraphExitAction; // 0x5a0	
	CUtlSymbolLarge m_iszAnimgraphEntryCmd; // 0x5a8	
	CUtlSymbolLarge m_iszAnimgraphExitCmd; // 0x5b0	
	CUtlSymbolLarge m_iszNavlinkTargetName; // 0x5b8	
	bool m_bRemoveOnUnreserved; // 0x5c0	
private:
	[[maybe_unused]] uint8_t __pad05c1[0x3]; // 0x5c1
public:
	CHandle< CBaseEntity > m_hAssociatedEntity; // 0x5c4	
	float m_flInteractionDistance; // 0x5c8	
	float m_flCooldown; // 0x5cc	
	
	// Datamap fields:
	// void CAI_HintEnableThink; // 0x0
	// void InputEnableHint; // 0x0
	// void InputDisableHint; // 0x0
	// void InputToggleHint; // 0x0
};

