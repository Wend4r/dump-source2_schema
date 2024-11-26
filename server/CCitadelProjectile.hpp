#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x870
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
	float m_flMaxDistance; // 0x7c0	
	float m_flArmingTime; // 0x7c4	
	float m_flChargeAmount; // 0x7c8	
	bool m_bCollideWithThrower; // 0x7cc	
	bool m_bNewCollideWithThrower; // 0x7cd	
private:
	[[maybe_unused]] uint8_t __pad07ce[0xa]; // 0x7ce
public:
	float m_flTickSoundInterval; // 0x7d8	
private:
	[[maybe_unused]] uint8_t __pad07dc[0x4]; // 0x7dc
public:
	Vector m_vLastAbsOrigin; // 0x7e0	
	Vector m_vLastAbsVelocity; // 0x7ec	
private:
	[[maybe_unused]] uint8_t __pad07f8[0x18]; // 0x7f8
public:
	CUtlVector< CHandle< CBaseEntity > > m_vecTargetToIgnore; // 0x810	
	bool m_bDetonateStarted; // 0x828	
private:
	[[maybe_unused]] uint8_t __pad0829[0x3]; // 0x829
public:
	// MNetworkEnable
	Vector m_vInitialVelocity; // 0x82c	
	// MNetworkEnable
	Vector m_vInitialPosition; // 0x838	
	// MNetworkEnable
	CUtlStringToken m_abilityID; // 0x844	
	// MNetworkEnable
	CHandle< CBaseEntity > m_hThrower; // 0x848	
private:
	[[maybe_unused]] uint8_t __pad084c[0x4]; // 0x84c
public:
	// MNetworkEnable
	CUtlSymbolLarge m_sParticleName; // 0x850	
	// MNetworkEnable
	Vector m_vecSpawnPosition; // 0x858	
	// MNetworkEnable
	float m_flProjectileSpeed; // 0x864	
	// MNetworkEnable
	float m_flMaxLifetime; // 0x868	
	// MNetworkEnable
	float m_flParticleRadius; // 0x86c	
};

