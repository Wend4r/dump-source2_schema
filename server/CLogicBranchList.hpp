#pragma once

#include <cstdint>

struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x600
// Has VTable
class CLogicBranchList : public CLogicalEntity
{
public:
	CUtlSymbolLarge m_nLogicBranchNames[16]; // 0x4e8	
	CUtlVector< CHandle< CBaseEntity > > m_LogicBranchList; // 0x568	
	CLogicBranchList::LogicBranchListenerLastState_t m_eLastState; // 0x580	
private:
	[[maybe_unused]] uint8_t __pad0584[0x4]; // 0x584
public:
	CEntityIOOutput m_OnAllTrue; // 0x588	
	CEntityIOOutput m_OnAllFalse; // 0x5b0	
	CEntityIOOutput m_OnMixed; // 0x5d8	
	
	// Datamap fields:
	// void InputTest; // 0x0
	// void Input_OnLogicBranchChanged; // 0x0
	// void Input_OnLogicBranchRemoved; // 0x0
};

