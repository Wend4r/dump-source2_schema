#pragma once

#include <cstdint>

struct CitadelCameraOperationsSequence_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x7a8
// Has VTable
// 
// MGetKV3ClassDefaults
class CModifierKnockdownVData : public CCitadel_Modifier_StunnedVData
{
public:
	float m_flSatVolumeRadius; // 0x710	
	float m_flSatVolumeFadeOut; // 0x714	
	float m_flGravityScale; // 0x718	
	// MPropertyStartGroup "Camera"
	float m_flGetUpSeqDuration; // 0x71c	
	CitadelCameraOperationsSequence_t m_cameraSequenceGetUp; // 0x720	
};

