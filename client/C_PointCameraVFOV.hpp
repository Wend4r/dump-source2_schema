#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x5c8
// Has VTable
class C_PointCameraVFOV : public C_PointCamera
{
public:
	float m_flVerticalFOV; // 0x5c0	
	
	// Datamap fields:
	// float m_flDofFarCrisp; // 0x5a0
	// float m_flDofFarBlurry; // 0x5a4
	// float m_flDofTiltToGround; // 0x5a8
};

