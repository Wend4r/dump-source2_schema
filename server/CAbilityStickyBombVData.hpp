#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1680
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityStickyBombVData : public CitadelAbilityVData
{
public:
	// MPropertyGroupName "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_BombAttachedModifier; // 0x1568	
	CEmbeddedSubclass< CCitadelModifier > m_KillCheckModifier; // 0x1578	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CastBombParticle; // 0x1588	
	// MPropertyStartGroup "Gameplay"
	float m_flPostRangeGravityScale; // 0x1668	
	float m_flAllyCollideRadius; // 0x166c	
	float m_flBombDragStartRange; // 0x1670	
	float m_flBombDragStartValue; // 0x1674	
	float m_flBombDragEndValue; // 0x1678	
	float m_flAllyTargetRangeMult; // 0x167c	
};

