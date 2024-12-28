#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1970
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityHornetSnipeVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AssassinateShotParticle; // 0x1568	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AssassinateShotParticleOwnerOnly; // 0x1648	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_LaserSightParticle; // 0x1728	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_LaserSightParticleOwnerOnly; // 0x1808	
	// MPropertyGroupName "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_SnipeModifier; // 0x18e8	
	CEmbeddedSubclass< CCitadelModifier > m_BuffOnKillModifier; // 0x18f8	
	CEmbeddedSubclass< CCitadelModifier > m_GlowEnemyModifier; // 0x1908	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strSnipeImpactSound; // 0x1918	
	CSoundEventName m_strZoomIn; // 0x1928	
	CSoundEventName m_strZoomOut; // 0x1938	
	// MPropertyStartGroup "+Snipe Properties"
	float m_flMinScopeTimeToShoot; // 0x1948	
	float m_flFadeToBlackTime; // 0x194c	
	float m_flFoVChangeTime; // 0x1950	
private:
	[[maybe_unused]] uint8_t __pad1954[0x4]; // 0x1954
public:
	CUtlVector< float32 > m_ScopeFoV; // 0x1958	
};

