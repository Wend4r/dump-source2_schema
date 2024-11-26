#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1a70
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityLashDownStrikeVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TargetPreviewParticle; // 0x1560	
	// MPropertyLeafSuggestionProviderFn
	CGlobalSymbol m_strGroundCastAnimGraphParam; // 0x1640	
	// MPropertyLeafSuggestionProviderFn
	CGlobalSymbol m_strAirCastAnimGraphParam; // 0x1648	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_StompParticle; // 0x1650	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_StompLineParticle; // 0x1730	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_StompLineObstructedParticle; // 0x1810	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_StompImpactParticle; // 0x18f0	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_StompExplosionSound; // 0x19d0	
	CSoundEventName m_StompEnemyImpactSound; // 0x19e0	
	CSoundEventName m_strFallCollideImpactSound; // 0x19f0	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CBaseModifier > m_DownStrikeModifier; // 0x1a00	
	CEmbeddedSubclass< CBaseModifier > m_ImpactModifier; // 0x1a10	
	CEmbeddedSubclass< CBaseModifier > m_DragModifier; // 0x1a20	
	// MPropertyStartGroup "+Down Strike Params"
	float m_flHeightUILingerTime; // 0x1a30	
	float m_flDamageFrustumHalfWidth; // 0x1a34	
	float m_flDamageFrustumAngle; // 0x1a38	
	float m_flDamageWaveSpeed; // 0x1a3c	
	float m_flDamageTraceProbeDamageRadius; // 0x1a40	
	float m_flDamageTraceProbeWorldRadius; // 0x1a44	
	float m_flDamageTraceProbeStepUpHeight; // 0x1a48	
	float m_flDamageTraceProbeStepDownHeight; // 0x1a4c	
	float m_flDamageTraceProbeDropDownRate; // 0x1a50	
	float m_flInitialDamageRadiusInMeters; // 0x1a54	
	int32_t m_nGroundCrackGap; // 0x1a58	
	float m_flGroupLengthTolerance; // 0x1a5c	
	float m_flDamageEffectScaleMin; // 0x1a60	
	float m_flDamageEffectScaleMax; // 0x1a64	
	float m_flTrackAmount; // 0x1a68	
	float m_flCollideRadius; // 0x1a6c	
};

