#pragma once

#include <cstdint>

struct CParticleCollectionVecInput;
struct CParticleCollectionFloatInput;
struct CPerParticleFloatInput;
// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x1040
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_PinParticleToCP : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x1b8	
private:
	[[maybe_unused]] uint8_t __pad01bc[0x4]; // 0x1bc
public:
	// MPropertyFriendlyName "offset"
	CParticleCollectionVecInput m_vecOffset; // 0x1c0	
	// MPropertyFriendlyName "offset in local space"
	bool m_bOffsetLocal; // 0x818	
private:
	[[maybe_unused]] uint8_t __pad0819[0x3]; // 0x819
public:
	// MPropertyFriendlyName "particle to use"
	ParticleSelection_t m_nParticleSelection; // 0x81c	
	// MPropertyFriendlyName "particle number/offset"
	CParticleCollectionFloatInput m_nParticleNumber; // 0x820	
	// MPropertyFriendlyName "pin break type"
	ParticlePinDistance_t m_nPinBreakType; // 0x978	
private:
	[[maybe_unused]] uint8_t __pad097c[0x4]; // 0x97c
public:
	// MPropertyFriendlyName "break length %"
	CParticleCollectionFloatInput m_flBreakDistance; // 0x980	
	// MPropertyFriendlyName "break speed"
	CParticleCollectionFloatInput m_flBreakSpeed; // 0xad8	
	// MPropertyFriendlyName "break age"
	CParticleCollectionFloatInput m_flAge; // 0xc30	
	// MPropertyFriendlyName "break comparison control point 1"
	int32_t m_nBreakControlPointNumber; // 0xd88	
	// MPropertyFriendlyName "break comparison control point 2"
	int32_t m_nBreakControlPointNumber2; // 0xd8c	
	// MPropertyFriendlyName "break value"
	CParticleCollectionFloatInput m_flBreakValue; // 0xd90	
	// MPropertyFriendlyName "Interpolation"
	CPerParticleFloatInput m_flInterpolation; // 0xee8	
};
