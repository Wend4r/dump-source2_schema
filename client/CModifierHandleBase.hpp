#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x18
// Has VTable
// Has Trivial Destructor
// 
// MNetworkVarNames "uint64 m_hStableHandle"
class CModifierHandleBase
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	// MNetworkEnable
	// MNetworkSerializer "modifier_handle"
	uint64_t m_hStableHandle; // 0x8	
	
	// Datamap fields:
	// void CModifierHandleBase; // 0x0
	// void m_hRuntimeListHandle; // 0x10
};
