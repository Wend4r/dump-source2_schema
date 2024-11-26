#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1780
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_Spinning_BladeVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // 0x1560	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CatchIndicator; // 0x1570	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CatchParticle; // 0x1650	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strThrowSound; // 0x1730	
	CSoundEventName m_strReturnSound; // 0x1740	
	CSoundEventName m_strCatchSound; // 0x1750	
	CSoundEventName m_strFailSound; // 0x1760	
	CSoundEventName m_strHitSound; // 0x1770	
};

