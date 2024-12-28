#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xad8
// Has VTable
// 
// MEntityAllowsPortraitWorldSpawn
// MNetworkVarNames "bool m_bEnabled"
// MNetworkVarNames "int m_nColorMode"
// MNetworkVarNames "Color m_Color"
// MNetworkVarNames "float m_flColorTemperature"
// MNetworkVarNames "float m_flBrightness"
// MNetworkVarNames "float m_flBrightnessScale"
// MNetworkVarNames "int m_nDirectLight"
// MNetworkVarNames "int m_nBakedShadowIndex"
// MNetworkVarNames "int m_nLuminaireShape"
// MNetworkVarNames "float m_flLuminaireSize"
// MNetworkVarNames "float m_flLuminaireAnisotropy"
// MNetworkVarNames "CUtlString m_LightStyleString"
// MNetworkVarNames "GameTime_t m_flLightStyleStartTime"
// MNetworkVarNames "CUtlString m_QueuedLightStyleStrings"
// MNetworkVarNames "CUtlString m_LightStyleEvents"
// MNetworkVarNames "CHandle< CBaseModelEntity > m_LightStyleTargets"
// MNetworkVarNames "HRenderTextureStrong m_hLightCookie"
// MNetworkVarNames "float m_flShape"
// MNetworkVarNames "float m_flSoftX"
// MNetworkVarNames "float m_flSoftY"
// MNetworkVarNames "float m_flSkirt"
// MNetworkVarNames "float m_flSkirtNear"
// MNetworkVarNames "Vector m_vSizeParams"
// MNetworkVarNames "float m_flRange"
// MNetworkVarNames "Vector m_vShear"
// MNetworkVarNames "int m_nBakeSpecularToCubemaps"
// MNetworkVarNames "Vector m_vBakeSpecularToCubemapsSize"
// MNetworkVarNames "int m_nCastShadows"
// MNetworkVarNames "int m_nShadowMapSize"
// MNetworkVarNames "int m_nShadowPriority"
// MNetworkVarNames "bool m_bContactShadow"
// MNetworkVarNames "bool m_bForceShadowsEnabled"
// MNetworkVarNames "int m_nBounceLight"
// MNetworkVarNames "float m_flBounceScale"
// MNetworkVarNames "float m_flMinRoughness"
// MNetworkVarNames "Vector m_vAlternateColor"
// MNetworkVarNames "float m_fAlternateColorBrightness"
// MNetworkVarNames "int m_nFog"
// MNetworkVarNames "float m_flFogStrength"
// MNetworkVarNames "int m_nFogShadows"
// MNetworkVarNames "float m_flFogScale"
// MNetworkVarNames "bool m_bFogMixedShadows"
// MNetworkVarNames "float m_flFadeSizeStart"
// MNetworkVarNames "float m_flFadeSizeEnd"
// MNetworkVarNames "float m_flShadowFadeSizeStart"
// MNetworkVarNames "float m_flShadowFadeSizeEnd"
// MNetworkVarNames "bool m_bPrecomputedFieldsValid"
// MNetworkVarNames "Vector m_vPrecomputedBoundsMins"
// MNetworkVarNames "Vector m_vPrecomputedBoundsMaxs"
// MNetworkVarNames "Vector m_vPrecomputedOBBOrigin"
// MNetworkVarNames "QAngle m_vPrecomputedOBBAngles"
// MNetworkVarNames "Vector m_vPrecomputedOBBExtent"
// MNetworkVarNames "int m_nPrecomputedSubFrusta"
// MNetworkVarNames "Vector m_vPrecomputedOBBOrigin0"
// MNetworkVarNames "QAngle m_vPrecomputedOBBAngles0"
// MNetworkVarNames "Vector m_vPrecomputedOBBExtent0"
// MNetworkVarNames "Vector m_vPrecomputedOBBOrigin1"
// MNetworkVarNames "QAngle m_vPrecomputedOBBAngles1"
// MNetworkVarNames "Vector m_vPrecomputedOBBExtent1"
// MNetworkVarNames "Vector m_vPrecomputedOBBOrigin2"
// MNetworkVarNames "QAngle m_vPrecomputedOBBAngles2"
// MNetworkVarNames "Vector m_vPrecomputedOBBExtent2"
// MNetworkVarNames "Vector m_vPrecomputedOBBOrigin3"
// MNetworkVarNames "QAngle m_vPrecomputedOBBAngles3"
// MNetworkVarNames "Vector m_vPrecomputedOBBExtent3"
// MNetworkVarNames "Vector m_vPrecomputedOBBOrigin4"
// MNetworkVarNames "QAngle m_vPrecomputedOBBAngles4"
// MNetworkVarNames "Vector m_vPrecomputedOBBExtent4"
// MNetworkVarNames "Vector m_vPrecomputedOBBOrigin5"
// MNetworkVarNames "QAngle m_vPrecomputedOBBAngles5"
// MNetworkVarNames "Vector m_vPrecomputedOBBExtent5"
// MNetworkVarNames "uint16 m_VisClusters"
class CBarnLight : public CBaseModelEntity
{
public:
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	bool m_bEnabled; // 0x7b8	
private:
	[[maybe_unused]] uint8_t __pad07b9[0x3]; // 0x7b9
public:
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	int32_t m_nColorMode; // 0x7bc	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	Color m_Color; // 0x7c0	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	float m_flColorTemperature; // 0x7c4	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	float m_flBrightness; // 0x7c8	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	float m_flBrightnessScale; // 0x7cc	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	int32_t m_nDirectLight; // 0x7d0	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	int32_t m_nBakedShadowIndex; // 0x7d4	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	int32_t m_nLuminaireShape; // 0x7d8	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	float m_flLuminaireSize; // 0x7dc	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	float m_flLuminaireAnisotropy; // 0x7e0	
private:
	[[maybe_unused]] uint8_t __pad07e4[0x4]; // 0x7e4
public:
	// MNetworkEnable
	// MNetworkChangeCallback "StyleChanged"
	CUtlString m_LightStyleString; // 0x7e8	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	GameTime_t m_flLightStyleStartTime; // 0x7f0	
private:
	[[maybe_unused]] uint8_t __pad07f4[0x4]; // 0x7f4
public:
	// MNetworkEnable
	CNetworkUtlVectorBase< CUtlString > m_QueuedLightStyleStrings; // 0x7f8	
	// MNetworkEnable
	CNetworkUtlVectorBase< CUtlString > m_LightStyleEvents; // 0x810	
	// MNetworkEnable
	CNetworkUtlVectorBase< CHandle< CBaseModelEntity > > m_LightStyleTargets; // 0x828	
	CEntityIOOutput m_StyleEvent[4]; // 0x840	
private:
	[[maybe_unused]] uint8_t __pad08e0[0x20]; // 0x8e0
public:
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	CStrongHandle< InfoForResourceTypeCTextureBase > m_hLightCookie; // 0x900	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	float m_flShape; // 0x908	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	float m_flSoftX; // 0x90c	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	float m_flSoftY; // 0x910	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	float m_flSkirt; // 0x914	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	float m_flSkirtNear; // 0x918	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	// MNetworkBitCount "32"
	Vector m_vSizeParams; // 0x91c	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	// MNetworkBitCount "32"
	float m_flRange; // 0x928	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	// MNetworkBitCount "32"
	Vector m_vShear; // 0x92c	
	// MNetworkEnable
	int32_t m_nBakeSpecularToCubemaps; // 0x938	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	// MNetworkBitCount "32"
	Vector m_vBakeSpecularToCubemapsSize; // 0x93c	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	int32_t m_nCastShadows; // 0x948	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	int32_t m_nShadowMapSize; // 0x94c	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	int32_t m_nShadowPriority; // 0x950	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	bool m_bContactShadow; // 0x954	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	bool m_bForceShadowsEnabled; // 0x955	
private:
	[[maybe_unused]] uint8_t __pad0956[0x2]; // 0x956
public:
	// MNetworkEnable
	int32_t m_nBounceLight; // 0x958	
	// MNetworkEnable
	float m_flBounceScale; // 0x95c	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	float m_flMinRoughness; // 0x960	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	Vector m_vAlternateColor; // 0x964	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	float m_fAlternateColorBrightness; // 0x970	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	int32_t m_nFog; // 0x974	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	float m_flFogStrength; // 0x978	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	int32_t m_nFogShadows; // 0x97c	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	float m_flFogScale; // 0x980	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	bool m_bFogMixedShadows; // 0x984	
private:
	[[maybe_unused]] uint8_t __pad0985[0x3]; // 0x985
public:
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	float m_flFadeSizeStart; // 0x988	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	float m_flFadeSizeEnd; // 0x98c	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	float m_flShadowFadeSizeStart; // 0x990	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	float m_flShadowFadeSizeEnd; // 0x994	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	bool m_bPrecomputedFieldsValid; // 0x998	
private:
	[[maybe_unused]] uint8_t __pad0999[0x3]; // 0x999
public:
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	Vector m_vPrecomputedBoundsMins; // 0x99c	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	Vector m_vPrecomputedBoundsMaxs; // 0x9a8	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	Vector m_vPrecomputedOBBOrigin; // 0x9b4	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	QAngle m_vPrecomputedOBBAngles; // 0x9c0	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	Vector m_vPrecomputedOBBExtent; // 0x9cc	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	int32_t m_nPrecomputedSubFrusta; // 0x9d8	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	Vector m_vPrecomputedOBBOrigin0; // 0x9dc	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	QAngle m_vPrecomputedOBBAngles0; // 0x9e8	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	Vector m_vPrecomputedOBBExtent0; // 0x9f4	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	Vector m_vPrecomputedOBBOrigin1; // 0xa00	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	QAngle m_vPrecomputedOBBAngles1; // 0xa0c	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	Vector m_vPrecomputedOBBExtent1; // 0xa18	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	Vector m_vPrecomputedOBBOrigin2; // 0xa24	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	QAngle m_vPrecomputedOBBAngles2; // 0xa30	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	Vector m_vPrecomputedOBBExtent2; // 0xa3c	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	Vector m_vPrecomputedOBBOrigin3; // 0xa48	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	QAngle m_vPrecomputedOBBAngles3; // 0xa54	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	Vector m_vPrecomputedOBBExtent3; // 0xa60	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	Vector m_vPrecomputedOBBOrigin4; // 0xa6c	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	QAngle m_vPrecomputedOBBAngles4; // 0xa78	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	Vector m_vPrecomputedOBBExtent4; // 0xa84	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	Vector m_vPrecomputedOBBOrigin5; // 0xa90	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	QAngle m_vPrecomputedOBBAngles5; // 0xa9c	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	Vector m_vPrecomputedOBBExtent5; // 0xaa8	
	bool m_bPvsModifyEntity; // 0xab4	
private:
	[[maybe_unused]] uint8_t __pad0ab5[0x3]; // 0xab5
public:
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	CNetworkUtlVectorBase< uint16 > m_VisClusters; // 0xab8	
	
	// Datamap fields:
	// void m_StyleEvent[0]; // 0x840
	// void m_StyleEvent[1]; // 0x868
	// void m_StyleEvent[2]; // 0x890
	// void m_StyleEvent[3]; // 0x8b8
	// void CBarnLightThink_SetNextQueuedLightStyle; // 0x0
	// void CBarnLightThink_ApplyLightStylesToTargets; // 0x0
	// void CBarnLightThink_LightStyleEvent; // 0x0
};

