#pragma once

#include <cstdint>

struct CompositeMaterialInputLooseVariable_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x380
// 
// MGetKV3ClassDefaults
// MPropertyElementNameFn
struct CompMatPropertyMutator_t
{
public:
	// MPropertyAutoRebuildOnChange
	// MPropertyFriendlyName "Enabled"
	bool m_bEnabled; // 0x0	
	// MPropertyAutoRebuildOnChange
	// MPropertyFriendlyName "Mutator Command"
	// MPropertyAttrStateCallback
	CompMatPropertyMutatorType_t m_nMutatorCommandType; // 0x4	
	// MPropertyFriendlyName "Container to Init With"
	// MPropertyAttrStateCallback
	CUtlString m_strInitWith_Container; // 0x8	
	// MPropertyFriendlyName "Input Container"
	// MPropertyAttrStateCallback
	CUtlString m_strCopyProperty_InputContainerSrc; // 0x10	
	// MPropertyFriendlyName "Input Container Property"
	// MPropertyAttrStateCallback
	CUtlString m_strCopyProperty_InputContainerProperty; // 0x18	
	// MPropertyFriendlyName "Target Property"
	// MPropertyAttrStateCallback
	CUtlString m_strCopyProperty_TargetProperty; // 0x20	
	// MPropertyFriendlyName "Seed Input Var"
	// MPropertyAttrStateCallback
	CUtlString m_strRandomRollInputVars_SeedInputVar; // 0x28	
	// MPropertyFriendlyName "Input Vars"
	// MPropertyAttrStateCallback
	CUtlVector< CUtlString > m_vecRandomRollInputVars_InputVarsToRoll; // 0x30	
	// MPropertyFriendlyName "Input Container"
	// MPropertyAttrStateCallback
	CUtlString m_strCopyMatchingKeys_InputContainerSrc; // 0x48	
	// MPropertyFriendlyName "Input Container"
	// MPropertyAttrStateCallback
	CUtlString m_strCopyKeysWithSuffix_InputContainerSrc; // 0x50	
	// MPropertyFriendlyName "Find Suffix"
	// MPropertyAttrStateCallback
	CUtlString m_strCopyKeysWithSuffix_FindSuffix; // 0x58	
	// MPropertyFriendlyName "Replace Suffix"
	// MPropertyAttrStateCallback
	CUtlString m_strCopyKeysWithSuffix_ReplaceSuffix; // 0x60	
	// MPropertyFriendlyName "Value"
	// MPropertyAttrStateCallback
	CompositeMaterialInputLooseVariable_t m_nSetValue_Value; // 0x68	
	// MPropertyFriendlyName "Target Texture Param"
	// MPropertyAttrStateCallback
	CUtlString m_strGenerateTexture_TargetParam; // 0x2f0	
	// MPropertyFriendlyName "Initial Container"
	// MPropertyAttrStateCallback
	CUtlString m_strGenerateTexture_InitialContainer; // 0x2f8	
	// MPropertyFriendlyName "Resolution"
	// MPropertyAttrStateCallback
	int32_t m_nResolution; // 0x300	
	// MPropertyAutoRebuildOnChange
	// MPropertyFriendlyName "Scratch Target"
	// MPropertyAttrStateCallback
	bool m_bIsScratchTarget; // 0x304	
	// MPropertyAutoRebuildOnChange
	// MPropertyFriendlyName "Splat Debug info on Texture"
	// MPropertyAttrStateCallback
	bool m_bSplatDebugInfo; // 0x305	
	// MPropertyAutoRebuildOnChange
	// MPropertyFriendlyName "Capture in RenderDoc"
	// MPropertyAttrStateCallback
	bool m_bCaptureInRenderDoc; // 0x306	
private:
	[[maybe_unused]] uint8_t __pad0307[0x1]; // 0x307
public:
	// MPropertyFriendlyName "Texture Generation Instructions"
	// MPropertyAttrStateCallback
	CUtlVector< CompMatPropertyMutator_t > m_vecTexGenInstructions; // 0x308	
	// MPropertyFriendlyName "Mutators"
	// MPropertyAttrStateCallback
	CUtlVector< CompMatPropertyMutator_t > m_vecConditionalMutators; // 0x320	
	// MPropertyFriendlyName "Container to Pop"
	// MPropertyAttrStateCallback
	CUtlString m_strPopInputQueue_Container; // 0x338	
	// MPropertyFriendlyName "Input Container"
	// MPropertyAttrStateCallback
	CUtlString m_strDrawText_InputContainerSrc; // 0x340	
	// MPropertyFriendlyName "Input Container Property"
	// MPropertyAttrStateCallback
	CUtlString m_strDrawText_InputContainerProperty; // 0x348	
	// MPropertyFriendlyName "Text Position"
	// MPropertyAttrStateCallback
	Vector2D m_vecDrawText_Position; // 0x350	
	// MPropertyFriendlyName "Text Color"
	// MPropertyAttrStateCallback
	Color m_colDrawText_Color; // 0x358	
private:
	[[maybe_unused]] uint8_t __pad035c[0x4]; // 0x35c
public:
	// MPropertyFriendlyName "Font"
	// MPropertyAttrStateCallback
	CUtlString m_strDrawText_Font; // 0x360	
	// MPropertyFriendlyName "Conditions"
	// MPropertyAttrStateCallback
	CUtlVector< CompMatMutatorCondition_t > m_vecConditions; // 0x368	
};

