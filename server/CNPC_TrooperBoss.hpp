#pragma once

#include <cstdint>

struct CCitadelPlayerClipComponent;
struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1860
// Has VTable
// 
// MNetworkVarNames "CCitadelPlayerClipComponent::Storage_t m_CCitadelPlayerClipComponent"
// MNetworkVarNames "GameTime_t m_flFadeOutStart"
// MNetworkVarNames "GameTime_t m_flFadeOutEnd"
class CNPC_TrooperBoss : public CNPC_Trooper
{
public:
	// MNetworkEnable
	// MNetworkUserGroup "CCitadelPlayerClipComponent"
	// MNetworkAlias "CCitadelPlayerClipComponent"
	// MNetworkTypeAlias "CCitadelPlayerClipComponent"
	CCitadelPlayerClipComponent m_CCitadelPlayerClipComponent; // 0x1638	
private:
	[[maybe_unused]] uint8_t __pad1658[0x8]; // 0x1658
public:
	LaneSide_t m_LaneSide; // 0x1660	
private:
	[[maybe_unused]] uint8_t __pad1661[0x1e7]; // 0x1661
public:
	CUtlSymbolLarge m_backdoorProtectionTrigger; // 0x1848	
private:
	[[maybe_unused]] uint8_t __pad1850[0x4]; // 0x1850
public:
	// MNetworkEnable
	GameTime_t m_flFadeOutStart; // 0x1854	
	// MNetworkEnable
	GameTime_t m_flFadeOutEnd; // 0x1858	
	
	// Static fields:
	static CUtlSymbolLarge &Get_SCHED_TROOPERBOSS_RANGE_ATTACK(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_TrooperBoss")->m_static_fields[0]->m_instance);};
	static CUtlSymbolLarge &Get_SCHED_TROOPERBOSS_RETURN_TO_SPAWN(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_TrooperBoss")->m_static_fields[1]->m_instance);};
	static CUtlSymbolLarge &Get_SCHED_TROOPERBOSS_SHIELD_STANCE(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_TrooperBoss")->m_static_fields[2]->m_instance);};
	static CUtlSymbolLarge &Get_SCHED_TROOPERBOSS_COMBAT_STANCE(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_TrooperBoss")->m_static_fields[3]->m_instance);};
	static CUtlSymbolLarge &Get_SCHED_TROOPERBOSS_CHARGE_ENEMY(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_TrooperBoss")->m_static_fields[4]->m_instance);};
	static CUtlSymbolLarge &Get_TASK_TROOPERBOSS_RAISE_SHIELD(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_TrooperBoss")->m_static_fields[5]->m_instance);};
	static CUtlSymbolLarge &Get_TASK_TROOPERBOSS_LOWER_SHIELD(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_TrooperBoss")->m_static_fields[6]->m_instance);};
	static ConditionId_t &Get_COND_TROOPERBOSS_SHIELD_ACTIVE(){return *reinterpret_cast<ConditionId_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_TrooperBoss")->m_static_fields[7]->m_instance);};
	static ConditionId_t &Get_COND_TROOPERBOSS_ENEMY_IN_CHARGE_RANGE(){return *reinterpret_cast<ConditionId_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_TrooperBoss")->m_static_fields[8]->m_instance);};
	static ConditionId_t &Get_COND_TROOPERBOSS_ENEMY_OUT_OF_CHARGE_RANGE(){return *reinterpret_cast<ConditionId_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_TrooperBoss")->m_static_fields[9]->m_instance);};
};

