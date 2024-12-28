#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xba8
// Has VTable
// 
// MNetworkVarNames "GameTime_t m_flNextPrimaryAttack"
// MNetworkVarNames "int32 m_iClip"
// MNetworkVarNames "int32 m_iBonusClip"
// MNetworkVarNames "float m_flSpreadPenalty"
// MNetworkVarNames "GameTime_t m_flZoomTime"
// MNetworkVarNames "GameTime_t m_flZoomOutTime"
// MNetworkVarNames "int8 m_iSpreadIndex"
// MNetworkVarNames "int16 m_nShotRecoilIndex"
// MNetworkVarNames "GameTime_t m_flNextShotRecoilRecoveryTime"
// MNetworkVarNames "bool m_bIsZoomed"
// MNetworkVarNames "uint8 m_nBurstShotsRemaining"
// MNetworkVarNames "uint32 m_nShotNumber"
// MNetworkVarNames "bool m_bInReload"
// MNetworkVarNames "bool m_bSingleShotReloadFirstBullet"
// MNetworkVarNames "GameTime_t m_reloadQueuedStartTime"
// MNetworkVarNames "GameTime_t m_flReloadAvailableTime"
// MNetworkVarNames "bool m_bCanActiveReload"
// MNetworkVarNames "GameTime_t m_flLastAttackTime"
// MNetworkVarNames "GameTime_t m_flNextAttackDelayStartTime"
// MNetworkVarNames "GameTime_t m_flNextAttackDelayEndTime"
// MNetworkVarNames "float m_flAttackDelayPauseTotalTime"
// MNetworkVarNames "GameTime_t m_flAttackDelayPauseEndTime"
// MNetworkVarNames "ENextAttackDelayReason_t m_eNextAttackDelayReason"
// MNetworkVarNames "bool m_bInputPressedWhileSelected"
// MNetworkVarNames "EFireMode_t m_eActiveFireMode"
class CCitadel_Ability_PrimaryWeapon : public CCitadelBaseAbility
{
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flNextPrimaryAttack; // 0xaf8	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	// MNetworkSerializer "minusone"
	// MNetworkPriority "32"
	int32_t m_iClip; // 0xafc	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	// MNetworkSerializer "minusone"
	// MNetworkPriority "32"
	int32_t m_iBonusClip; // 0xb00	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	float m_flSpreadPenalty; // 0xb04	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flZoomTime; // 0xb08	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flZoomOutTime; // 0xb0c	
	// MNetworkEnable
	// MNetworkUserGroup "LocalWeaponExclusive"
	int8_t m_iSpreadIndex; // 0xb10	
private:
	[[maybe_unused]] uint8_t __pad0b11[0x1]; // 0xb11
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalWeaponExclusive"
	int16_t m_nShotRecoilIndex; // 0xb12	
	// MNetworkEnable
	// MNetworkUserGroup "LocalWeaponExclusive"
	GameTime_t m_flNextShotRecoilRecoveryTime; // 0xb14	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	bool m_bIsZoomed; // 0xb18	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	uint8_t m_nBurstShotsRemaining; // 0xb19	
private:
	[[maybe_unused]] uint8_t __pad0b1a[0x2]; // 0xb1a
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	uint32_t m_nShotNumber; // 0xb1c	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	bool m_bInReload; // 0xb20	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	bool m_bSingleShotReloadFirstBullet; // 0xb21	
private:
	[[maybe_unused]] uint8_t __pad0b22[0x2]; // 0xb22
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalWeaponExclusive"
	GameTime_t m_reloadQueuedStartTime; // 0xb24	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flReloadAvailableTime; // 0xb28	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	bool m_bCanActiveReload; // 0xb2c	
private:
	[[maybe_unused]] uint8_t __pad0b2d[0x3]; // 0xb2d
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flLastAttackTime; // 0xb30	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flNextAttackDelayStartTime; // 0xb34	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flNextAttackDelayEndTime; // 0xb38	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	float m_flAttackDelayPauseTotalTime; // 0xb3c	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flAttackDelayPauseEndTime; // 0xb40	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	ENextAttackDelayReason_t m_eNextAttackDelayReason; // 0xb44	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	bool m_bInputPressedWhileSelected; // 0xb48	
private:
	[[maybe_unused]] uint8_t __pad0b49[0x3]; // 0xb49
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	EFireMode_t m_eActiveFireMode; // 0xb4c	
	QAngle m_angRecoilAngles; // 0xb50	
	QAngle m_angRecoilToAdd; // 0xb5c	
	QAngle m_angRecoilRecovery; // 0xb68	
	GameTime_t m_flRecoilStartTime; // 0xb74	
	float m_flRecoilRecoverySpeed; // 0xb78	
	float m_flAddApproachSpeed; // 0xb7c	
	bool m_bFireBackwards; // 0xb80	
private:
	[[maybe_unused]] uint8_t __pad0b81[0x3]; // 0xb81
public:
	float m_currentSpread; // 0xb84	
	float m_currentMaxSpread; // 0xb88	
	float m_currentFireSpread; // 0xb8c	
	float m_flCurrentSpinRate; // 0xb90	
private:
	[[maybe_unused]] uint8_t __pad0b94[0x4]; // 0xb94
public:
	float m_fFireDuration; // 0xb98	
private:
	[[maybe_unused]] uint8_t __pad0b9c[0x1]; // 0xb9c
public:
	bool m_bFireOnEmpty; // 0xb9d	
	bool m_bHasReleasedForSemiAuto; // 0xb9e	
private:
	[[maybe_unused]] uint8_t __pad0b9f[0x1]; // 0xb9f
public:
	GameTime_t m_flNextDisarmSound; // 0xba0	
	int32_t m_nClipSizeBeforeSwap; // 0xba4	
};

