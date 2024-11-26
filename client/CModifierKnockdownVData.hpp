#pragma once

#include <cstdint>

struct CitadelCameraOperationsSequence_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x780
// Has VTable
// 
// MGetKV3ClassDefaults
class CModifierKnockdownVData : public CCitadel_Modifier_StunnedVData
{
public:
	float m_flSatVolumeRadius; // 0x6e8	
	float m_flSatVolumeFadeOut; // 0x6ec	
	float m_flGravityScale; // 0x6f0	
	// MPropertyStartGroup "Camera"
	float m_flGetUpSeqDuration; // 0x6f4	
	CitadelCameraOperationsSequence_t m_cameraSequenceGetUp; // 0x6f8	
};

