#pragma once

#include <cstdint>

struct CRemapFloat;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1928
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadelAbilityHealingSlashVData : public CCitadelYamatoBaseVData
{
public:
	float m_flEffectSize; // 0x1570	
	float m_flMaxAttackAngle; // 0x1574	
	CRemapFloat m_remapAngleToTime; // 0x1578	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CBaseModifier > m_DebuffModifier; // 0x1588	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ImpactParticle; // 0x1598	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_HealingSlashParticle; // 0x1678	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_HealingSlashSwordGlow; // 0x1758	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CastParticle; // 0x1838	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strDamageTarget; // 0x1918	
};

