#pragma once

#include <cstdint>

// Registered binary: toolscenenodes.dll (project 'smartprops')
// Alignment: 8
// Size: 0xe8
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Place Multiple"
// MPropertyDescription "An element which places multiple instances of its child elements."
class CSmartPropElement_PlaceMultiple : public CSmartPropElement_Group
{
public:
	// MPropertyDescription "Number of instances of this object and its children to be placed."
	CSmartPropAttributeInt m_nCount; // 0xa0	
	// MPropertyFriendlyName "Stop When"
	// MPropertyDescription "Stop placing copies of the children when this expression evaluates to true."
	// MPropertyAttributeEditor "SmartPropAttributeEditor(expression)"
	CUtlString m_Expression; // 0xe0	
};

