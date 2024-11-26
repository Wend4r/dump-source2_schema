#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x508
// Has VTable
// 
// MNetworkVarNames "bool m_bDisabled"
// MNetworkVarNames "string_t m_iszSoundAreaType"
// MNetworkVarNames "Vector m_vPos"
class CSoundAreaEntityBase : public CBaseEntity
{
public:
	// MNetworkEnable
	bool m_bDisabled; // 0x4e8	
private:
	[[maybe_unused]] uint8_t __pad04e9[0x7]; // 0x4e9
public:
	// MNetworkEnable
	CUtlSymbolLarge m_iszSoundAreaType; // 0x4f0	
	// MNetworkEnable
	Vector m_vPos; // 0x4f8	
	
	// Datamap fields:
	// void InputEnable; // 0x0
	// void InputDisable; // 0x0
};

