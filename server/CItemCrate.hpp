#pragma once

#include <cstdint>

struct CCitadelMinimapComponent;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xdc8
// Has VTable
// 
// MNetworkIncludeByName "m_iHealth"
// MNetworkIncludeByName "m_iMaxHealth"
// MNetworkVarNames "CCitadelMinimapComponent::Storage_t m_CCitadelMinimapComponent"
// MNetworkVarNames "int m_eLootType"
class CItemCrate : public CPhysicsProp
{
public:
	// MNetworkEnable
	// MNetworkUserGroup "CCitadelMinimapComponent"
	// MNetworkAlias "CCitadelMinimapComponent"
	// MNetworkTypeAlias "CCitadelMinimapComponent"
	CCitadelMinimapComponent m_CCitadelMinimapComponent; // 0xd98	
private:
	[[maybe_unused]] uint8_t __pad0db0[0x14]; // 0xdb0
public:
	// MNetworkEnable
	int32_t m_eLootType; // 0xdc4	
	
	// Datamap fields:
	// CHandle< CBaseEntity > m_hSpawner; // 0xdb0
	// int32_t m_eObjectivePosition; // 0xdbc
	// void InputAttachedToParachute; // 0x0
	// void InputDetachedFromParachute; // 0x0
};

