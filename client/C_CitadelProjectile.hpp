#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x8e8
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
	[[maybe_unused]] uint8_t __pad0860[0xc]; // 0x860
public:
	float m_flMaxDistance; // 0x86c	
	float m_flArmingTime; // 0x870	
	float m_flChargeAmount; // 0x874	
	bool m_bCollideWithThrower; // 0x878	
	bool m_bNewCollideWithThrower; // 0x879	
private:
	[[maybe_unused]] uint8_t __pad087a[0xe]; // 0x87a
public:
	float m_flTickSoundInterval; // 0x888	
private:
	[[maybe_unused]] uint8_t __pad088c[0x4]; // 0x88c
public:
	// MNetworkEnable
	Vector m_vInitialVelocity; // 0x890	
	// MNetworkEnable
	Vector m_vInitialPosition; // 0x89c	
	// MNetworkEnable
	CUtlStringToken m_abilityID; // 0x8a8	
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hThrower; // 0x8ac	
	// MNetworkEnable
	CUtlSymbolLarge m_sParticleName; // 0x8b0	
	// MNetworkEnable
	Vector m_vecSpawnPosition; // 0x8b8	
	// MNetworkEnable
	float m_flProjectileSpeed; // 0x8c4	
	// MNetworkEnable
	float m_flMaxLifetime; // 0x8c8	
private:
	[[maybe_unused]] uint8_t __pad08cc[0x4]; // 0x8cc
public:
	// MNetworkEnable
	// MNetworkChangeCallback "ParticleRadiusChanged"
	float m_flParticleRadius; // 0x8d0	
private:
	[[maybe_unused]] uint8_t __pad08d4[0xc]; // 0x8d4
public:
	float m_flPreviousTimeScale; // 0x8e0	
};

