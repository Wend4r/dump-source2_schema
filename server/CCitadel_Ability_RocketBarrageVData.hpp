#pragma once

#include <cstdint>

struct CitadelCameraOperationsSequence_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1708
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_RocketBarrageVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_BarrageModifier; // 0x1568	
	CEmbeddedSubclass< CCitadelModifier > m_MoveSlowModifier; // 0x1578	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ImpactParticle; // 0x1588	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strExplodeSound; // 0x1668	
	// MPropertyStartGroup "Camera"
	CitadelCameraOperationsSequence_t m_cameraSequenceSelected; // 0x1678	
	// MPropertyStartGroup "+Rocket Barrage Properties"
	float m_flMoveSpeedReductionPct; // 0x1700	
	float m_flHeightTestDistance; // 0x1704	
};

