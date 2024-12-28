#pragma once

#include <cstdint>

struct AttachmentHandle_t;
struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x968
// Has VTable
// 
// MNetworkVarNames "HMaterialStrong m_hSpriteMaterial"
// MNetworkVarNames "CHandle< CBaseEntity> m_hAttachedToEntity"
// MNetworkVarNames "AttachmentHandle_t m_nAttachment"
// MNetworkVarNames "float32 m_flSpriteFramerate"
// MNetworkVarNames "float32 m_flFrame"
// MNetworkVarNames "uint32 m_nBrightness"
// MNetworkVarNames "float32 m_flBrightnessDuration"
// MNetworkVarNames "float32 m_flSpriteScale"
// MNetworkVarNames "float32 m_flScaleDuration"
// MNetworkVarNames "bool m_bWorldSpaceScale"
// MNetworkVarNames "float32 m_flGlowProxySize"
// MNetworkVarNames "float32 m_flHDRColorScale"
class C_Sprite : public C_BaseModelEntity
{
public:
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeIMaterial2 > m_hSpriteMaterial; // 0x858	
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hAttachedToEntity; // 0x860	
	// MNetworkEnable
	AttachmentHandle_t m_nAttachment; // 0x864	
private:
	[[maybe_unused]] uint8_t __pad0865[0x3]; // 0x865
public:
	// MNetworkEnable
	// MNetworkBitCount "8"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "60.000000"
	// MNetworkEncodeFlags "2"
	float m_flSpriteFramerate; // 0x868	
	// MNetworkEnable
	// MNetworkBitCount "20"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "256.000000"
	// MNetworkEncodeFlags "1"
	float m_flFrame; // 0x86c	
	GameTime_t m_flDieTime; // 0x870	
private:
	[[maybe_unused]] uint8_t __pad0874[0xc]; // 0x874
public:
	// MNetworkEnable
	uint32_t m_nBrightness; // 0x880	
	// MNetworkEnable
	float m_flBrightnessDuration; // 0x884	
	// MNetworkEnable
	// MNetworkChangeCallback "OnSpriteScaleChanged"
	float m_flSpriteScale; // 0x888	
	// MNetworkEnable
	float m_flScaleDuration; // 0x88c	
	// MNetworkEnable
	bool m_bWorldSpaceScale; // 0x890	
private:
	[[maybe_unused]] uint8_t __pad0891[0x3]; // 0x891
public:
	// MNetworkEnable
	// MNetworkBitCount "6"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "64.000000"
	// MNetworkEncodeFlags "2"
	float m_flGlowProxySize; // 0x894	
	// MNetworkEnable
	float m_flHDRColorScale; // 0x898	
	GameTime_t m_flLastTime; // 0x89c	
	float m_flMaxFrame; // 0x8a0	
	float m_flStartScale; // 0x8a4	
	float m_flDestScale; // 0x8a8	
	GameTime_t m_flScaleTimeStart; // 0x8ac	
	int32_t m_nStartBrightness; // 0x8b0	
	int32_t m_nDestBrightness; // 0x8b4	
	GameTime_t m_flBrightnessTimeStart; // 0x8b8	
private:
	[[maybe_unused]] uint8_t __pad08bc[0x4]; // 0x8bc
public:
	CWeakHandle< InfoForResourceTypeIMaterial2 > m_hOldSpriteMaterial; // 0x8c0	
private:
	[[maybe_unused]] uint8_t __pad08c8[0x98]; // 0x8c8
public:
	int32_t m_nSpriteWidth; // 0x960	
	int32_t m_nSpriteHeight; // 0x964	
};

