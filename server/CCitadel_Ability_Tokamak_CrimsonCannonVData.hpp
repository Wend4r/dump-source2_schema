#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1938
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_Tokamak_CrimsonCannonVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_LaserShot; // 0x1568	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ChargeParticle; // 0x1648	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CasterOnlyTargetParticle; // 0x1728	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_EnemyTargetedParticle; // 0x1808	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strEnemyBeenTargetedSound; // 0x18e8	
	CSoundEventName m_strCasterTargetSelectedSound; // 0x18f8	
	CSoundEventName m_strFireSound; // 0x1908	
	CSoundEventName m_strImpactSound; // 0x1918	
	CSoundEventName m_strBlockedSound; // 0x1928	
};

