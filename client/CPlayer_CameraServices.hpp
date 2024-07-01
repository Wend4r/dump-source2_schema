#pragma once

#include <cstdint>

struct GameTick_t;
struct C_fogplayerparams_t;
struct audioparams_t;
struct fogparams_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x230
// Has VTable
// 
// MNetworkVarNames "GameTick_t m_nPunchAngleJoltTick"
// MNetworkVarNames "fogplayerparams_t m_PlayerFog"
// MNetworkVarNames "CHandle< CColorCorrection> m_hColorCorrectionCtrl"
// MNetworkVarNames "CHandle< CBaseEntity> m_hViewEntity"
// MNetworkVarNames "CHandle< CTonemapController2> m_hTonemapController"
// MNetworkVarNames "audioparams_t m_audio"
// MNetworkVarNames "CHandle<C_PostProcessingVolume> m_PostProcessingVolumes"
class CPlayer_CameraServices : public CPlayerPawnComponent
{
public:
	// MNetworkEnable
	// MNetworkPriority "32"
	// MNetworkEncoder "qangle_precise"
	// MNetworkChangeCallback "OnPunchChanged"
	QAngle m_vecPunchAngle; // 0x40	
private:
	[[maybe_unused]] uint8_t __pad004c[0xc]; // 0x4c
public:
	// MNetworkEnable
	// MNetworkEncoder "qangle_precise"
	QAngle m_vecPunchAngleVel; // 0x58	
private:
	[[maybe_unused]] uint8_t __pad0064[0xc]; // 0x64
public:
	GameTick_t m_nPunchAngleJoltTickClientSide; // 0x70	
	// MNetworkEnable
	// MNetworkChangeCallback "OnPunchJoltChanged"
	GameTick_t m_nPunchAngleJoltTick; // 0x74	
	// MNetworkEnable
	C_fogplayerparams_t m_PlayerFog; // 0x78	
	// MNetworkEnable
	CHandle< C_ColorCorrection > m_hColorCorrectionCtrl; // 0xb8	
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hViewEntity; // 0xbc	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerAndObserversExclusive"
	CHandle< C_TonemapController2 > m_hTonemapController; // 0xc0	
private:
	[[maybe_unused]] uint8_t __pad00c4[0x4]; // 0xc4
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerAndObserversExclusive"
	audioparams_t m_audio; // 0xc8	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerAndObserversExclusive"
	C_NetworkUtlVectorBase< CHandle< C_PostProcessingVolume > > m_PostProcessingVolumes; // 0x140	
	float m_flOldPlayerZ; // 0x158	
	float m_flOldPlayerViewOffsetZ; // 0x15c	
	fogparams_t m_CurrentFog; // 0x160	
	CHandle< C_FogController > m_hOldFogController; // 0x1c8	
	bool m_bOverrideFogColor[5]; // 0x1cc	
	Color m_OverrideFogColor[5]; // 0x1d1	
	bool m_bOverrideFogStartEnd[5]; // 0x1e5	
private:
	[[maybe_unused]] uint8_t __pad01ea[0x2]; // 0x1ea
public:
	float m_fOverrideFogStart[5]; // 0x1ec	
	float m_fOverrideFogEnd[5]; // 0x200	
	CHandle< C_PostProcessingVolume > m_hActivePostProcessingVolume; // 0x214	
	QAngle m_angDemoViewAngles; // 0x218	
};

