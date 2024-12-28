#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1a88
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityPowerSlashVData : public CCitadelYamatoBaseVData
{
public:
	float m_flAirDrag; // 0x1570	
	float m_flMaxPowerPadding; // 0x1574	
	float m_flEffectGroundTrace; // 0x1578	
	float m_flWhizbyMaxRange; // 0x157c	
	float m_flStartPosTestCapsuleLength; // 0x1580	
	float m_flCoverLOSBackDist; // 0x1584	
	// MPropertyDescription "Visual offset for the origin of the long-slash particle effect"
	Vector m_vecLongEffectOffset; // 0x1588	
private:
	[[maybe_unused]] uint8_t __pad1594[0x4]; // 0x1594
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_PowerSlashParticle; // 0x1598	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_PowerSlashFullParticle; // 0x1678	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ImpactParticle; // 0x1758	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CastParticle; // 0x1838	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_PowerUpParticle; // 0x1918	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strStartSound; // 0x19f8	
	CSoundEventName m_strHitConfirmSound; // 0x1a08	
	CSoundEventName m_strPowerUp1Sounds; // 0x1a18	
	CSoundEventName m_strPowerUp2Sounds; // 0x1a28	
	CSoundEventName m_strPowerUp3Sounds; // 0x1a38	
	CSoundEventName m_strWhizbySound; // 0x1a48	
	CSoundEventName m_strSlashSound; // 0x1a58	
	CSoundEventName m_strSlashFullSound; // 0x1a68	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CBaseModifier > m_SlowModifier; // 0x1a78	
};

