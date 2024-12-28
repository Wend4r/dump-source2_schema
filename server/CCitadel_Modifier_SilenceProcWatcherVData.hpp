#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x778
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_SilenceProcWatcherVData : public CCitadel_Modifier_BaseEventProcVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadel_Modifier_Base_Buildup > m_BuildUpModifier; // 0x660	
	CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // 0x670	
	CEmbeddedSubclass< CCitadelModifier > m_ImmunityModifier; // 0x680	
	CUtlString m_sInstantProcIfCasterHasModifier; // 0x690	
	// MPropertyGroupName "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TracerParticle; // 0x698	
};

