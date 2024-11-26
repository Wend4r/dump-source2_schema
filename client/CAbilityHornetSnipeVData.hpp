#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1968
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityHornetSnipeVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AssassinateShotParticle; // 0x1560	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AssassinateShotParticleOwnerOnly; // 0x1640	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_LaserSightParticle; // 0x1720	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_LaserSightParticleOwnerOnly; // 0x1800	
	// MPropertyGroupName "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_SnipeModifier; // 0x18e0	
	CEmbeddedSubclass< CCitadelModifier > m_BuffOnKillModifier; // 0x18f0	
	CEmbeddedSubclass< CCitadelModifier > m_GlowEnemyModifier; // 0x1900	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strSnipeImpactSound; // 0x1910	
	CSoundEventName m_strZoomIn; // 0x1920	
	CSoundEventName m_strZoomOut; // 0x1930	
	// MPropertyStartGroup "+Snipe Properties"
	float m_flMinScopeTimeToShoot; // 0x1940	
	float m_flFadeToBlackTime; // 0x1944	
	float m_flFoVChangeTime; // 0x1948	
private:
	[[maybe_unused]] uint8_t __pad194c[0x4]; // 0x194c
public:
	CUtlVector< float32 > m_ScopeFoV; // 0x1950	
};

