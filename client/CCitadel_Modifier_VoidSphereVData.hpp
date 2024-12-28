#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x9d8
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_VoidSphereVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TeleportStartParticle; // 0x630	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TeleportEndParticle; // 0x710	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TeleportTrailParticle; // 0x7f0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TeleportModelParticle; // 0x8d0	
	// MPropertyGroupName "Modifiers"
	CEmbeddedSubclass< CBaseModifier > m_BuffModifier; // 0x9b0	
	// MPropertyGroupName "Misc"
	float m_flPreTeleportDuration; // 0x9c0	
private:
	[[maybe_unused]] uint8_t __pad09c4[0x4]; // 0x9c4
public:
	// MPropertyGroupName "Sounds"
	CSoundEventName m_strAmbientLoopingLocalPlayerSound; // 0x9c8	
};

