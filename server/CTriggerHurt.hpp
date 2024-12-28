#pragma once

#include <cstdint>

struct GameTime_t;
struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xa18
// Has VTable
class CTriggerHurt : public CBaseTrigger
{
public:
	float m_flOriginalDamage; // 0x978	
	float m_flDamage; // 0x97c	
	float m_flDamageCap; // 0x980	
	GameTime_t m_flLastDmgTime; // 0x984	
	float m_flForgivenessDelay; // 0x988	
	DamageTypes_t m_bitsDamageInflict; // 0x98c	
	int32_t m_damageModel; // 0x990	
	bool m_bNoDmgForce; // 0x994	
private:
	[[maybe_unused]] uint8_t __pad0995[0x3]; // 0x995
public:
	Vector m_vDamageForce; // 0x998	
	bool m_thinkAlways; // 0x9a4	
private:
	[[maybe_unused]] uint8_t __pad09a5[0x3]; // 0x9a5
public:
	float m_hurtThinkPeriod; // 0x9a8	
private:
	[[maybe_unused]] uint8_t __pad09ac[0x4]; // 0x9ac
public:
	CEntityIOOutput m_OnHurt; // 0x9b0	
	CEntityIOOutput m_OnHurtPlayer; // 0x9d8	
	CUtlVector< CHandle< CBaseEntity > > m_hurtEntities; // 0xa00	
	
	// Datamap fields:
	// void CTriggerHurtRadiationThink; // 0x0
	// void CTriggerHurtHurtThink; // 0x0
	// void CTriggerHurtNavThink; // 0x0
};

