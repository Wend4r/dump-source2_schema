#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1830
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityPerchedPredatorVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeBaseParticle; // 0x1568	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeFriendlyParticle; // 0x1648	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeEnemyParticle; // 0x1728	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strExplodeSound; // 0x1808	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_ModifierDragEnemy; // 0x1818	
	// MPropertyStartGroup "Gameplay"
	float m_flOnHitDetonateTimer; // 0x1828	
	float m_flTraceTravelRadius; // 0x182c	
};

