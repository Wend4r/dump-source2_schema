#pragma once

#include <cstdint>

// Registered binary: toolscenenodes.dll (project 'smartprops')
// Alignment: 8
// Size: 0x98
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Normalize Vector"
// MPropertyDescription "Normalize the value of a 3d vector."
// MVDataClassGroup
class CSmartPropOperation_ComputeNormalizedVector3D : public CSmartPropOperation
{
public:
	// MPropertyFriendlyName "Output Variable"
	// MPropertyAttributeEditor "SmartPropItemNameEditor( Variable:Vector3 )"
	CUtlString m_OutputVariableName; // 0x50	
	CSmartPropAttributeVector m_InputVector; // 0x58	
};

