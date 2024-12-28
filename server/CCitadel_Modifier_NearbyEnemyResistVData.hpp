#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x650
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_NearbyEnemyResistVData : public CCitadelModifierVData
{
public:
	float m_flNearbyEnemyResistRange; // 0x630	
private:
	[[maybe_unused]] uint8_t __pad0634[0x4]; // 0x634
public:
	CUtlVector< float32 > m_flResistValues; // 0x638	
};

