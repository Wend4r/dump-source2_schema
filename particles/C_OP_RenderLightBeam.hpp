#pragma once

#include <cstdint>

struct CParticleCollectionVecInput;
struct CParticleCollectionFloatInput;
// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0xe18
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_RenderLightBeam : public CParticleFunctionRenderer
{
public:
	// MPropertyFriendlyName "Color Blend"
	CParticleCollectionVecInput m_vColorBlend; // 0x210	
	// MPropertyFriendlyName "Color Blend Type"
	// MPropertySortPriority "700"
	ParticleColorBlendType_t m_nColorBlendType; // 0x888	
private:
	[[maybe_unused]] uint8_t __pad088c[0x4]; // 0x88c
public:
	// MPropertyFriendlyName "Lumens Per Meter"
	CParticleCollectionFloatInput m_flBrightnessLumensPerMeter; // 0x890	
	// MPropertyFriendlyName "Shadows"
	// MPropertySuppressExpr "mod == csgo"
	bool m_bCastShadows; // 0x9f0	
private:
	[[maybe_unused]] uint8_t __pad09f1[0x7]; // 0x9f1
public:
	// MPropertyFriendlyName "Skirt"
	CParticleCollectionFloatInput m_flSkirt; // 0x9f8	
	// MPropertyFriendlyName "Range"
	CParticleCollectionFloatInput m_flRange; // 0xb58	
	// MPropertyFriendlyName "Thickness"
	CParticleCollectionFloatInput m_flThickness; // 0xcb8	
};

