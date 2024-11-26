#pragma once

#include <cstdint>

struct CAttributeContainer;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xc40
// Has VTable
// 
// MNetworkVarNames "CAttributeContainer m_AttributeManager"
class CEconEntity : public CBaseFlex
{
private:
	[[maybe_unused]] uint8_t __pad0ad0[0x10]; // 0xad0
public:
	// MNetworkEnable
	CAttributeContainer m_AttributeManager; // 0xae0	
	CHandle< CBaseEntity > m_hOldProvidee; // 0xc38	
	int32_t m_iOldOwnerClass; // 0xc3c	
};

