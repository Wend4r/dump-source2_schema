#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xd70
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
class CCitadel_Ability_PrimaryWeapon : public C_CitadelBaseAbility
{
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flNextPrimaryAttack; // 0xc98	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	// MNetworkSerializer "minusone"
	// MNetworkPriority "32"
	int32_t m_iClip; // 0xc9c	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	// MNetworkSerializer "minusone"
	// MNetworkPriority "32"
	int32_t m_iBonusClip; // 0xca0	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	float m_flSpreadPenalty; // 0xca4	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flZoomTime; // 0xca8	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flZoomOutTime; // 0xcac	
	// MNetworkEnable
	// MNetworkUserGroup "LocalWeaponExclusive"
	int8_t m_iSpreadIndex; // 0xcb0	
private:
	[[maybe_unused]] uint8_t __pad0cb1[0x1]; // 0xcb1
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalWeaponExclusive"
	int16_t m_nShotRecoilIndex; // 0xcb2	
	// MNetworkEnable
	// MNetworkUserGroup "LocalWeaponExclusive"
	GameTime_t m_flNextShotRecoilRecoveryTime; // 0xcb4	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	bool m_bIsZoomed; // 0xcb8	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	uint8_t m_nBurstShotsRemaining; // 0xcb9	
private:
	[[maybe_unused]] uint8_t __pad0cba[0x2]; // 0xcba
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	uint32_t m_nShotNumber; // 0xcbc	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	bool m_bInReload; // 0xcc0	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	bool m_bSingleShotReloadFirstBullet; // 0xcc1	
private:
	[[maybe_unused]] uint8_t __pad0cc2[0x2]; // 0xcc2
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalWeaponExclusive"
	GameTime_t m_reloadQueuedStartTime; // 0xcc4	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flReloadAvailableTime; // 0xcc8	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	bool m_bCanActiveReload; // 0xccc	
private:
	[[maybe_unused]] uint8_t __pad0ccd[0x3]; // 0xccd
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flLastAttackTime; // 0xcd0	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flNextAttackDelayStartTime; // 0xcd4	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flNextAttackDelayEndTime; // 0xcd8	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	float m_flAttackDelayPauseTotalTime; // 0xcdc	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flAttackDelayPauseEndTime; // 0xce0	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	ENextAttackDelayReason_t m_eNextAttackDelayReason; // 0xce4	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	bool m_bInputPressedWhileSelected; // 0xce8	
private:
	[[maybe_unused]] uint8_t __pad0ce9[0x3]; // 0xce9
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	EFireMode_t m_eActiveFireMode; // 0xcec	
	QAngle m_angRecoilAngles; // 0xcf0	
	QAngle m_angRecoilToAdd; // 0xcfc	
	QAngle m_angRecoilRecovery; // 0xd08	
	GameTime_t m_flRecoilStartTime; // 0xd14	
	float m_flRecoilRecoverySpeed; // 0xd18	
	float m_flAddApproachSpeed; // 0xd1c	
	bool m_bFireBackwards; // 0xd20	
private:
	[[maybe_unused]] uint8_t __pad0d21[0x3]; // 0xd21
public:
	float m_currentSpread; // 0xd24	
	float m_currentMaxSpread; // 0xd28	
	float m_currentFireSpread; // 0xd2c	
	float m_flCurrentSpinRate; // 0xd30	
private:
	[[maybe_unused]] uint8_t __pad0d34[0x4]; // 0xd34
public:
	float m_fFireDuration; // 0xd38	
private:
	[[maybe_unused]] uint8_t __pad0d3c[0x1]; // 0xd3c
public:
	bool m_bFireOnEmpty; // 0xd3d	
	bool m_bHasReleasedForSemiAuto; // 0xd3e	
private:
	[[maybe_unused]] uint8_t __pad0d3f[0x1]; // 0xd3f
public:
	GameTime_t m_flNextDisarmSound; // 0xd40	
};

