#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x868
// Has VTable
// 
// MNetworkIncludeByName "m_flTimeScale"
// MNetworkOverride "m_flTimeScale"
// MNetworkOverride "m_flTimeScale"
// MNetworkVarNames "Vector m_vInitialVelocity"
// MNetworkVarNames "Vector m_vInitialPosition"
// MNetworkVarNames "AbilityID_t m_abilityID"
// MNetworkVarNames "EHANDLE m_hThrower"
// MNetworkVarNames "string_t m_sParticleName"
// MNetworkVarNames "Vector m_vecSpawnPosition"
// MNetworkVarNames "float m_flProjectileSpeed"
// MNetworkVarNames "float m_flMaxLifetime"
// MNetworkVarNames "float m_flParticleRadius"
class CCitadelProjectile : public CBaseModelEntity
{
public:
	float m_flMaxDistance; // 0x7b8	
	float m_flArmingTime; // 0x7bc	
	float m_flChargeAmount; // 0x7c0	
	bool m_bCollideWithThrower; // 0x7c4	
	bool m_bNewCollideWithThrower; // 0x7c5	
private:
	[[maybe_unused]] uint8_t __pad07c6[0xa]; // 0x7c6
public:
	float m_flTickSoundInterval; // 0x7d0	
private:
	[[maybe_unused]] uint8_t __pad07d4[0x4]; // 0x7d4
public:
	Vector m_vLastAbsOrigin; // 0x7d8	
	Vector m_vLastAbsVelocity; // 0x7e4	
private:
	[[maybe_unused]] uint8_t __pad07f0[0x18]; // 0x7f0
public:
	CUtlVector< CHandle< CBaseEntity > > m_vecTargetToIgnore; // 0x808	
	bool m_bDetonateStarted; // 0x820	
	bool m_bTouchDisabled; // 0x821	
private:
	[[maybe_unused]] uint8_t __pad0822[0x2]; // 0x822
public:
	// MNetworkEnable
	Vector m_vInitialVelocity; // 0x824	
	// MNetworkEnable
	Vector m_vInitialPosition; // 0x830	
	// MNetworkEnable
	CUtlStringToken m_abilityID; // 0x83c	
	// MNetworkEnable
	CHandle< CBaseEntity > m_hThrower; // 0x840	
private:
	[[maybe_unused]] uint8_t __pad0844[0x4]; // 0x844
public:
	// MNetworkEnable
	CUtlSymbolLarge m_sParticleName; // 0x848	
	// MNetworkEnable
	Vector m_vecSpawnPosition; // 0x850	
	// MNetworkEnable
	float m_flProjectileSpeed; // 0x85c	
	// MNetworkEnable
	float m_flMaxLifetime; // 0x860	
	// MNetworkEnable
	float m_flParticleRadius; // 0x864	
};

