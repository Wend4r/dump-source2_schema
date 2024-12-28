#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1838
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityHornetLeapVData : public CitadelAbilityVData
{
public:
	float m_flChannelingAirDrag; // 0x1568	
	float m_flChannelingMaxFallSpeed; // 0x156c	
	float m_flVerticalMoveSpeedPercent; // 0x1570	
	float m_flAirDrag; // 0x1574	
	float m_flAirAcceleration; // 0x1578	
	float m_flLaunchAirDrag; // 0x157c	
	float m_flLaunchTime; // 0x1580	
	float m_flMoveSpeedAboveBaseScale; // 0x1584	
	// MPropertyGroupName "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_LeapModifier; // 0x1588	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DustParticle; // 0x1598	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TrailParticle; // 0x1678	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CastParticle; // 0x1758	
};

