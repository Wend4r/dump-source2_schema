#pragma once

#include <cstdint>

struct HintNodeData;
struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x5c8
// Has VTable
class CAI_Hint : public CServerOnlyEntity
{
public:
	HintNodeData m_NodeData; // 0x4e0	
	CHandle< CBaseEntity > m_hHintOwner; // 0x520	
	GameTime_t m_flNextUseTime; // 0x524	
	CEntityOutputTemplate< CHandle< CBaseEntity > > m_OnNPCStartedUsing; // 0x528	
	CEntityOutputTemplate< CHandle< CBaseEntity > > m_OnNPCStoppedUsing; // 0x550	
	float m_nodeFOV; // 0x578	
	bool m_bNodeFOVCheckBehind; // 0x57c	
private:
	[[maybe_unused]] uint8_t __pad057d[0x3]; // 0x57d
public:
	Vector m_vecForward; // 0x580	
private:
	[[maybe_unused]] uint8_t __pad058c[0x4]; // 0x58c
public:
	CUtlSymbolLarge m_iszAnimgraphEntryAction; // 0x590	
	CUtlSymbolLarge m_iszAnimgraphExitAction; // 0x598	
	CUtlSymbolLarge m_iszAnimgraphEntryCmd; // 0x5a0	
	CUtlSymbolLarge m_iszAnimgraphExitCmd; // 0x5a8	
	CUtlSymbolLarge m_iszNavlinkTargetName; // 0x5b0	
	bool m_bRemoveOnUnreserved; // 0x5b8	
private:
	[[maybe_unused]] uint8_t __pad05b9[0x3]; // 0x5b9
public:
	CHandle< CBaseEntity > m_hAssociatedEntity; // 0x5bc	
	float m_flInteractionDistance; // 0x5c0	
	float m_flCooldown; // 0x5c4	
	
	// Datamap fields:
	// void CAI_HintEnableThink; // 0x0
	// void InputEnableHint; // 0x0
	// void InputDisableHint; // 0x0
	// void InputToggleHint; // 0x0
};

