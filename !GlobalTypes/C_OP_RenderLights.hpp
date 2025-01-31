#pragma once

#include <cstdint>

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x238
// Has VTable
// 
// MObsoleteParticleFunction
// MGetKV3ClassDefaults
class C_OP_RenderLights : public C_OP_RenderPoints
{
public:
	// MPropertyFriendlyName "animation rate"
	float m_flAnimationRate; // 0x218	
	// MPropertyFriendlyName "animation type"
	AnimationType_t m_nAnimationType; // 0x21c	
	// MPropertyFriendlyName "set animation value in FPS"
	bool m_bAnimateInFPS; // 0x220	
private:
	[[maybe_unused]] uint8_t __pad0221[0x3]; // 0x221
public:
	// MPropertyFriendlyName "minimum visual size"
	float m_flMinSize; // 0x224	
	// MPropertyFriendlyName "maximum visual size"
	float m_flMaxSize; // 0x228	
	// MPropertyFriendlyName "size at which to start fading"
	float m_flStartFadeSize; // 0x22c	
	// MPropertyFriendlyName "size at which to fade away"
	float m_flEndFadeSize; // 0x230	
};

