#pragma once

#include <cstdint>

struct CSmartPropAttributeCoordinateSpace;
// Registered binary: toolscenenodes.dll (project 'smartprops')
// Alignment: 8
// Size: 0x190
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Transform: Set Orientation"
// MPropertyDescription "Set the current orientation from a specified forward and up vector."
// MVDataClassGroup
class CSmartPropOperation_SetOrientation : public CSmartPropTransformOperation
{
public:
	// MPropertyGroupName "+Forward"
	CSmartPropAttributeVector m_vForwardVector; // 0x50	
	// MPropertyGroupName "+Forward"
	// MPropertyDescription "Specifies the coordinate space the forward direction is being specified in"
	CSmartPropAttributeCoordinateSpace m_ForwardDirectionSpace; // 0x90	
	// MPropertyGroupName "+Up"
	CSmartPropAttributeVector m_vUpVector; // 0xd0	
	// MPropertyGroupName "+Up"
	// MPropertyDescription "Specifies the coordinate space the up direction is being specified in"
	CSmartPropAttributeCoordinateSpace m_UpDirectionSpace; // 0x110	
	// MPropertyDescription "If the specified vectors are not orthogonal, normally the up vector will be adjusted to make it orthogonal to the forward vector. If prioritize up is true, then the forward vector will be adjusted to be orthogonal to the specified up vector instead."
	CSmartPropAttributeBool m_bPrioritizeUp; // 0x150	
};
