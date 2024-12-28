#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x12e0
// Has VTable
// 
// MGetKV3ClassDefaults
class CNPC_MidBossVData : public CAI_CitadelNPCVData
{
public:
	int32_t m_iStartingHealth; // 0x10e8	
	int32_t m_iHealthGainPerMinute; // 0x10ec	
	float m_flAggroTime; // 0x10f0	
private:
	[[maybe_unused]] uint8_t __pad10f4[0x4]; // 0x10f4
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DyingSmallExplosion; // 0x10f8	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DyingFinalExplosion; // 0x11d8	
	float m_flDyingDuration; // 0x12b8	
private:
	[[maybe_unused]] uint8_t __pad12bc[0x4]; // 0x12bc
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_KnockbackAura; // 0x12c0	
	CEmbeddedSubclass< CCitadelModifier > m_AggroEnemy; // 0x12d0	
};

