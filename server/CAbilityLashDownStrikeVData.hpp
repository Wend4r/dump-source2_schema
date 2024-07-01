#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x19b0
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityLashDownStrikeVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TargetPreviewParticle; // 0x14e0	
	// MPropertyLeafSuggestionProviderFn
	CGlobalSymbol m_strGroundCastAnimGraphParam; // 0x15c0	
	// MPropertyLeafSuggestionProviderFn
	CGlobalSymbol m_strAirCastAnimGraphParam; // 0x15c8	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_StompParticle; // 0x15d0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_StompLineParticle; // 0x16b0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_StompLineObstructedParticle; // 0x1790	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_StompImpactParticle; // 0x1870	
	// MPropertyGroupName "Sounds"
	CSoundEventName m_StompExplosionSound; // 0x1950	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CBaseModifier > m_DownStrikeModifier; // 0x1960	
	CEmbeddedSubclass< CBaseModifier > m_ImpactModifier; // 0x1970	
	// MPropertyStartGroup "+Down Strike Params"
	float m_flHeightUILingerTime; // 0x1980	
	float m_flDamageFrustumHalfWidth; // 0x1984	
	float m_flDamageFrustumAngle; // 0x1988	
	float m_flDamageWaveSpeed; // 0x198c	
	float m_flDamageTraceProbeDamageRadius; // 0x1990	
	float m_flDamageTraceProbeWorldRadius; // 0x1994	
	float m_flDamageTraceProbeStepUpHeight; // 0x1998	
	float m_flDamageTraceProbeStepDownHeight; // 0x199c	
	float m_flDamageTraceProbeDropDownRate; // 0x19a0	
	float m_flInitialDamageRadiusInMeters; // 0x19a4	
	int32_t m_nGroundCrackGap; // 0x19a8	
	float m_flGroupLengthTolerance; // 0x19ac	
};

