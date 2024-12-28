#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x8e0
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
class C_CitadelProjectile : public C_BaseModelEntity
{
private:
	[[maybe_unused]] uint8_t __pad0858[0xc]; // 0x858
public:
	float m_flMaxDistance; // 0x864	
	float m_flArmingTime; // 0x868	
	float m_flChargeAmount; // 0x86c	
	bool m_bCollideWithThrower; // 0x870	
	bool m_bNewCollideWithThrower; // 0x871	
private:
	[[maybe_unused]] uint8_t __pad0872[0xe]; // 0x872
public:
	float m_flTickSoundInterval; // 0x880	
private:
	[[maybe_unused]] uint8_t __pad0884[0x4]; // 0x884
public:
	// MNetworkEnable
	Vector m_vInitialVelocity; // 0x888	
	// MNetworkEnable
	Vector m_vInitialPosition; // 0x894	
	// MNetworkEnable
	CUtlStringToken m_abilityID; // 0x8a0	
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hThrower; // 0x8a4	
	// MNetworkEnable
	CUtlSymbolLarge m_sParticleName; // 0x8a8	
	// MNetworkEnable
	Vector m_vecSpawnPosition; // 0x8b0	
	// MNetworkEnable
	float m_flProjectileSpeed; // 0x8bc	
	// MNetworkEnable
	float m_flMaxLifetime; // 0x8c0	
private:
	[[maybe_unused]] uint8_t __pad08c4[0x4]; // 0x8c4
public:
	// MNetworkEnable
	// MNetworkChangeCallback "ParticleRadiusChanged"
	float m_flParticleRadius; // 0x8c8	
private:
	[[maybe_unused]] uint8_t __pad08cc[0xc]; // 0x8cc
public:
	float m_flPreviousTimeScale; // 0x8d8	
};

