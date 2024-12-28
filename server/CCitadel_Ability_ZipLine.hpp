#pragma once

#include <cstdint>

struct GameTime_t;
struct CNetworkVelocityVector;
struct AttachmentHandle_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xf78
// Has VTable
// 
// MNetworkVarNames "GameTime_t m_flTimeStartZipping"
// MNetworkVarNames "GameTime_t m_flTimeForKnockdownProtection"
// MNetworkVarNames "GameTime_t m_flTimeStopZipping"
// MNetworkVarNames "float m_flCasterSpeed"
// MNetworkVarNames "CNetworkVelocityVector m_vecInitialVel"
// MNetworkVarNames "Vector m_vecAttachPoint"
// MNetworkVarNames "EHANDLE m_pPrevNode"
// MNetworkVarNames "EHANDLE m_pNextNode"
// MNetworkVarNames "GameTime_t m_flTimeEnterState"
// MNetworkVarNames "GameTime_t m_flLatchTime"
// MNetworkVarNames "GameTime_t m_flDamagedTime"
// MNetworkVarNames "EAttachState_t m_eAttachState"
// MNetworkVarNames "int m_iAttachedZipLineLane"
// MNetworkVarNames "bool m_bDroppedFromZipline"
// MNetworkVarNames "Vector m_vAttachZipLineOffset"
// MNetworkVarNames "float m_flZiplineAirDrag"
class CCitadel_Ability_ZipLine : public CCitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0af8[0x3f0]; // 0xaf8
public:
	GameTime_t m_flActivatePressTime; // 0xee8	
	bool m_bThinking; // 0xeec	
	bool m_bMoveCollidedPushUp; // 0xeed	
private:
	[[maybe_unused]] uint8_t __pad0eee[0x6]; // 0xeee
public:
	// MNetworkEnable
	GameTime_t m_flTimeStartZipping; // 0xef4	
	// MNetworkEnable
	GameTime_t m_flTimeForKnockdownProtection; // 0xef8	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flTimeStopZipping; // 0xefc	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	float m_flCasterSpeed; // 0xf00	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	CNetworkVelocityVector m_vecInitialVel; // 0xf04	
private:
	[[maybe_unused]] uint8_t __pad0f2c[0xc]; // 0xf2c
public:
	// MNetworkEnable
	Vector m_vecAttachPoint; // 0xf38	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	CHandle< CBaseEntity > m_pPrevNode; // 0xf44	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	CHandle< CBaseEntity > m_pNextNode; // 0xf48	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flTimeEnterState; // 0xf4c	
	// MNetworkEnable
	GameTime_t m_flLatchTime; // 0xf50	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flDamagedTime; // 0xf54	
	// MNetworkEnable
	// MNetworkChangeCallback "ZiplingAttachStateChanged"
	EAttachState_t m_eAttachState; // 0xf58	
	// MNetworkEnable
	int32_t m_iAttachedZipLineLane; // 0xf5c	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	bool m_bDroppedFromZipline; // 0xf60	
	AttachmentHandle_t m_hAttachZipLine; // 0xf61	
private:
	[[maybe_unused]] uint8_t __pad0f62[0x2]; // 0xf62
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	Vector m_vAttachZipLineOffset; // 0xf64	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	float m_flZiplineAirDrag; // 0xf70	
};

