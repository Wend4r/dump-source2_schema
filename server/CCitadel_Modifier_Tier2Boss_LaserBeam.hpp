#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x2f0
// Has VTable
class CCitadel_Modifier_Tier2Boss_LaserBeam : public CCitadelModifier
{
private:
	[[maybe_unused]] uint8_t __pad00c0[0xa8]; // 0xc0
public:
	bool m_bPreview; // 0x168	
private:
	[[maybe_unused]] uint8_t __pad0169[0xb]; // 0x169
public:
	GameTime_t m_flSoundStartTime; // 0x174	
private:
	[[maybe_unused]] uint8_t __pad0178[0x4]; // 0x178
public:
	Vector m_vStart; // 0x17c	
	Vector m_vEnd; // 0x188	
	Vector m_vPrevEnd; // 0x194	
	float m_flAngleBetweenTrace; // 0x1a0	
	float m_flDamagePerTick; // 0x1a4	
	float m_flCreepDamagePerTick; // 0x1a8	
	GameTime_t m_flNextDamageTick; // 0x1ac	
	CUtlVector< CHandle< CBaseEntity > > m_vecEntitiesHit; // 0x1b0	
	float m_flDamageTickRate; // 0x1c8	
	GameTime_t m_flLastShakeTime; // 0x1cc	
	bool m_bSweepRightFirst; // 0x1d0	
private:
	[[maybe_unused]] uint8_t __pad01d1[0x3]; // 0x1d1
public:
	QAngle m_angBeamAim; // 0x1d4	
	Vector m_vecBeamTarget; // 0x1e0	
	GameTime_t m_flLastBeamUpdateTime; // 0x1ec	
private:
	[[maybe_unused]] uint8_t __pad01f0[0x18]; // 0x1f0
public:
	GameTime_t m_flTargetingTaskStartTime; // 0x208	
	float m_flTrackVel; // 0x20c	
};

