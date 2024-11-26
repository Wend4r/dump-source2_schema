#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x530
// Has VTable
class CAI_GoalEntity : public CBaseEntity
{
private:
	[[maybe_unused]] uint8_t __pad04e8[0x8]; // 0x4e8
public:
	CUtlSymbolLarge m_iszActor; // 0x4f0	
	CUtlSymbolLarge m_iszGoal; // 0x4f8	
	bool m_fStartActive; // 0x500	
private:
	[[maybe_unused]] uint8_t __pad0501[0x3]; // 0x501
public:
	CAI_GoalEntity::SearchType_t m_SearchType; // 0x504	
	CUtlSymbolLarge m_iszConceptModifiers; // 0x508	
	CUtlVector< CHandle< CAI_BaseNPC > > m_actors; // 0x510	
	CHandle< CBaseEntity > m_hGoalEntity; // 0x528	
	uint32_t m_flags; // 0x52c	
	
	// Datamap fields:
	// void CAI_GoalEntityDelayedRefresh; // 0x0
	// void InputActivate; // 0x0
	// void InputUpdateActors; // 0x0
	// void InputDeactivate; // 0x0
};

