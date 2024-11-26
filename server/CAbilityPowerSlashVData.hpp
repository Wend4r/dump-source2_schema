#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1a80
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityPowerSlashVData : public CCitadelYamatoBaseVData
{
public:
	float m_flAirDrag; // 0x1568	
	float m_flMaxPowerPadding; // 0x156c	
	float m_flEffectGroundTrace; // 0x1570	
	float m_flWhizbyMaxRange; // 0x1574	
	float m_flStartPosTestCapsuleLength; // 0x1578	
	float m_flCoverLOSBackDist; // 0x157c	
	// MPropertyDescription "Visual offset for the origin of the long-slash particle effect"
	Vector m_vecLongEffectOffset; // 0x1580	
private:
	[[maybe_unused]] uint8_t __pad158c[0x4]; // 0x158c
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_PowerSlashParticle; // 0x1590	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_PowerSlashFullParticle; // 0x1670	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ImpactParticle; // 0x1750	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CastParticle; // 0x1830	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_PowerUpParticle; // 0x1910	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strStartSound; // 0x19f0	
	CSoundEventName m_strHitConfirmSound; // 0x1a00	
	CSoundEventName m_strPowerUp1Sounds; // 0x1a10	
	CSoundEventName m_strPowerUp2Sounds; // 0x1a20	
	CSoundEventName m_strPowerUp3Sounds; // 0x1a30	
	CSoundEventName m_strWhizbySound; // 0x1a40	
	CSoundEventName m_strSlashSound; // 0x1a50	
	CSoundEventName m_strSlashFullSound; // 0x1a60	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CBaseModifier > m_SlowModifier; // 0x1a70	
};

