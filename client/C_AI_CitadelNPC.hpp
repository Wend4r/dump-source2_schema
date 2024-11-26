#pragma once

#include <cstdint>

struct CCitadelAbilityComponent;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1468
// Has VTable
// 
// MNetworkIncludeByName "m_iMaxHealth"
// MNetworkIncludeByName "m_iHealth"
// MNetworkIncludeByName "m_iTeam"
// MNetworkIncludeByName "m_vecViewOffset"
// MNetworkExcludeByName "m_blinktoggle"
// MNetworkExcludeByName "m_flAnimTime"
// MNetworkExcludeByUserGroup "m_flCycle"
// MNetworkExcludeByName "m_flEncodedController"
// MNetworkExcludeByName "m_flPoseParameter"
// MNetworkOverride "m_lifeState"
// MNetworkVarNames "bool m_bBeamActive"
// MNetworkVarNames "WeakPoint_t m_vecWeakPoints"
// MNetworkVarNames "bool m_bMinion"
// MNetworkVarNames "EHANDLE m_hLookTarget"
// MNetworkVarNames "CCitadelAbilityComponent::Storage_t m_CCitadelAbilityComponent"
class C_AI_CitadelNPC : public C_AI_BaseNPC
{
private:
	[[maybe_unused]] uint8_t __pad0d28[0x1c]; // 0xd28
public:
	// MNetworkEnable
	// MNetworkChangeCallback "OnEyeBeamActiveChanged"
	bool m_bBeamActive; // 0xd44	
private:
	[[maybe_unused]] uint8_t __pad0d45[0x3]; // 0xd45
public:
	// MNetworkEnable
	// MNetworkEncoder "coord"
	// MNetworkChangeCallback "OnEyeBeamTargetChanged"
	Vector m_vEyeBeamTarget; // 0xd48	
private:
	[[maybe_unused]] uint8_t __pad0d54[0x4b4]; // 0xd54
public:
	int32_t m_nPlayerTeamEvent; // 0x1208	
private:
	[[maybe_unused]] uint8_t __pad120c[0x4c]; // 0x120c
public:
	// MNetworkEnable
	C_UtlVectorEmbeddedNetworkVar< WeakPoint_t > m_vecWeakPoints; // 0x1258	
	// MNetworkEnable
	bool m_bMinion; // 0x12c0	
private:
	[[maybe_unused]] uint8_t __pad12c1[0x3]; // 0x12c1
public:
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hLookTarget; // 0x12c4	
	// MNetworkEnable
	// MNetworkUserGroup "CCitadelAbilityComponent"
	// MNetworkAlias "CCitadelAbilityComponent"
	// MNetworkTypeAlias "CCitadelAbilityComponent"
	CCitadelAbilityComponent m_CCitadelAbilityComponent; // 0x12c8	
};

