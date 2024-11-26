#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1660
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityGarbageVData : public CitadelAbilityVData
{
public:
	// MPropertyGroupName "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_GarbageAuraModifier; // 0x1560	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeParticle; // 0x1570	
	// MPropertyStartGroup "+Vacuum Properties"
	float m_flAirSpeedMax; // 0x1650	
	float m_flFallSpeedMax; // 0x1654	
	float m_flAirDrag; // 0x1658	
	float m_flMaxMovespeed; // 0x165c	
};

