#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1848
// Has VTable
class CNPC_MortarSentry : public CAI_CitadelNPC
{
private:
	[[maybe_unused]] uint8_t __pad17f0[0xc]; // 0x17f0
public:
	float m_flAttackCone; // 0x17fc	
	float m_flLastAlertSound; // 0x1800	
	float m_flTrackingSpeed; // 0x1804	
	Vector m_vTargetPosition; // 0x1808	
	float m_flSearchRadius; // 0x1814	
	
	// Static fields:
	static CUtlSymbolLarge &Get_SCHED_MORTAR_ATTACK(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_MortarSentry")->m_static_fields[0]->m_instance);};
	static CUtlSymbolLarge &Get_SCHED_MORTAR_SENTRY(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_MortarSentry")->m_static_fields[1]->m_instance);};
	static CUtlSymbolLarge &Get_TASK_MORTAR_ATTACK(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_MortarSentry")->m_static_fields[2]->m_instance);};
	static CUtlSymbolLarge &Get_TASK_MORTAR_NO_TARGET_VOLLEY(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_MortarSentry")->m_static_fields[3]->m_instance);};
	
	// Datamap fields:
	// float m_flLifeTime; // 0x1818
	// void m_nCurrentVolley; // 0x1828
	// void m_nGrenadesPerVolley; // 0x182c
	// void m_flNextAttackTime; // 0x1830
	// void m_flAttackRateInnerVolley; // 0x1834
	// void m_flAttackRate; // 0x1838
	// void m_vLastTargetPos; // 0x183c
};

