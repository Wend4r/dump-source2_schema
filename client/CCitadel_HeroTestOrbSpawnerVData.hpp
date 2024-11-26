#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x2e0
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_HeroTestOrbSpawnerVData : public CEntitySubclassVDataBase
{
public:
	// MPropertyStartGroup "Gameplay"
	int32_t m_iGoldValue; // 0x28	
	float m_flSpawnRate; // 0x2c	
	float m_flFirstSpawnTime; // 0x30	
private:
	[[maybe_unused]] uint8_t __pad0034[0x4]; // 0x34
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_hModel; // 0x38	
	float m_flModelScale; // 0x118	
	float m_flSpawnOffset; // 0x11c	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AmbientParticle; // 0x120	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SpawnParticle; // 0x200	
};

