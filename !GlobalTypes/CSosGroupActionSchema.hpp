#pragma once

#include <cstdint>

// Registered binary: soundsystem.dll (project 'soundsystem')
// Alignment: 8
// Size: 0x18
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyElementNameFn
class CSosGroupActionSchema
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	// MPropertyFriendlyName "Name"
	CUtlString m_name; // 0x8	
	// MPropertyFriendlyName "Action Type"
	ActionType_t m_actionType; // 0x10	
	// MPropertySuppressField
	ActionType_t m_actionInstanceType; // 0x14	
};

