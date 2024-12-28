#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xd18
// Has VTable
// 
// MNetworkVarNames "CUtlString m_strDefaultSkin"
// MNetworkVarNames "CUtlString m_strFriendlySkin"
// MNetworkVarNames "CUtlString m_strEnemySkin"
// MNetworkVarNames "bool m_bIsWorld"
class CCitadel_DynamicProp : public CDynamicProp
{
private:
	[[maybe_unused]] uint8_t __pad0ce8[0x10]; // 0xce8
public:
	// MNetworkEnable
	CUtlString m_strDefaultSkin; // 0xcf8	
	// MNetworkEnable
	CUtlString m_strFriendlySkin; // 0xd00	
	// MNetworkEnable
	CUtlString m_strEnemySkin; // 0xd08	
	// MNetworkEnable
	bool m_bIsWorld; // 0xd10	
	
	// Datamap fields:
	// CUtlSymbolLarge SetFriendlySkin; // 0x0
	// CUtlSymbolLarge SetEnemySkin; // 0x0
};

