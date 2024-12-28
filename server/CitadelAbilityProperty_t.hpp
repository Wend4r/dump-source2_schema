#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xf0
// 
// MGetKV3ClassDefaults
struct CitadelAbilityProperty_t
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x10]; // 0x0
public:
	CUtlString m_strValue; // 0x10	
private:
	[[maybe_unused]] uint8_t __pad0018[0x8]; // 0x18
public:
	CEmbeddedSubclass< CScaleFunctionBase > m_subclassScaleFunction; // 0x20	
private:
	[[maybe_unused]] uint8_t __pad0030[0xc]; // 0x30
public:
	// MPropertyDescription "What type of modifier value does this property provide?  Used by modifiers to know what type to auto-register this property for and to tell the UI how this interacts with other stats and items."
	EModifierValue m_eProvidedPropertyType; // 0x3c	
	// MPropertyDescription "Conditions to filter what other abilities this property can affect."
	PropertyValueApplyFilter_t m_eApplyFilter; // 0x40	
private:
	[[maybe_unused]] uint8_t __pad0044[0x4]; // 0x44
public:
	// MPropertyDescription "This property will be disabled if this value matches m_strValue"
	CUtlString m_strDisableValue; // 0x48	
	// MPropertyDescription "When true, effectiveness (distance falloff) will be applied when looking up this value.  Only works in modifiers for now."
	bool m_bDamageAffectedByEffectiveness; // 0x50	
private:
	[[maybe_unused]] uint8_t __pad0051[0x3]; // 0x51
public:
	// MPropertyStartGroup "UI"
	// MPropertyDescription "Set this so we know how to display the ability property (prefix, postfix, and # decimal places)"
	EStatsType m_eDisplayType; // 0x54	
	ModifierValueDisplayUnits_t m_eDisplayUnits; // 0x58	
	// MPropertyDescription "When true, we don't show this ability property anywhere in the UI."
	bool m_bIsHidden; // 0x5c	
	// MPropertyDescription "When true, we add a different class to show it's a negative attribute."
	bool m_bIsNegativeAttribute; // 0x5d	
private:
	[[maybe_unused]] uint8_t __pad005e[0x2]; // 0x5e
public:
	// MPropertyFriendlyName "CSS Class"
	// MPropertyLeafSuggestionProviderFn
	CUtlString m_strCSSClass; // 0x60	
	// MPropertyDescription "If set, will be used for the localization token lookup instead of the name"
	// MPropertySuppressExpr "m_bCanSetTokenOverride == false"
	CUtlString m_strLocTokenOverride; // 0x68	
	// MPropertySuppressField
	bool m_bCanSetTokenOverride; // 0x70	
private:
	[[maybe_unused]] uint8_t __pad0071[0x7]; // 0x71
public:
	// MPropertyDescription "If set, will be used for the conditional localization token lookup instead of [ItemName]_conditional"
	CUtlString m_strConditionalLocTokenOverride; // 0x78	
	// MPropertyDescription "Do we round the value down? i.e. 2.8 will be 2"
	bool m_bRoundDown; // 0x80	
private:
	[[maybe_unused]] uint8_t __pad0081[0x3]; // 0x81
public:
	StatsUsageFlags_t m_eStatsUsageFlags; // 0x84	
};

