#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x17a8
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_IceBeamVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BeamParticle; // 0x1568	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_HitParticle; // 0x1648	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_SlowModifier; // 0x1728	
	CEmbeddedSubclass< CCitadel_Modifier_Base_Buildup > m_BuildupModifier; // 0x1738	
	CEmbeddedSubclass< CCitadelModifier > m_BuildupProcModifier; // 0x1748	
	// MPropertyStartGroup "Sound"
	CSoundEventName m_BeamStartSound; // 0x1758	
	CSoundEventName m_BeamStopSound; // 0x1768	
	CSoundEventName m_BeamPointStartLoopSound; // 0x1778	
	CSoundEventName m_BeamPointEndLoopSound; // 0x1788	
	CSoundEventName m_BeamPointClosestLoopSound; // 0x1798	
};

