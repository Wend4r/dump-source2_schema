#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xd20
// Has VTable
// 
// MNetworkVarNames "CUtlString m_strDefaultSkin"
// MNetworkVarNames "CUtlString m_strFriendlySkin"
// MNetworkVarNames "CUtlString m_strEnemySkin"
// MNetworkVarNames "bool m_bIsWorld"
class CCitadel_DynamicProp : public CDynamicProp
{
private:
	[[maybe_unused]] uint8_t __pad0cf0[0x10]; // 0xcf0
public:
	// MNetworkEnable
	CUtlString m_strDefaultSkin; // 0xd00	
	// MNetworkEnable
	CUtlString m_strFriendlySkin; // 0xd08	
	// MNetworkEnable
	CUtlString m_strEnemySkin; // 0xd10	
	// MNetworkEnable
	bool m_bIsWorld; // 0xd18	
	
	// Datamap fields:
	// CUtlSymbolLarge SetFriendlySkin; // 0x0
	// CUtlSymbolLarge SetEnemySkin; // 0x0
};

