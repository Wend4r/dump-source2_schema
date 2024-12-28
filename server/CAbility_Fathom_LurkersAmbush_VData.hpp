#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1688
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbility_Fathom_LurkersAmbush_VData : public CitadelAbilityVData
{
public:
	// MPropertyGroupName "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ChargeUpParticle; // 0x1568	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadel_Modifier_LurkersAmbush_Invis > m_InvisModifier; // 0x1648	
	CEmbeddedSubclass< CCitadelModifier > m_RegenModifier; // 0x1658	
	CEmbeddedSubclass< CCitadelModifier > m_ImmobilizeModifier; // 0x1668	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strSwapStarted; // 0x1678	
};

