#pragma once

#include <cstdint>

struct CitadelCameraOperationsSequence_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1710
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbility_Mirage_Tornado_VData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TornadoCastParticle; // 0x1568	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_CasterModifier; // 0x1648	
	CEmbeddedSubclass< CCitadelModifier > m_WhirlwindEvasionModifier; // 0x1658	
	CEmbeddedSubclass< CCitadelModifier > m_TornadoAura; // 0x1668	
	CEmbeddedSubclass< CCitadelModifier > m_GrenadeTrailModifier; // 0x1678	
	// MPropertyStartGroup "Camera"
	CitadelCameraOperationsSequence_t m_cameraSequenceTravelingInTornado; // 0x1688	
};

