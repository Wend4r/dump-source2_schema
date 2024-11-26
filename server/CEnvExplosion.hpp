#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x820
// Has VTable
class CEnvExplosion : public CModelPointEntity
{
public:
	int32_t m_iMagnitude; // 0x7c0	
	float m_flPlayerDamage; // 0x7c4	
	int32_t m_iRadiusOverride; // 0x7c8	
	float m_flInnerRadius; // 0x7cc	
	int32_t m_spriteScale; // 0x7d0	
	float m_flDamageForce; // 0x7d4	
	CHandle< CBaseEntity > m_hInflictor; // 0x7d8	
	DamageTypes_t m_iCustomDamageType; // 0x7dc	
	bool m_bCreateDebris; // 0x7e0	
private:
	[[maybe_unused]] uint8_t __pad07e1[0x7]; // 0x7e1
public:
	CUtlSymbolLarge m_iszExplosionType; // 0x7e8	
	CUtlSymbolLarge m_iszCustomEffectName; // 0x7f0	
	CUtlSymbolLarge m_iszCustomSoundName; // 0x7f8	
	bool m_bSuppressParticleImpulse; // 0x800	
private:
	[[maybe_unused]] uint8_t __pad0801[0x3]; // 0x801
public:
	Class_T m_iClassIgnore; // 0x804	
	Class_T m_iClassIgnore2; // 0x808	
private:
	[[maybe_unused]] uint8_t __pad080c[0x4]; // 0x80c
public:
	CUtlSymbolLarge m_iszEntityIgnoreName; // 0x810	
	CHandle< CBaseEntity > m_hEntityIgnore; // 0x818	
	
	// Datamap fields:
	// uint32_t m_nExplosionType; // 0x7e4
	// void CEnvExplosionSmoke; // 0x0
	// void InputExplode; // 0x0
};

