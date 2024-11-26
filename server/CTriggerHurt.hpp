#pragma once

#include <cstdint>

struct GameTime_t;
struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xa20
// Has VTable
class CTriggerHurt : public CBaseTrigger
{
public:
	float m_flOriginalDamage; // 0x980	
	float m_flDamage; // 0x984	
	float m_flDamageCap; // 0x988	
	GameTime_t m_flLastDmgTime; // 0x98c	
	float m_flForgivenessDelay; // 0x990	
	DamageTypes_t m_bitsDamageInflict; // 0x994	
	int32_t m_damageModel; // 0x998	
	bool m_bNoDmgForce; // 0x99c	
private:
	[[maybe_unused]] uint8_t __pad099d[0x3]; // 0x99d
public:
	Vector m_vDamageForce; // 0x9a0	
	bool m_thinkAlways; // 0x9ac	
private:
	[[maybe_unused]] uint8_t __pad09ad[0x3]; // 0x9ad
public:
	float m_hurtThinkPeriod; // 0x9b0	
private:
	[[maybe_unused]] uint8_t __pad09b4[0x4]; // 0x9b4
public:
	CEntityIOOutput m_OnHurt; // 0x9b8	
	CEntityIOOutput m_OnHurtPlayer; // 0x9e0	
	CUtlVector< CHandle< CBaseEntity > > m_hurtEntities; // 0xa08	
	
	// Datamap fields:
	// void CTriggerHurtRadiationThink; // 0x0
	// void CTriggerHurtHurtThink; // 0x0
	// void CTriggerHurtNavThink; // 0x0
};

