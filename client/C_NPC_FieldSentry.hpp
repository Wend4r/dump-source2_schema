#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xb10
// Has VTable
// 
// MNetworkVarNames "float m_flAttackRange"
// MNetworkVarNames "float m_flAimPitch"
class C_NPC_FieldSentry : public C_NPC_SimpleAnimatingAI
{
private:
	[[maybe_unused]] uint8_t __pad0b00[0x4]; // 0xb00
public:
	// MNetworkEnable
	float m_flAttackRange; // 0xb04	
	// MNetworkEnable
	float m_flAimPitch; // 0xb08	
};

