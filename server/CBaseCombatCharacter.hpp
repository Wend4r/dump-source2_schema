#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xb50
// Has VTable
// 
// MNetworkExcludeByUserGroup "LocalPlayerExclusive"
// MNetworkVarNames "CHandle< CEconWearable > m_hMyWearables"
class CBaseCombatCharacter : public CBaseFlex
{
public:
	bool m_bForceServerRagdoll; // 0xac8	
private:
	[[maybe_unused]] uint8_t __pad0ac9[0x7]; // 0xac9
public:
	// MNetworkEnable
	CNetworkUtlVectorBase< CHandle< CEconWearable > > m_hMyWearables; // 0xad0	
	float m_impactEnergyScale; // 0xae8	
	bool m_bApplyStressDamage; // 0xaec	
	bool m_bDeathEventsDispatched; // 0xaed	
private:
	[[maybe_unused]] uint8_t __pad0aee[0x42]; // 0xaee
public:
	int32_t m_iDamageCount; // 0xb30	
private:
	[[maybe_unused]] uint8_t __pad0b34[0x4]; // 0xb34
public:
	CUtlVector< RelationshipOverride_t >* m_pVecRelationships; // 0xb38	
	CUtlSymbolLarge m_strRelationships; // 0xb40	
	Hull_t m_eHull; // 0xb48	
	uint32_t m_nNavHullIdx; // 0xb4c	
	
	// Static fields:
	static int32_t &Get_sm_lastInteraction(){return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CBaseCombatCharacter")->m_static_fields[0]->m_instance);};
	
	// Datamap fields:
	// int32_t m_LastHitGroup; // 0x540
	// void InputBecomeServerRagdoll; // 0x0
	// CUtlSymbolLarge InputSetRelationship; // 0x0
};

