#pragma once

#include <cstdint>

struct CCitadelAbilityComponent;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1460
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
	[[maybe_unused]] uint8_t __pad0d20[0x1c]; // 0xd20
public:
	// MNetworkEnable
	// MNetworkChangeCallback "OnEyeBeamActiveChanged"
	bool m_bBeamActive; // 0xd3c	
private:
	[[maybe_unused]] uint8_t __pad0d3d[0x3]; // 0xd3d
public:
	// MNetworkEnable
	// MNetworkEncoder "coord"
	// MNetworkChangeCallback "OnEyeBeamTargetChanged"
	Vector m_vEyeBeamTarget; // 0xd40	
private:
	[[maybe_unused]] uint8_t __pad0d4c[0x4b4]; // 0xd4c
public:
	int32_t m_nPlayerTeamEvent; // 0x1200	
private:
	[[maybe_unused]] uint8_t __pad1204[0x4c]; // 0x1204
public:
	// MNetworkEnable
	C_UtlVectorEmbeddedNetworkVar< WeakPoint_t > m_vecWeakPoints; // 0x1250	
	// MNetworkEnable
	bool m_bMinion; // 0x12b8	
private:
	[[maybe_unused]] uint8_t __pad12b9[0x3]; // 0x12b9
public:
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hLookTarget; // 0x12bc	
	// MNetworkEnable
	// MNetworkUserGroup "CCitadelAbilityComponent"
	// MNetworkAlias "CCitadelAbilityComponent"
	// MNetworkTypeAlias "CCitadelAbilityComponent"
	CCitadelAbilityComponent m_CCitadelAbilityComponent; // 0x12c0	
};

