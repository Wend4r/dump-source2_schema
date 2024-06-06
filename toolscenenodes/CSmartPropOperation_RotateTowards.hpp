#pragma once

#include <cstdint>

struct CSmartPropAttributeCoordinateSpace;
// Registered binary: toolscenenodes.dll (project 'smartprops')
// Alignment: 8
// Size: 0x210
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Transform: Rotate Towards"
// MPropertyDescription "Apply a rotation to the current transform according to the alignment of two points."
// MVDataClassGroup
// MVDataExperimentalNodeSet
class CSmartPropOperation_RotateTowards : public CSmartPropTransformOperation
{
public:
	// MPropertyDescription "Position of origin point."
	CSmartPropAttributeVector m_vOriginPos; // 0x50	
	// MPropertyDescription "position of target point."
	CSmartPropAttributeVector m_vTargetPos; // 0x90	
	// MPropertyDescription "position of up point."
	CSmartPropAttributeVector m_vUpPos; // 0xd0	
	// MPropertyDescription "Coefficient to modulate the rotation"
	CSmartPropAttributeFloat m_flWeight; // 0x110	
	// MPropertyGroupName "Input Coordinate Space"
	// MPropertyDescription "Space in which the origin position is defined."
	CSmartPropAttributeCoordinateSpace m_OriginSpace; // 0x150	
	// MPropertyGroupName "Input Coordinate Space"
	// MPropertyDescription "Space in which the target position is defined."
	CSmartPropAttributeCoordinateSpace m_TargetSpace; // 0x190	
	// MPropertyGroupName "Input Coordinate Space"
	// MPropertyDescription "Space in which the up target is defined."
	CSmartPropAttributeCoordinateSpace m_UpSpace; // 0x1d0	
};

