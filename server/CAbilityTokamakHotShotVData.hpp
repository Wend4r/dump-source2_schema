#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1938
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityTokamakHotShotVData : public CitadelAbilityVData
{
public:
	// MPropertyGroupName "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_LaserModifier; // 0x1568	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strLaserStartSound; // 0x1578	
	CSoundEventName m_strLaserEndSound; // 0x1588	
	CSoundEventName m_strLaserLoopSound; // 0x1598	
	CSoundEventName m_strLaserHitSound; // 0x15a8	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ChargeParticle; // 0x15b8	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BeamParticle; // 0x1698	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_HitParticle; // 0x1778	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_GroundParticle; // 0x1858	
};

