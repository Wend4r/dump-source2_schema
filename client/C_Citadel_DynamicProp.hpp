#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xdd0
// Has VTable
// 
// MNetworkVarNames "CUtlString m_strDefaultSkin"
// MNetworkVarNames "CUtlString m_strFriendlySkin"
// MNetworkVarNames "CUtlString m_strEnemySkin"
// MNetworkVarNames "bool m_bIsWorld"
class C_Citadel_DynamicProp : public C_DynamicProp
{
private:
	[[maybe_unused]] uint8_t __pad0d98[0x10]; // 0xd98
public:
	int32_t m_nPlayerTeamEvent; // 0xda8	
private:
	[[maybe_unused]] uint8_t __pad0dac[0x4]; // 0xdac
public:
	// MNetworkEnable
	CUtlString m_strDefaultSkin; // 0xdb0	
	// MNetworkEnable
	CUtlString m_strFriendlySkin; // 0xdb8	
	// MNetworkEnable
	CUtlString m_strEnemySkin; // 0xdc0	
	// MNetworkEnable
	bool m_bIsWorld; // 0xdc8	
	
	// Datamap fields:
	// CUtlSymbolLarge SetFriendlySkin; // 0x0
	// CUtlSymbolLarge SetEnemySkin; // 0x0
};

