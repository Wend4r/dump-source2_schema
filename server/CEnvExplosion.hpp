#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x818
// Has VTable
class CEnvExplosion : public CModelPointEntity
{
public:
	int32_t m_iMagnitude; // 0x7b8	
	float m_flPlayerDamage; // 0x7bc	
	int32_t m_iRadiusOverride; // 0x7c0	
	float m_flInnerRadius; // 0x7c4	
	int32_t m_spriteScale; // 0x7c8	
	float m_flDamageForce; // 0x7cc	
	CHandle< CBaseEntity > m_hInflictor; // 0x7d0	
	DamageTypes_t m_iCustomDamageType; // 0x7d4	
	bool m_bCreateDebris; // 0x7d8	
private:
	[[maybe_unused]] uint8_t __pad07d9[0x7]; // 0x7d9
public:
	CUtlSymbolLarge m_iszExplosionType; // 0x7e0	
	CUtlSymbolLarge m_iszCustomEffectName; // 0x7e8	
	CUtlSymbolLarge m_iszCustomSoundName; // 0x7f0	
	bool m_bSuppressParticleImpulse; // 0x7f8	
private:
	[[maybe_unused]] uint8_t __pad07f9[0x3]; // 0x7f9
public:
	Class_T m_iClassIgnore; // 0x7fc	
	Class_T m_iClassIgnore2; // 0x800	
private:
	[[maybe_unused]] uint8_t __pad0804[0x4]; // 0x804
public:
	CUtlSymbolLarge m_iszEntityIgnoreName; // 0x808	
	CHandle< CBaseEntity > m_hEntityIgnore; // 0x810	
	
	// Datamap fields:
	// uint32_t m_nExplosionType; // 0x7dc
	// void CEnvExplosionSmoke; // 0x0
	// void InputExplode; // 0x0
};

