#pragma once

#include <cstdint>

struct CCitadelAbilityComponent;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xdf0
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
	CCitadelAbilityComponent m_CCitadelAbilityComponent; // 0xbd0	
private:
	[[maybe_unused]] uint8_t __pad0dd8[0x4]; // 0xdd8
public:
	float m_flDeployTime; // 0xddc	
	
	// Datamap fields:
	// float m_flLifeTime; // 0xde4
	// void m_flSpawnTime; // 0xde0
};

