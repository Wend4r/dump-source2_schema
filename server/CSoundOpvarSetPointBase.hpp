#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x580
// Has VTable
// 
// MNetworkVarNames "string_t m_iszStackName"
// MNetworkVarNames "string_t m_iszOperatorName"
// MNetworkVarNames "string_t m_iszOpvarName"
// MNetworkVarNames "int m_iOpvarIndex"
// MNetworkVarNames "bool m_bUseAutoCompare"
class CSoundOpvarSetPointBase : public CBaseEntity
{
public:
	bool m_bDisabled; // 0x4e8	
private:
	[[maybe_unused]] uint8_t __pad04e9[0x3]; // 0x4e9
public:
	CEntityHandle m_hSource; // 0x4ec	
private:
	[[maybe_unused]] uint8_t __pad04f0[0x8]; // 0x4f0
public:
	CUtlSymbolLarge m_iszSourceEntityName; // 0x4f8	
private:
	[[maybe_unused]] uint8_t __pad0500[0x50]; // 0x500
public:
	Vector m_vLastPosition; // 0x550	
private:
	[[maybe_unused]] uint8_t __pad055c[0x4]; // 0x55c
public:
	// MNetworkEnable
	CUtlSymbolLarge m_iszStackName; // 0x560	
	// MNetworkEnable
	CUtlSymbolLarge m_iszOperatorName; // 0x568	
	// MNetworkEnable
	CUtlSymbolLarge m_iszOpvarName; // 0x570	
	// MNetworkEnable
	int32_t m_iOpvarIndex; // 0x578	
	// MNetworkEnable
	bool m_bUseAutoCompare; // 0x57c	
	
	// Datamap fields:
	// uint64_t InputSetEventGuid; // 0x0
	// CUtlSymbolLarge InputSetStackName; // 0x0
	// CUtlSymbolLarge InputSetOperatorName; // 0x0
	// CUtlSymbolLarge InputSetOpvarName; // 0x0
	// CUtlSymbolLarge InputSetOpvarIndex; // 0x0
	// CUtlSymbolLarge InputSetSourceEntity; // 0x0
	// void InputEnable; // 0x0
	// void InputDisable; // 0x0
	// void CSoundOpvarSetPointBaseSetOpvarThink; // 0x0
	// void m_nGUID; // 0x4f0
	// void m_hOpvarData; // 0x500
};

