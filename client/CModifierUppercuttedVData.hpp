#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x748
// Has VTable
// 
// MGetKV3ClassDefaults
class CModifierUppercuttedVData : public CCitadelModifierVData
{
public:
	// MPropertyGroupName "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_StunParticle; // 0x630	
	// MPropertyGroupName "Sounds"
	CSoundEventName m_strStunSound; // 0x710	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_NoExplodeModifier; // 0x720	
	CEmbeddedSubclass< CCitadelModifier > m_ExplodeDebuffModifier; // 0x730	
	// MPropertyStartGroup "Gameplay"
	float m_flEnemyNoAirDashDuration; // 0x740	
};

