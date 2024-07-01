#pragma once

#include <cstdint>

struct AIScheduleState_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xa8
// Has VTable
class CAI_Scheduler : public CAI_Component
{
public:
	AIScheduleState_t m_ScheduleState; // 0x40	
private:
	[[maybe_unused]] uint8_t __pad0060[0x8]; // 0x60
public:
	CUtlSymbolLarge m_failSchedule; // 0x68	
	CUtlSymbolLarge m_translatedSchedule; // 0x70	
	CUtlSymbolLarge m_untranslatedSchedule; // 0x78	
private:
	[[maybe_unused]] uint8_t __pad0080[0x20]; // 0x80
public:
	CUtlString m_sInterruptText; // 0xa0	
	
	// Static fields:
	static int32_t &Get_ms_nTasksRun(){return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CAI_Scheduler")->m_static_fields[0]->m_instance);};
	
	// Datamap fields:
	// void m_pSchedule; // 0x60
	// void m_pFailedSchedule; // 0x80
	// void m_pInterruptedSchedule; // 0x98
};

