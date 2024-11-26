#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x628
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_NearbyEnemyResistVData : public CCitadelModifierVData
{
public:
	float m_flNearbyEnemyResistRange; // 0x608	
private:
	[[maybe_unused]] uint8_t __pad060c[0x4]; // 0x60c
public:
	CUtlVector< float32 > m_flResistValues; // 0x610	
};

