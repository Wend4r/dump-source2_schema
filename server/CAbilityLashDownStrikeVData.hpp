#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1a78
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityLashDownStrikeVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TargetPreviewParticle; // 0x1568	
	// MPropertyLeafSuggestionProviderFn
	CGlobalSymbol m_strGroundCastAnimGraphParam; // 0x1648	
	// MPropertyLeafSuggestionProviderFn
	CGlobalSymbol m_strAirCastAnimGraphParam; // 0x1650	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_StompParticle; // 0x1658	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_StompLineParticle; // 0x1738	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_StompLineObstructedParticle; // 0x1818	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_StompImpactParticle; // 0x18f8	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_StompExplosionSound; // 0x19d8	
	CSoundEventName m_StompEnemyImpactSound; // 0x19e8	
	CSoundEventName m_strFallCollideImpactSound; // 0x19f8	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CBaseModifier > m_DownStrikeModifier; // 0x1a08	
	CEmbeddedSubclass< CBaseModifier > m_ImpactModifier; // 0x1a18	
	CEmbeddedSubclass< CBaseModifier > m_DragModifier; // 0x1a28	
	// MPropertyStartGroup "+Down Strike Params"
	float m_flHeightUILingerTime; // 0x1a38	
	float m_flDamageFrustumHalfWidth; // 0x1a3c	
	float m_flDamageFrustumAngle; // 0x1a40	
	float m_flDamageWaveSpeed; // 0x1a44	
	float m_flDamageTraceProbeDamageRadius; // 0x1a48	
	float m_flDamageTraceProbeWorldRadius; // 0x1a4c	
	float m_flDamageTraceProbeStepUpHeight; // 0x1a50	
	float m_flDamageTraceProbeStepDownHeight; // 0x1a54	
	float m_flDamageTraceProbeDropDownRate; // 0x1a58	
	float m_flInitialDamageRadiusInMeters; // 0x1a5c	
	int32_t m_nGroundCrackGap; // 0x1a60	
	float m_flGroupLengthTolerance; // 0x1a64	
	float m_flDamageEffectScaleMin; // 0x1a68	
	float m_flDamageEffectScaleMax; // 0x1a6c	
	float m_flTrackAmount; // 0x1a70	
	float m_flCollideRadius; // 0x1a74	
};

