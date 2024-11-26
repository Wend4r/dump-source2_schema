#pragma once

#include <cstdint>

struct ragdoll_t;
struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xbe0
// Has VTable
// 
// MNetworkVarNames "Vector m_ragPos"
// MNetworkVarNames "QAngle m_ragAngles"
// MNetworkVarNames "EHANDLE m_hRagdollSource"
// MNetworkVarNames "float32 m_flBlendWeight"
class CRagdollProp : public CBaseAnimGraph
{
private:
	[[maybe_unused]] uint8_t __pad0a40[0x8]; // 0xa40
public:
	ragdoll_t m_ragdoll; // 0xa48	
	bool m_bStartDisabled; // 0xa80	
private:
	[[maybe_unused]] uint8_t __pad0a81[0x7]; // 0xa81
public:
	// MNetworkEnable
	// MNetworkEncoder "coord"
	CNetworkUtlVectorBase< Vector > m_ragPos; // 0xa88	
	// MNetworkEnable
	// MNetworkEncoder "qangle"
	// MNetworkBitCount "13"
	CNetworkUtlVectorBase< QAngle > m_ragAngles; // 0xaa0	
	// MNetworkEnable
	CHandle< CBaseEntity > m_hRagdollSource; // 0xab8	
	uint32_t m_lastUpdateTickCount; // 0xabc	
	bool m_allAsleep; // 0xac0	
	bool m_bFirstCollisionAfterLaunch; // 0xac1	
private:
	[[maybe_unused]] uint8_t __pad0ac2[0x2]; // 0xac2
public:
	CHandle< CBaseEntity > m_hDamageEntity; // 0xac4	
	CHandle< CBaseEntity > m_hKiller; // 0xac8	
	CHandle< CBasePlayerPawn > m_hPhysicsAttacker; // 0xacc	
	GameTime_t m_flLastPhysicsInfluenceTime; // 0xad0	
	GameTime_t m_flFadeOutStartTime; // 0xad4	
	float m_flFadeTime; // 0xad8	
	Vector m_vecLastOrigin; // 0xadc	
	GameTime_t m_flAwakeTime; // 0xae8	
	GameTime_t m_flLastOriginChangeTime; // 0xaec	
	CUtlSymbolLarge m_strOriginClassName; // 0xaf0	
	CUtlSymbolLarge m_strSourceClassName; // 0xaf8	
	bool m_bHasBeenPhysgunned; // 0xb00	
	bool m_bShouldTeleportPhysics; // 0xb01	
private:
	[[maybe_unused]] uint8_t __pad0b02[0x2]; // 0xb02
public:
	// MNetworkEnable
	// MNetworkBitCount "8"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "1.000000"
	// MNetworkEncodeFlags "1"
	float m_flBlendWeight; // 0xb04	
	float m_flDefaultFadeScale; // 0xb08	
private:
	[[maybe_unused]] uint8_t __pad0b0c[0x4]; // 0xb0c
public:
	CUtlVector< Vector > m_ragdollMins; // 0xb10	
	CUtlVector< Vector > m_ragdollMaxs; // 0xb28	
	bool m_bShouldDeleteActivationRecord; // 0xb40	
private:
	[[maybe_unused]] uint8_t __pad0b41[0x5f]; // 0xb41
public:
	bool m_bValidatePoweredRagdollPose; // 0xba0	
	
	// Datamap fields:
	// void m_ragdoll.boneIndex; // 0xa60
	// void InputEnableMotion; // 0x0
	// void InputDisableMotion; // 0x0
	// void InputTurnOn; // 0x0
	// void InputTurnOff; // 0x0
	// float InputFadeAndRemove; // 0x0
	// void CRagdollPropSetDebrisThink; // 0x0
	// void CRagdollPropClearFlagsThink; // 0x0
	// void CRagdollPropFadeOutThink; // 0x0
	// void CRagdollPropSettleThink; // 0x0
	// void CRagdollPropAttachedItemsThink; // 0x0
	// void CRagdollPropRagdollTouch; // 0x0
	// void m_ragdoll.list; // 0xa48
	// bool m_ragdoll.allowStretch; // 0xa78
};

