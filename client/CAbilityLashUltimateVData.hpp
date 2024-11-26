#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1a40
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityLashUltimateVData : public CBaseLockonAbilityVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TargetPreviewParticle; // 0x1580	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_LaunchParticle; // 0x1660	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_UltimateCastParticle; // 0x1740	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_UltimateCastEnemyParticle; // 0x1820	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AllyIndicatorParticle; // 0x1900	
	// MPropertyStartGroup "Animation"
	// MPropertyLeafSuggestionProviderFn
	CGlobalSymbol m_strThrowEnemyAnimGraphParam; // 0x19e0	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadel_Modifier_LashGrappleEnemy_Debuff > m_GrappleEnemyModifier; // 0x19e8	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_GrabSound; // 0x19f8	
	CSoundEventName m_MissSound; // 0x1a08	
	CSoundEventName m_ThrowSound; // 0x1a18	
	// MPropertyStartGroup "+Ultimate Properties"
	float m_flAirSpeedMax; // 0x1a28	
	float m_flFallSpeedMax; // 0x1a2c	
	float m_flAirDrag; // 0x1a30	
	float m_flMaxPitchRangeScale; // 0x1a34	
	float m_flThrowAnimTossPoint; // 0x1a38	
};

