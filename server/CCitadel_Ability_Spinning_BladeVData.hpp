#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1788
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_Spinning_BladeVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // 0x1568	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CatchIndicator; // 0x1578	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CatchParticle; // 0x1658	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strThrowSound; // 0x1738	
	CSoundEventName m_strReturnSound; // 0x1748	
	CSoundEventName m_strCatchSound; // 0x1758	
	CSoundEventName m_strFailSound; // 0x1768	
	CSoundEventName m_strHitSound; // 0x1778	
};

