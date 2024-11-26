#pragma once

#include <cstdint>

struct CAttributeManager;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x78
// Has VTable
// 
// MNetworkVarNames "C_EconItemAttribute m_Attributes"
class CAttributeList
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	// MNetworkEnable
	// MNetworkTypeAlias "CUtlVector< CEconItemAttribute >"
	C_UtlVectorEmbeddedNetworkVar< C_EconItemAttribute > m_Attributes; // 0x8	
	CAttributeManager* m_pManager; // 0x70	
};

