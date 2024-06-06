#pragma once

#include <cstdint>

// Registered binary: toolscenenodes.dll (project 'smartprops')
// Alignment: 8
// Size: 0x110
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Material Group"
class CSmartPropVariable_MaterialGroup : public CSmartPropVariable
{
public:
	// MPropertyDescription "Model containing the set of material groups to select."
	// MPropertyAutoRebuildOnChange
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_sModelName; // 0x28	
	// MPropertyFriendlyName "Default Material Group"
	// MPropertyDescription "Default material group (skin) to assign to the variable value."
	// MPropertyAttributeEditor "VDataModelMaterialGroup( m_sModelName )"
	CUtlString m_DefaultValue; // 0x108	
};

