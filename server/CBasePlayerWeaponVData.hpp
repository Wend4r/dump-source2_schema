#pragma once

#include <cstdint>

struct AmmoIndex_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x358
// Has VTable
// 
// MGetKV3ClassDefaults
class CBasePlayerWeaponVData
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x10]; // 0x0
public:
	// MPropertyDescription "The name of the weapon entity to spawn for this NPC weapon."
	CUtlString m_szClassName; // 0x10	
	// MPropertyStartGroup "Visuals"
	// MPropertyDescription "Model used on the ground or held by an entity"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_szWorldModel; // 0x18	
	// MPropertyDescription "Model used by the tools only to populate comboboxes for things like animgraph parameter pickers"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_sToolsOnlyOwnerModelName; // 0xf8	
	// MPropertyDescription "Was the weapon was built right-handed?"
	bool m_bBuiltRightHanded; // 0x1d8	
	// MPropertyDescription "Allows flipping the model, regardless of whether it is built left or right handed"
	bool m_bAllowFlipping; // 0x1d9	
private:
	[[maybe_unused]] uint8_t __pad01da[0x6]; // 0x1da
public:
	// MPropertyDescription "Attachment to fire bullets from"
	// MPropertyAttributeEditor "VDataModelAttachment( m_szWorldModel )"
	CAttachmentNameSymbolWithStorage m_sMuzzleAttachment; // 0x1e0	
	// MPropertyDescription "Effect when firing this weapon"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_szMuzzleFlashParticle; // 0x200	
	// MPropertyStartGroup "Behavior"
	// MPropertyDescription "Should both primary and secondary attacks be cooled down together (so cooling down primary attack would cooldown both primary + secondary attacks)?"
	bool m_bLinkedCooldowns; // 0x2e0	
private:
	[[maybe_unused]] uint8_t __pad02e1[0x7]; // 0x2e1
public:
	CUtlVector< CEmbeddedSubclass< CCitadelModifier > > m_vecIntrinsicModifiers; // 0x2e8	
	ItemFlagTypes_t m_iFlags; // 0x300	
	// MPropertyStartGroup "Ammo"
	// MPropertyAttributeEditor "VDataChoice( scripts/ammo.vdata )"
	// MPropertyCustomFGDType "string"
	AmmoIndex_t m_nPrimaryAmmoType; // 0x301	
	// MPropertyAttributeEditor "VDataChoice( scripts/ammo.vdata )"
	// MPropertyCustomFGDType "string"
	AmmoIndex_t m_nSecondaryAmmoType; // 0x302	
private:
	[[maybe_unused]] uint8_t __pad0303[0x1]; // 0x303
public:
	// MPropertyFriendlyName "Primary Clip Size"
	// MPropertyDescription "How many bullets this gun can fire before it reloads (0 if no clip)"
	// MPropertyAttributeRange "0 255"
	int32_t m_iMaxClip1; // 0x304	
	// MPropertyFriendlyName "Secondary Clip Size"
	// MPropertyDescription "How many secondary bullets this gun can fire before it reloads (0 if no clip)"
	// MPropertyAttributeRange "0 255"
	int32_t m_iMaxClip2; // 0x308	
	// MPropertyDescription "Primary Initial Clip (-1 means use clip size)"
	// MPropertyAttributeRange "-1 255"
	int32_t m_iDefaultClip1; // 0x30c	
	// MPropertyDescription "Secondary Initial Clip (-1 means use clip size)"
	// MPropertyAttributeRange "-1 255"
	int32_t m_iDefaultClip2; // 0x310	
	// MPropertyDescription "Indicates whether to treat reserve ammo as clips (reloads) instead of raw bullets"
	bool m_bReserveAmmoAsClips; // 0x314	
private:
	[[maybe_unused]] uint8_t __pad0315[0x3]; // 0x315
public:
	// MPropertyStartGroup "UI"
	// MPropertyDescription "This value used to determine this weapon's importance in autoselection"
	int32_t m_iWeight; // 0x318	
	// MPropertyFriendlyName "Safe To Auto-Switch To"
	// MPropertyDescription "Whether this weapon is safe to automatically switch to (should be false for eg. explosives that can the player may accidentally hurt themselves with)"
	bool m_bAutoSwitchTo; // 0x31c	
	// MPropertyFriendlyName "Safe To Auto-Switch Away From"
	bool m_bAutoSwitchFrom; // 0x31d	
private:
	[[maybe_unused]] uint8_t __pad031e[0x2]; // 0x31e
public:
	RumbleEffect_t m_iRumbleEffect; // 0x320	
	// MPropertyFriendlyName "HUD Bucket"
	// MPropertyDescription "Which 'column' to display this weapon in the HUD"
	int32_t m_iSlot; // 0x324	
	// MPropertyFriendlyName "HUD Bucket Position"
	// MPropertyDescription "Which 'row' to display this weapon in the HUD"
	int32_t m_iPosition; // 0x328	
private:
	[[maybe_unused]] uint8_t __pad032c[0x4]; // 0x32c
public:
	// MPropertyStartGroup "Sounds"
	CUtlOrderedMap< WeaponSound_t, CSoundEventName > m_aShootSounds; // 0x330	
};

