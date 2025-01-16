#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x288
// 
// MGetKV3ClassDefaults
// MPropertyElementNameFn
struct CompositeMaterialInputLooseVariable_t
{
public:
	// MPropertyFriendlyName "Name"
	// MPropertyAttrStateCallback
	CUtlString m_strName; // 0x0	
	// MPropertyAutoRebuildOnChange
	// MPropertyFriendlyName "Expose Externally"
	bool m_bExposeExternally; // 0x8	
private:
	[[maybe_unused]] uint8_t __pad0009[0x7]; // 0x9
public:
	// MPropertyFriendlyName "Exposed Friendly Name"
	// MPropertyAttrStateCallback
	CUtlString m_strExposedFriendlyName; // 0x10	
	// MPropertyFriendlyName "Exposed Friendly Group"
	// MPropertyAttrStateCallback
	CUtlString m_strExposedFriendlyGroupName; // 0x18	
	// MPropertyFriendlyName "Exposed Fixed Range"
	// MPropertyAttrStateCallback
	bool m_bExposedVariableIsFixedRange; // 0x20	
private:
	[[maybe_unused]] uint8_t __pad0021[0x7]; // 0x21
public:
	// MPropertyFriendlyName "Exposed SetVisible When True"
	// MPropertyAttrStateCallback
	CUtlString m_strExposedVisibleWhenTrue; // 0x28	
	// MPropertyFriendlyName "Exposed SetHidden When True"
	// MPropertyAttrStateCallback
	CUtlString m_strExposedHiddenWhenTrue; // 0x30	
	// MPropertyFriendlyName "Exposed Value List"
	// MPropertyAttrStateCallback
	CUtlString m_strExposedValueList; // 0x38	
	// MPropertyAutoRebuildOnChange
	// MPropertyFriendlyName "Type"
	CompositeMaterialInputLooseVariableType_t m_nVariableType; // 0x40	
	// MPropertyFriendlyName "Value"
	// MPropertyAttrStateCallback
	bool m_bValueBoolean; // 0x44	
private:
	[[maybe_unused]] uint8_t __pad0045[0x3]; // 0x45
public:
	// MPropertyFriendlyName "X Value"
	// MPropertyAttrStateCallback
	// MPropertyAttributeRange "0 255"
	int32_t m_nValueIntX; // 0x48	
	// MPropertyFriendlyName "Y Value"
	// MPropertyAttrStateCallback
	// MPropertyAttributeRange "0 255"
	int32_t m_nValueIntY; // 0x4c	
	// MPropertyFriendlyName "Z Value"
	// MPropertyAttrStateCallback
	// MPropertyAttributeRange "0 255"
	int32_t m_nValueIntZ; // 0x50	
	// MPropertyFriendlyName "W Value"
	// MPropertyAttrStateCallback
	// MPropertyAttributeRange "0 255"
	int32_t m_nValueIntW; // 0x54	
	// MPropertyFriendlyName "Specify Min/Max"
	// MPropertyAttrStateCallback
	bool m_bHasFloatBounds; // 0x58	
private:
	[[maybe_unused]] uint8_t __pad0059[0x3]; // 0x59
public:
	// MPropertyFriendlyName "X Value"
	// MPropertyAttrStateCallback
	// MPropertyAttributeRange "0.0 1.0"
	float m_flValueFloatX; // 0x5c	
	// MPropertyFriendlyName "X Min"
	// MPropertyAttrStateCallback
	float m_flValueFloatX_Min; // 0x60	
	// MPropertyFriendlyName "X Max"
	// MPropertyAttrStateCallback
	float m_flValueFloatX_Max; // 0x64	
	// MPropertyFriendlyName "Y Value"
	// MPropertyAttrStateCallback
	// MPropertyAttributeRange "0.0 1.0"
	float m_flValueFloatY; // 0x68	
	// MPropertyFriendlyName "Y Min"
	// MPropertyAttrStateCallback
	float m_flValueFloatY_Min; // 0x6c	
	// MPropertyFriendlyName "Y Max"
	// MPropertyAttrStateCallback
	float m_flValueFloatY_Max; // 0x70	
	// MPropertyFriendlyName "Z Value"
	// MPropertyAttrStateCallback
	// MPropertyAttributeRange "0.0 1.0"
	float m_flValueFloatZ; // 0x74	
	// MPropertyFriendlyName "Z Min"
	// MPropertyAttrStateCallback
	float m_flValueFloatZ_Min; // 0x78	
	// MPropertyFriendlyName "Z Max"
	// MPropertyAttrStateCallback
	float m_flValueFloatZ_Max; // 0x7c	
	// MPropertyFriendlyName "W Value"
	// MPropertyAttrStateCallback
	// MPropertyAttributeRange "0.0 1.0"
	float m_flValueFloatW; // 0x80	
	// MPropertyFriendlyName "W Min"
	// MPropertyAttrStateCallback
	float m_flValueFloatW_Min; // 0x84	
	// MPropertyFriendlyName "W Max"
	// MPropertyAttrStateCallback
	float m_flValueFloatW_Max; // 0x88	
	// MPropertyFriendlyName "Value"
	// MPropertyAttrStateCallback
	Color m_cValueColor4; // 0x8c	
	// MPropertyFriendlyName "Value"
	// MPropertyAttrStateCallback
	CompositeMaterialVarSystemVar_t m_nValueSystemVar; // 0x90	
private:
	[[maybe_unused]] uint8_t __pad0094[0x4]; // 0x94
public:
	// MPropertyFriendlyName "Material"
	// MPropertyAttributeEditor "AssetBrowse( vmat, *IncrementalUpdate )"
	// MPropertyAttrStateCallback
	CResourceName m_strResourceMaterial; // 0x98	
	// MPropertyFriendlyName "Texture"
	// MPropertyAttributeEditor "AssetBrowse( jpg, png, psd, tga )"
	// MPropertyAttrStateCallback
	CUtlString m_strTextureContentAssetPath; // 0x178	
	// MPropertyHideField
	CResourceName m_strTextureRuntimeResourcePath; // 0x180	
	// MPropertyHideField
	CUtlString m_strTextureCompilationVtexTemplate; // 0x260	
	// MPropertyFriendlyName "Texture Type"
	// MPropertyAttrStateCallback
	CompositeMaterialInputTextureType_t m_nTextureType; // 0x268	
private:
	[[maybe_unused]] uint8_t __pad026c[0x4]; // 0x26c
public:
	// MPropertyFriendlyName "String"
	// MPropertyAttrStateCallback
	CUtlString m_strString; // 0x270	
	// MPropertyFriendlyName "Layout XML"
	// MPropertyAttrStateCallback
	CUtlString m_strPanoramaPanelPath; // 0x278	
	// MPropertyFriendlyName "Render Resolution"
	// MPropertyAttrStateCallback
	int32_t m_nPanoramaRenderRes; // 0x280	
};

