#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1600
// Has VTable
class CNPC_MortarSentry : public CAI_CitadelNPC
{
private:
	[[maybe_unused]] uint8_t __pad15a8[0xc]; // 0x15a8
public:
	float m_flAttackCone; // 0x15b4	
	float m_flLastAlertSound; // 0x15b8	
	float m_flTrackingSpeed; // 0x15bc	
	Vector m_vTargetPosition; // 0x15c0	
	float m_flSearchRadius; // 0x15cc	
	
	// Static fields:
	static CUtlSymbolLarge &Get_SCHED_MORTAR_ATTACK(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_MortarSentry")->m_static_fields[0]->m_instance);};
	static CUtlSymbolLarge &Get_SCHED_MORTAR_SENTRY(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_MortarSentry")->m_static_fields[1]->m_instance);};
	static CUtlSymbolLarge &Get_TASK_MORTAR_ATTACK(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_MortarSentry")->m_static_fields[2]->m_instance);};
	static CUtlSymbolLarge &Get_TASK_MORTAR_NO_TARGET_VOLLEY(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_MortarSentry")->m_static_fields[3]->m_instance);};
	
	// Datamap fields:
	// float m_flLifeTime; // 0x15d0
	// void m_nCurrentVolley; // 0x15e0
	// void m_nGrenadesPerVolley; // 0x15e4
	// void m_flNextAttackTime; // 0x15e8
	// void m_flAttackRateInnerVolley; // 0x15ec
	// void m_flAttackRate; // 0x15f0
	// void m_vLastTargetPos; // 0x15f4
};
