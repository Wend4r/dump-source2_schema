#pragma once

#include <cstdint>

struct CSoundContainerReference;
// Registered binary: soundsystem.dll (project 'soundsystem_voicecontainers')
// Alignment: 8
// Size: 0x170
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Distance Blender"
// MPropertyDescription "Blends two containers according to distance curves."
class CVoiceContainerDistanceBlender : public CVoiceContainerBase
{
public:
	// MPropertyFriendlyName "First Sound"
	CSoundContainerReference m_firstSound; // 0xc0	
	// MPropertyFriendlyName "Second Sound"
	CSoundContainerReference m_secondSound; // 0xd8	
	// MPropertyFriendlyName "First Curve"
	CPiecewiseCurve m_curve1; // 0xf0	
	// MPropertyFriendlyName "Second Curve"
	CPiecewiseCurve m_curve2; // 0x130	
};

