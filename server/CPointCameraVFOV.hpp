#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x550
// Has VTable
class CPointCameraVFOV : public CPointCamera
{
public:
	float m_flVerticalFOV; // 0x548	
	
	// Datamap fields:
	// float m_flDofFarCrisp; // 0x528
	// float m_flDofFarBlurry; // 0x52c
	// float m_flDofTiltToGround; // 0x530
};

