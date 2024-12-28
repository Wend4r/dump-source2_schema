#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x648
// Has VTable
// 
// MGetKV3ClassDefaults
class CModifierItemPickupAuraTargetVData : public CCitadelModifierVData
{
public:
	// MPropertyGroupName "Timers"
	float m_PickupTimer; // 0x630	
private:
	[[maybe_unused]] uint8_t __pad0634[0x4]; // 0x634
public:
	// MPropertyGroupName "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_PickupTimerModifier; // 0x638	
};

