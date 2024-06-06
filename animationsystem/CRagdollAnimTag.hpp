#pragma once

#include <cstdint>

// Registered binary: animationsystem.dll (project 'animgraphlib')
// Alignment: 8
// Size: 0x70
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Ragdoll Tag"
class CRagdollAnimTag : public CAnimTagBase
{
private:
	[[maybe_unused]] uint8_t __pad0050[0x8]; // 0x50
public:
	// MPropertyFriendlyName "Pose Control"
	AnimPoseControl m_nPoseControl; // 0x58	
	// MPropertyFriendlyName "Frequency"
	// MPropertyAttributeRange "0 30"
	float m_flFrequency; // 0x5c	
	// MPropertyFriendlyName "Damping Ratio"
	// MPropertyAttributeRange "0 2"
	float m_flDampingRatio; // 0x60	
	// MPropertyFriendlyName "Decay Duration"
	// MPropertyAttributeRange "-1 1000"
	float m_flDecayDuration; // 0x64	
	// MPropertyFriendlyName "Decay Bias"
	// MPropertyAttributeRange "0 1"
	float m_flDecayBias; // 0x68	
	// MPropertyFriendlyName "Destroy"
	bool m_bDestroy; // 0x6c	
};
