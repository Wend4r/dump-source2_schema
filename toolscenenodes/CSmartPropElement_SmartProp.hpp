#pragma once

#include <cstdint>

// Registered binary: toolscenenodes.dll (project 'smartprops')
// Alignment: 8
// Size: 0x168
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Smart Prop"
// MPropertyDescription "Evaluates a specified smart prop as a child of the current element."
// MVDataOutlinerAssetNameExpr
class CSmartPropElement_SmartProp : public CSmartPropElement
{
public:
	// MPropertyDescription "Name of the target smart prop resource (.vsmart) to evaluate."
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeCSmartProp > > m_sSmartProp; // 0x80	
	// MPropertyDescription "If enabled, any changes made to the evaluation state by the target smart prop (as well as modifiers) will only apply locally and will not affect the evaluation state of the parent. Disabling this will allow modifications to the evaluation state by the referenced smart prop to apply the current state of the of the parent. For example if the referenced smart prop applies a transform and you want the transform to affect the elements in the parent after this element, then you should disable local evaluation state."
	bool m_bLocalEvaluationState; // 0x160	
};

