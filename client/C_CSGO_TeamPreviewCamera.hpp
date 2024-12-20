#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x5f8
// Has VTable
class C_CSGO_TeamPreviewCamera : public C_CSGO_MapPreviewCameraPath
{
public:
	int32_t m_nVariant; // 0x5d8	
	bool m_bDofEnabled; // 0x5dc	
private:
	[[maybe_unused]] uint8_t __pad05dd[0x3]; // 0x5dd
public:
	float m_flDofNearBlurry; // 0x5e0	
	float m_flDofNearCrisp; // 0x5e4	
	float m_flDofFarCrisp; // 0x5e8	
	float m_flDofFarBlurry; // 0x5ec	
	float m_flDofTiltToGround; // 0x5f0	
};

