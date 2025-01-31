#pragma once

#include <cstdint>

// Registered binary: soundsystem.dll (project 'soundsystem')
// Alignment: 8
// Size: 0x38
// Has VTable
// 
// MGetKV3ClassDefaults
class CSosGroupActionSetSoundeventParameterSchema : public CSosGroupActionSchema
{
public:
	// MPropertyFriendlyName "Max Count"
	int32_t m_nMaxCount; // 0x18	
	// MPropertyFriendlyName "Minimum Value"
	float m_flMinValue; // 0x1c	
	// MPropertyFriendlyName "Maximum Value"
	float m_flMaxValue; // 0x20	
private:
	[[maybe_unused]] uint8_t __pad0024[0x4]; // 0x24
public:
	// MPropertyFriendlyName "Parameter Name"
	CUtlString m_opvarName; // 0x28	
	// MPropertyFriendlyName "Sort Type"
	SosActionSortType_t m_nSortType; // 0x30	
};

