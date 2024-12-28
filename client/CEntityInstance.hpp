#pragma once

#include <cstdint>

struct CEntityIdentity;
struct CScriptComponent;
// Registered binary: client.dll (project 'entity2')
// Alignment: 8
// Size: 0x38
// Has VTable
// 
// MNetworkVarNames "CEntityIdentity * m_pEntity"
// MNetworkVarNames "CScriptComponent::Storage_t m_CScriptComponent"
class CEntityInstance
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	CUtlSymbolLarge m_iszPrivateVScripts; // 0x8	
	// MNetworkEnable
	// MNetworkPriority "56"
	CEntityIdentity* m_pEntity; // 0x10	
private:
	[[maybe_unused]] uint8_t __pad0018[0x18]; // 0x18
public:
	CScriptComponent* m_CScriptComponent; // 0x30	
};

