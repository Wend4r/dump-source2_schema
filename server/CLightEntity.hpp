#pragma once

#include <cstdint>

struct CLightComponent;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x7c8
// Has VTable
// 
// MNetworkVarNames "CLightComponent::Storage_t m_CLightComponent"
// MEntityAllowsPortraitWorldSpawn
class CLightEntity : public CBaseModelEntity
{
public:
	// MNetworkEnable
	// MNetworkUserGroup "CLightComponent"
	// MNetworkAlias "CLightComponent"
	// MNetworkTypeAlias "CLightComponent"
	CLightComponent* m_CLightComponent; // 0x7c0	
};

