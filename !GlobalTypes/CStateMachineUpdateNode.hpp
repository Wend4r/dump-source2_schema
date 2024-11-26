#pragma once

#include <cstdint>

struct CAnimStateMachineUpdater;
// Registered binary: animationsystem.dll (project 'animgraphlib')
// Alignment: 8
// Size: 0x100
// Has VTable
// 
// MGetKV3ClassDefaults
class CStateMachineUpdateNode : public CAnimUpdateNodeBase
{
private:
	[[maybe_unused]] uint8_t __pad0058[0x18]; // 0x58
public:
	CAnimStateMachineUpdater m_stateMachine; // 0x70	
	CUtlVector< CStateNodeStateData > m_stateData; // 0xc8	
	CUtlVector< CStateNodeTransitionData > m_transitionData; // 0xe0	
private:
	[[maybe_unused]] uint8_t __pad00f8[0x4]; // 0xf8
public:
	bool m_bBlockWaningTags; // 0xfc	
	bool m_bLockStateWhenWaning; // 0xfd	
	bool m_bResetWhenActivated; // 0xfe	
};

