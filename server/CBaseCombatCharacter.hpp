#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xb58
// Has VTable
// 
// MNetworkExcludeByUserGroup "LocalPlayerExclusive"
// MNetworkVarNames "CHandle< CEconWearable > m_hMyWearables"
class CBaseCombatCharacter : public CBaseFlex
{
public:
	bool m_bForceServerRagdoll; // 0xad0	
private:
	[[maybe_unused]] uint8_t __pad0ad1[0x7]; // 0xad1
public:
	// MNetworkEnable
	CNetworkUtlVectorBase< CHandle< CEconWearable > > m_hMyWearables; // 0xad8	
	float m_impactEnergyScale; // 0xaf0	
	bool m_bApplyStressDamage; // 0xaf4	
	bool m_bDeathEventsDispatched; // 0xaf5	
private:
	[[maybe_unused]] uint8_t __pad0af6[0x42]; // 0xaf6
public:
	int32_t m_iDamageCount; // 0xb38	
private:
	[[maybe_unused]] uint8_t __pad0b3c[0x4]; // 0xb3c
public:
	CUtlVector< RelationshipOverride_t >* m_pVecRelationships; // 0xb40	
	CUtlSymbolLarge m_strRelationships; // 0xb48	
	Hull_t m_eHull; // 0xb50	
	uint32_t m_nNavHullIdx; // 0xb54	
	
	// Static fields:
	static int32_t &Get_sm_lastInteraction(){return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CBaseCombatCharacter")->m_static_fields[0]->m_instance);};
	
	// Datamap fields:
	// int32_t m_LastHitGroup; // 0x548
	// void InputBecomeServerRagdoll; // 0x0
	// CUtlSymbolLarge InputSetRelationship; // 0x0
};

