#pragma once

#include <cstdint>

struct SceneEventId_t;
struct AttachmentHandle_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc90
// Has VTable
// 
// MNetworkVarNames "float32 m_flexWeight"
// MNetworkVarNames "bool m_blinktoggle"
class C_BaseFlex : public CBaseAnimGraph
{
private:
	[[maybe_unused]] uint8_t __pad0af8[0x10]; // 0xaf8
public:
	// MNetworkEnable
	// MNetworkBitCount "12"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "1.000000"
	// MNetworkEncodeFlags "1"
	C_NetworkUtlVectorBase< float32 > m_flexWeight; // 0xb08	
	// MNetworkEnable
	// MNetworkEncoder "coord"
	// MNetworkChangeCallback "OnViewTargetChanged"
	Vector m_vLookTargetPosition; // 0xb20	
private:
	[[maybe_unused]] uint8_t __pad0b2c[0xc]; // 0xb2c
public:
	// MNetworkEnable
	bool m_blinktoggle; // 0xb38	
private:
	[[maybe_unused]] uint8_t __pad0b39[0x5f]; // 0xb39
public:
	int32_t m_nLastFlexUpdateFrameCount; // 0xb98	
	Vector m_CachedViewTarget; // 0xb9c	
	SceneEventId_t m_nNextSceneEventId; // 0xba8	
	int32_t m_iBlink; // 0xbac	
	float m_blinktime; // 0xbb0	
	bool m_prevblinktoggle; // 0xbb4	
private:
	[[maybe_unused]] uint8_t __pad0bb5[0x3]; // 0xbb5
public:
	int32_t m_iJawOpen; // 0xbb8	
	float m_flJawOpenAmount; // 0xbbc	
	float m_flBlinkAmount; // 0xbc0	
	AttachmentHandle_t m_iMouthAttachment; // 0xbc4	
	AttachmentHandle_t m_iEyeAttachment; // 0xbc5	
	bool m_bResetFlexWeightsOnModelChange; // 0xbc6	
private:
	[[maybe_unused]] uint8_t __pad0bc7[0x19]; // 0xbc7
public:
	int32_t m_nEyeOcclusionRendererBone; // 0xbe0	
	matrix3x4_t m_mEyeOcclusionRendererCameraToBoneTransform; // 0xbe4	
	Vector m_vEyeOcclusionRendererHalfExtent; // 0xc14	
private:
	[[maybe_unused]] uint8_t __pad0c20[0x10]; // 0xc20
public:
	// -> m_sClassName - 0xc30
	// -> m_flAmount - 0xc48
	// -> m_bRequired - 0xc4c
	// -> m_bBasechecked - 0xc4d
	// -> m_bValid - 0xc4e
	C_BaseFlex::Emphasized_Phoneme m_PhonemeClasses[3]; // 0xc30	
};

