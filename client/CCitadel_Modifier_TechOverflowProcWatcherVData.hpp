#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x738
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_TechOverflowProcWatcherVData : public CCitadel_Modifier_BaseEventProcVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadel_Modifier_Base_Buildup > m_BuildUpModifier; // 0x638	
	CEmbeddedSubclass< CCitadelModifier > m_ProcModifier; // 0x648	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BuildupSuccessEffect; // 0x658	
};

