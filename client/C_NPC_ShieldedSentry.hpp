#pragma once

#include <cstdint>

struct CCitadelAbilityComponent;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xcb0
// Has VTable
// 
// MNetworkVarNames "CCitadelAbilityComponent::Storage_t m_CCitadelAbilityComponent"
// MNetworkVarNames "float m_flAttackRange"
// MNetworkVarNames "float m_flAimPitch"
class C_NPC_ShieldedSentry : public C_NPC_SimpleAnimatingAI
{
public:
	// MNetworkEnable
	// MNetworkUserGroup "CCitadelAbilityComponent"
	// MNetworkAlias "CCitadelAbilityComponent"
	// MNetworkTypeAlias "CCitadelAbilityComponent"
	CCitadelAbilityComponent m_CCitadelAbilityComponent; // 0xb00	
private:
	[[maybe_unused]] uint8_t __pad0ca0[0x4]; // 0xca0
public:
	// MNetworkEnable
	float m_flAttackRange; // 0xca4	
	// MNetworkEnable
	float m_flAimPitch; // 0xca8	
};

