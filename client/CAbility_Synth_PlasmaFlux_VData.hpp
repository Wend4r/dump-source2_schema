#pragma once

#include <cstdint>

struct CitadelCameraOperationsSequence_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1800
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbility_Synth_PlasmaFlux_VData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CBaseModifier > m_WeaponDamageBonusModifier; // 0x1568	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TeleportTrailParticle; // 0x1578	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ImpactParticle; // 0x1658	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strCasterLoopingSound; // 0x1738	
	CSoundEventName m_strProjectileExpireSound; // 0x1748	
	CSoundEventName m_strImpactSound; // 0x1758	
	CSoundEventName m_strTimerSound; // 0x1768	
	// MPropertyStartGroup "Camera"
	CitadelCameraOperationsSequence_t m_cameraSequenceTeleport; // 0x1778	
};

