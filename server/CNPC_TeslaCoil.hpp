#pragma once

#include <cstdint>

struct CCitadelAbilityComponent;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xdf8
// Has VTable
// 
// MNetworkVarNames "CCitadelAbilityComponent::Storage_t m_CCitadelAbilityComponent"
class CNPC_TeslaCoil : public CNPC_SimpleAnimatingAI
{
public:
	// MNetworkEnable
	// MNetworkUserGroup "CCitadelAbilityComponent"
	// MNetworkAlias "CCitadelAbilityComponent"
	// MNetworkTypeAlias "CCitadelAbilityComponent"
	CCitadelAbilityComponent m_CCitadelAbilityComponent; // 0xbd8	
private:
	[[maybe_unused]] uint8_t __pad0de0[0x4]; // 0xde0
public:
	float m_flDeployTime; // 0xde4	
	
	// Datamap fields:
	// float m_flLifeTime; // 0xdec
	// void m_flSpawnTime; // 0xde8
};

