#pragma once

#include <cstdint>

struct CitadelCameraOperationsSequence_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1708
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbility_Mirage_Tornado_VData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TornadoCastParticle; // 0x1560	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_CasterModifier; // 0x1640	
	CEmbeddedSubclass< CCitadelModifier > m_WhirlwindEvasionModifier; // 0x1650	
	CEmbeddedSubclass< CCitadelModifier > m_TornadoAura; // 0x1660	
	CEmbeddedSubclass< CCitadelModifier > m_GrenadeTrailModifier; // 0x1670	
	// MPropertyStartGroup "Camera"
	CitadelCameraOperationsSequence_t m_cameraSequenceTravelingInTornado; // 0x1680	
};

