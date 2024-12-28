#pragma once

#include <cstdint>

struct CCitadelMinimapComponent;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xdc0
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
	CCitadelMinimapComponent m_CCitadelMinimapComponent; // 0xd90	
private:
	[[maybe_unused]] uint8_t __pad0da8[0x14]; // 0xda8
public:
	// MNetworkEnable
	int32_t m_eLootType; // 0xdbc	
	
	// Datamap fields:
	// CHandle< CBaseEntity > m_hSpawner; // 0xda8
	// int32_t m_eObjectivePosition; // 0xdb4
	// void InputAttachedToParachute; // 0x0
	// void InputDetachedFromParachute; // 0x0
};

