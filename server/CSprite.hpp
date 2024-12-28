#pragma once

#include <cstdint>

struct AttachmentHandle_t;
struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x828
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
class CSprite : public CBaseModelEntity
{
public:
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeIMaterial2 > m_hSpriteMaterial; // 0x7b8	
	// MNetworkEnable
	CHandle< CBaseEntity > m_hAttachedToEntity; // 0x7c0	
	// MNetworkEnable
	AttachmentHandle_t m_nAttachment; // 0x7c4	
private:
	[[maybe_unused]] uint8_t __pad07c5[0x3]; // 0x7c5
public:
	// MNetworkEnable
	// MNetworkBitCount "8"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "60.000000"
	// MNetworkEncodeFlags "2"
	float m_flSpriteFramerate; // 0x7c8	
	// MNetworkEnable
	// MNetworkBitCount "20"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "256.000000"
	// MNetworkEncodeFlags "1"
	float m_flFrame; // 0x7cc	
	GameTime_t m_flDieTime; // 0x7d0	
private:
	[[maybe_unused]] uint8_t __pad07d4[0xc]; // 0x7d4
public:
	// MNetworkEnable
	uint32_t m_nBrightness; // 0x7e0	
	// MNetworkEnable
	float m_flBrightnessDuration; // 0x7e4	
	// MNetworkEnable
	// MNetworkChangeCallback "OnSpriteScaleChanged"
	float m_flSpriteScale; // 0x7e8	
	// MNetworkEnable
	float m_flScaleDuration; // 0x7ec	
	// MNetworkEnable
	bool m_bWorldSpaceScale; // 0x7f0	
private:
	[[maybe_unused]] uint8_t __pad07f1[0x3]; // 0x7f1
public:
	// MNetworkEnable
	// MNetworkBitCount "6"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "64.000000"
	// MNetworkEncodeFlags "2"
	float m_flGlowProxySize; // 0x7f4	
	// MNetworkEnable
	float m_flHDRColorScale; // 0x7f8	
	GameTime_t m_flLastTime; // 0x7fc	
	float m_flMaxFrame; // 0x800	
	float m_flStartScale; // 0x804	
	float m_flDestScale; // 0x808	
	GameTime_t m_flScaleTimeStart; // 0x80c	
	int32_t m_nStartBrightness; // 0x810	
	int32_t m_nDestBrightness; // 0x814	
	GameTime_t m_flBrightnessTimeStart; // 0x818	
	int32_t m_nSpriteWidth; // 0x81c	
	int32_t m_nSpriteHeight; // 0x820	
	
	// Datamap fields:
	// void CSpriteAnimateThink; // 0x0
	// void CSpriteExpandThink; // 0x0
	// void CSpriteAnimateUntilDead; // 0x0
	// void CSpriteBeginFadeOutThink; // 0x0
	// void InputHideSprite; // 0x0
	// void InputShowSprite; // 0x0
	// void InputToggleSprite; // 0x0
	// float InputColorRedValue; // 0x0
	// float InputColorGreenValue; // 0x0
	// float InputColorBlueValue; // 0x0
};

