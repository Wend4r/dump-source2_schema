#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x918
// Has VTable
// 
// MNetworkIncludeByUserGroup "Origin"
// MNetworkIncludeByName "m_nModelIndex"
// MNetworkIncludeByName "m_nRenderFX"
// MNetworkIncludeByName "m_nRenderMode"
// MNetworkIncludeByName "m_clrRender"
// MNetworkIncludeByName "CGameSceneNode::m_hParent"
// MNetworkOverride "m_clrRender"
// MNetworkVarNames "float32 m_flFrameRate"
// MNetworkVarNames "float32 m_flHDRColorScale"
// MNetworkVarNames "uint8 m_nNumBeamEnts"
// MNetworkVarNames "HMaterialStrong m_hBaseMaterial"
// MNetworkVarNames "HMaterialStrong m_nHaloIndex"
// MNetworkVarNames "BeamType_t m_nBeamType"
// MNetworkVarNames "uint32 m_nBeamFlags"
// MNetworkVarNames "CHandle< CBaseEntity > m_hAttachEntity"
// MNetworkVarNames "AttachmentHandle_t m_nAttachIndex"
// MNetworkVarNames "float32 m_fWidth"
// MNetworkVarNames "float32 m_fEndWidth"
// MNetworkVarNames "float32 m_fFadeLength"
// MNetworkVarNames "float32 m_fHaloScale"
// MNetworkVarNames "float32 m_fAmplitude"
// MNetworkVarNames "float32 m_fStartFrame"
// MNetworkVarNames "float32 m_fSpeed"
// MNetworkVarNames "float32 m_flFrame"
// MNetworkVarNames "BeamClipStyle_t m_nClipStyle"
// MNetworkVarNames "bool m_bTurnedOff"
// MNetworkVarNames "Vector m_vecEndPos"
class C_Beam : public C_BaseModelEntity
{
public:
	// MNetworkEnable
	// MNetworkBitCount "10"
	// MNetworkMinValue "-25.000000"
	// MNetworkMaxValue "25.000000"
	// MNetworkEncodeFlags "2"
	float m_flFrameRate; // 0x858	
	// MNetworkEnable
	float m_flHDRColorScale; // 0x85c	
	GameTime_t m_flFireTime; // 0x860	
	float m_flDamage; // 0x864	
	// MNetworkEnable
	uint8_t m_nNumBeamEnts; // 0x868	
private:
	[[maybe_unused]] uint8_t __pad0869[0x3]; // 0x869
public:
	int32_t m_queryHandleHalo; // 0x86c	
private:
	[[maybe_unused]] uint8_t __pad0870[0x20]; // 0x870
public:
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeIMaterial2 > m_hBaseMaterial; // 0x890	
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeIMaterial2 > m_nHaloIndex; // 0x898	
	// MNetworkEnable
	BeamType_t m_nBeamType; // 0x8a0	
	// MNetworkEnable
	uint32_t m_nBeamFlags; // 0x8a4	
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hAttachEntity[10]; // 0x8a8	
	// MNetworkEnable
	AttachmentHandle_t m_nAttachIndex[10]; // 0x8d0	
private:
	[[maybe_unused]] uint8_t __pad08da[0x2]; // 0x8da
public:
	// MNetworkEnable
	// MNetworkBitCount "10"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "102.300003"
	// MNetworkEncodeFlags "2"
	float m_fWidth; // 0x8dc	
	// MNetworkEnable
	// MNetworkBitCount "10"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "102.300003"
	// MNetworkEncodeFlags "2"
	float m_fEndWidth; // 0x8e0	
	// MNetworkEnable
	float m_fFadeLength; // 0x8e4	
	// MNetworkEnable
	float m_fHaloScale; // 0x8e8	
	// MNetworkEnable
	// MNetworkBitCount "8"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "64.000000"
	// MNetworkEncodeFlags "1"
	float m_fAmplitude; // 0x8ec	
	// MNetworkEnable
	// MNetworkBitCount "8"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "256.000000"
	// MNetworkEncodeFlags "1"
	float m_fStartFrame; // 0x8f0	
	// MNetworkEnable
	// MNetworkBitCount "8"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "100.000000"
	float m_fSpeed; // 0x8f4	
	// MNetworkEnable
	// MNetworkBitCount "20"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "256.000000"
	// MNetworkEncodeFlags "1"
	// MNetworkPriority "32"
	float m_flFrame; // 0x8f8	
	// MNetworkEnable
	BeamClipStyle_t m_nClipStyle; // 0x8fc	
	// MNetworkEnable
	bool m_bTurnedOff; // 0x900	
private:
	[[maybe_unused]] uint8_t __pad0901[0x3]; // 0x901
public:
	// MNetworkEnable
	// MNetworkEncoder "coord"
	Vector m_vecEndPos; // 0x904	
	CHandle< C_BaseEntity > m_hEndEntity; // 0x910	
};

