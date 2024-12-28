#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1a48
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityLashUltimateVData : public CBaseLockonAbilityVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TargetPreviewParticle; // 0x1588	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_LaunchParticle; // 0x1668	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_UltimateCastParticle; // 0x1748	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_UltimateCastEnemyParticle; // 0x1828	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AllyIndicatorParticle; // 0x1908	
	// MPropertyStartGroup "Animation"
	// MPropertyLeafSuggestionProviderFn
	CGlobalSymbol m_strThrowEnemyAnimGraphParam; // 0x19e8	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadel_Modifier_LashGrappleEnemy_Debuff > m_GrappleEnemyModifier; // 0x19f0	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_GrabSound; // 0x1a00	
	CSoundEventName m_MissSound; // 0x1a10	
	CSoundEventName m_ThrowSound; // 0x1a20	
	// MPropertyStartGroup "+Ultimate Properties"
	float m_flAirSpeedMax; // 0x1a30	
	float m_flFallSpeedMax; // 0x1a34	
	float m_flAirDrag; // 0x1a38	
	float m_flMaxPitchRangeScale; // 0x1a3c	
	float m_flThrowAnimTossPoint; // 0x1a40	
};

