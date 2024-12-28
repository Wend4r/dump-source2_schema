#pragma once

#include <cstdint>

struct CAttributeContainer;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xc38
// Has VTable
// 
// MNetworkVarNames "CAttributeContainer m_AttributeManager"
class CEconEntity : public CBaseFlex
{
private:
	[[maybe_unused]] uint8_t __pad0ac8[0x10]; // 0xac8
public:
	// MNetworkEnable
	CAttributeContainer m_AttributeManager; // 0xad8	
	CHandle< CBaseEntity > m_hOldProvidee; // 0xc30	
	int32_t m_iOldOwnerClass; // 0xc34	
};

