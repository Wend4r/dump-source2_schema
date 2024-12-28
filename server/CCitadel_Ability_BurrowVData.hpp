#pragma once

#include <cstdint>

struct CitadelCameraOperationsSequence_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x19a8
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_BurrowVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeParticle; // 0x1568	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BurrowStartParticle; // 0x1648	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BurrowEndParticle; // 0x1728	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BurrowInGroundParticle; // 0x1808	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_BurrowModifier; // 0x18e8	
	CEmbeddedSubclass< CCitadelModifier > m_SpinModifier; // 0x18f8	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strBurrowEndSound; // 0x1908	
	// MPropertyStartGroup "+Burrow Properties"
	float m_flChannelEndEnemyPopUpForce; // 0x1918	
	float m_flChannelEndEnemyPopUpCylinderHeight; // 0x191c	
	// MPropertyDescription "Spin Camera Controller that matches the modifier for client"
	CitadelCameraOperationsSequence_t m_cameraSpinStart; // 0x1920	
};

