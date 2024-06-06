#pragma once

#include <cstdint>

// Registered binary: toolscenenodes.dll (project 'smartprops')
// Alignment: 8
// Size: 0x90
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Filter: Probability"
// MPropertyDescription "Causes the parent element to only be evaluated with a specified random probability."
// MVDataClassGroup
class CSmartPropFilter_Probability : public CSmartPropFilter
{
public:
	// MPropertyDescription "0.0 to 1.0 value indicating the probability of this element being evaluated. Where a value of 0 means the element will never be evaluated and 1.0 means it will always be evaluated"
	CSmartPropAttributeFloat m_flProbability; // 0x50	
};

