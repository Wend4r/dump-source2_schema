#pragma once

#include <cstdint>

struct CParticleCollectionFloatInput;
// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x338
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_SetControlPointPositionToRandomActiveCP : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "control point number"
	int32_t m_nCP1; // 0x1c8	
	// MPropertyFriendlyName "min active CP"
	int32_t m_nHeadLocationMin; // 0x1cc	
	// MPropertyFriendlyName "max active CP"
	int32_t m_nHeadLocationMax; // 0x1d0	
private:
	[[maybe_unused]] uint8_t __pad01d4[0x4]; // 0x1d4
public:
	// MPropertyFriendlyName "reset rate"
	CParticleCollectionFloatInput m_flResetRate; // 0x1d8	
};

