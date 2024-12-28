#pragma once

#include <cstdint>

struct ragdoll_t;
struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xbd8
// Has VTable
// 
// MNetworkVarNames "Vector m_ragPos"
// MNetworkVarNames "QAngle m_ragAngles"
// MNetworkVarNames "EHANDLE m_hRagdollSource"
// MNetworkVarNames "float32 m_flBlendWeight"
class CRagdollProp : public CBaseAnimGraph
{
private:
	[[maybe_unused]] uint8_t __pad0a38[0x8]; // 0xa38
public:
	ragdoll_t m_ragdoll; // 0xa40	
	bool m_bStartDisabled; // 0xa78	
private:
	[[maybe_unused]] uint8_t __pad0a79[0x7]; // 0xa79
public:
	// MNetworkEnable
	// MNetworkEncoder "coord"
	CNetworkUtlVectorBase< Vector > m_ragPos; // 0xa80	
	// MNetworkEnable
	// MNetworkEncoder "qangle"
	// MNetworkBitCount "13"
	CNetworkUtlVectorBase< QAngle > m_ragAngles; // 0xa98	
	// MNetworkEnable
	CHandle< CBaseEntity > m_hRagdollSource; // 0xab0	
	uint32_t m_lastUpdateTickCount; // 0xab4	
	bool m_allAsleep; // 0xab8	
	bool m_bFirstCollisionAfterLaunch; // 0xab9	
private:
	[[maybe_unused]] uint8_t __pad0aba[0x2]; // 0xaba
public:
	CHandle< CBaseEntity > m_hDamageEntity; // 0xabc	
	CHandle< CBaseEntity > m_hKiller; // 0xac0	
	CHandle< CBasePlayerPawn > m_hPhysicsAttacker; // 0xac4	
	GameTime_t m_flLastPhysicsInfluenceTime; // 0xac8	
	GameTime_t m_flFadeOutStartTime; // 0xacc	
	float m_flFadeTime; // 0xad0	
	Vector m_vecLastOrigin; // 0xad4	
	GameTime_t m_flAwakeTime; // 0xae0	
	GameTime_t m_flLastOriginChangeTime; // 0xae4	
	CUtlSymbolLarge m_strOriginClassName; // 0xae8	
	CUtlSymbolLarge m_strSourceClassName; // 0xaf0	
	bool m_bHasBeenPhysgunned; // 0xaf8	
	bool m_bShouldTeleportPhysics; // 0xaf9	
private:
	[[maybe_unused]] uint8_t __pad0afa[0x2]; // 0xafa
public:
	// MNetworkEnable
	// MNetworkBitCount "8"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "1.000000"
	// MNetworkEncodeFlags "1"
	float m_flBlendWeight; // 0xafc	
	float m_flDefaultFadeScale; // 0xb00	
private:
	[[maybe_unused]] uint8_t __pad0b04[0x4]; // 0xb04
public:
	CUtlVector< Vector > m_ragdollMins; // 0xb08	
	CUtlVector< Vector > m_ragdollMaxs; // 0xb20	
	bool m_bShouldDeleteActivationRecord; // 0xb38	
private:
	[[maybe_unused]] uint8_t __pad0b39[0x5f]; // 0xb39
public:
	bool m_bValidatePoweredRagdollPose; // 0xb98	
	
	// Datamap fields:
	// void m_ragdoll.boneIndex; // 0xa58
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
	// void m_ragdoll.list; // 0xa40
	// bool m_ragdoll.allowStretch; // 0xa70
};

