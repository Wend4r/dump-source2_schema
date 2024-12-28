#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x588
// Has VTable
// Is Abstract
// 
// MNetworkVarNames "bool m_bDisabled"
// MNetworkVarNames "string_t m_iszSoundAreaType"
// MNetworkVarNames "Vector m_vPos"
class C_SoundAreaEntityBase : public C_BaseEntity
{
public:
	// MNetworkEnable
	bool m_bDisabled; // 0x560	
private:
	[[maybe_unused]] uint8_t __pad0561[0x7]; // 0x561
public:
	bool m_bWasEnabled; // 0x568	
private:
	[[maybe_unused]] uint8_t __pad0569[0x7]; // 0x569
public:
	// MNetworkEnable
	CUtlSymbolLarge m_iszSoundAreaType; // 0x570	
	// MNetworkEnable
	Vector m_vPos; // 0x578	
	
	// Datamap fields:
	// void m_nGUID; // 0x564
};

