#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xba0
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
// MNetworkVarNames "CHandle< C_BaseModelEntity > m_LightStyleTargets"
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
class C_BarnLight : public C_BaseModelEntity
{
public:
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	bool m_bEnabled; // 0x858	
private:
	[[maybe_unused]] uint8_t __pad0859[0x3]; // 0x859
public:
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	int32_t m_nColorMode; // 0x85c	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	Color m_Color; // 0x860	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	float m_flColorTemperature; // 0x864	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	float m_flBrightness; // 0x868	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	float m_flBrightnessScale; // 0x86c	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	int32_t m_nDirectLight; // 0x870	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	int32_t m_nBakedShadowIndex; // 0x874	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	int32_t m_nLuminaireShape; // 0x878	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	float m_flLuminaireSize; // 0x87c	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	float m_flLuminaireAnisotropy; // 0x880	
private:
	[[maybe_unused]] uint8_t __pad0884[0x4]; // 0x884
public:
	// MNetworkEnable
	// MNetworkChangeCallback "StyleChanged"
	CUtlString m_LightStyleString; // 0x888	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	GameTime_t m_flLightStyleStartTime; // 0x890	
private:
	[[maybe_unused]] uint8_t __pad0894[0x4]; // 0x894
public:
	// MNetworkEnable
	C_NetworkUtlVectorBase< CUtlString > m_QueuedLightStyleStrings; // 0x898	
	// MNetworkEnable
	C_NetworkUtlVectorBase< CUtlString > m_LightStyleEvents; // 0x8b0	
	// MNetworkEnable
	C_NetworkUtlVectorBase< CHandle< C_BaseModelEntity > > m_LightStyleTargets; // 0x8c8	
	CEntityIOOutput m_StyleEvent[4]; // 0x8e0	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	CStrongHandle< InfoForResourceTypeCTextureBase > m_hLightCookie; // 0x980	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	float m_flShape; // 0x988	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	float m_flSoftX; // 0x98c	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	float m_flSoftY; // 0x990	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	float m_flSkirt; // 0x994	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	float m_flSkirtNear; // 0x998	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	// MNetworkBitCount "32"
	Vector m_vSizeParams; // 0x99c	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	// MNetworkBitCount "32"
	float m_flRange; // 0x9a8	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	// MNetworkBitCount "32"
	Vector m_vShear; // 0x9ac	
	// MNetworkEnable
	int32_t m_nBakeSpecularToCubemaps; // 0x9b8	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	// MNetworkBitCount "32"
	Vector m_vBakeSpecularToCubemapsSize; // 0x9bc	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	int32_t m_nCastShadows; // 0x9c8	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	int32_t m_nShadowMapSize; // 0x9cc	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	int32_t m_nShadowPriority; // 0x9d0	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	bool m_bContactShadow; // 0x9d4	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	bool m_bForceShadowsEnabled; // 0x9d5	
private:
	[[maybe_unused]] uint8_t __pad09d6[0x2]; // 0x9d6
public:
	// MNetworkEnable
	int32_t m_nBounceLight; // 0x9d8	
	// MNetworkEnable
	float m_flBounceScale; // 0x9dc	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	float m_flMinRoughness; // 0x9e0	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	Vector m_vAlternateColor; // 0x9e4	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	float m_fAlternateColorBrightness; // 0x9f0	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	int32_t m_nFog; // 0x9f4	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	float m_flFogStrength; // 0x9f8	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	int32_t m_nFogShadows; // 0x9fc	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	float m_flFogScale; // 0xa00	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	bool m_bFogMixedShadows; // 0xa04	
private:
	[[maybe_unused]] uint8_t __pad0a05[0x3]; // 0xa05
public:
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	float m_flFadeSizeStart; // 0xa08	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	float m_flFadeSizeEnd; // 0xa0c	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	float m_flShadowFadeSizeStart; // 0xa10	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	float m_flShadowFadeSizeEnd; // 0xa14	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	bool m_bPrecomputedFieldsValid; // 0xa18	
private:
	[[maybe_unused]] uint8_t __pad0a19[0x3]; // 0xa19
public:
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	Vector m_vPrecomputedBoundsMins; // 0xa1c	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	Vector m_vPrecomputedBoundsMaxs; // 0xa28	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	Vector m_vPrecomputedOBBOrigin; // 0xa34	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	QAngle m_vPrecomputedOBBAngles; // 0xa40	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	Vector m_vPrecomputedOBBExtent; // 0xa4c	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	int32_t m_nPrecomputedSubFrusta; // 0xa58	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	Vector m_vPrecomputedOBBOrigin0; // 0xa5c	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	QAngle m_vPrecomputedOBBAngles0; // 0xa68	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	Vector m_vPrecomputedOBBExtent0; // 0xa74	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	Vector m_vPrecomputedOBBOrigin1; // 0xa80	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	QAngle m_vPrecomputedOBBAngles1; // 0xa8c	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	Vector m_vPrecomputedOBBExtent1; // 0xa98	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	Vector m_vPrecomputedOBBOrigin2; // 0xaa4	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	QAngle m_vPrecomputedOBBAngles2; // 0xab0	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	Vector m_vPrecomputedOBBExtent2; // 0xabc	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	Vector m_vPrecomputedOBBOrigin3; // 0xac8	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	QAngle m_vPrecomputedOBBAngles3; // 0xad4	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	Vector m_vPrecomputedOBBExtent3; // 0xae0	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	Vector m_vPrecomputedOBBOrigin4; // 0xaec	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	QAngle m_vPrecomputedOBBAngles4; // 0xaf8	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	Vector m_vPrecomputedOBBExtent4; // 0xb04	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	Vector m_vPrecomputedOBBOrigin5; // 0xb10	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	QAngle m_vPrecomputedOBBAngles5; // 0xb1c	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	Vector m_vPrecomputedOBBExtent5; // 0xb28	
private:
	[[maybe_unused]] uint8_t __pad0b34[0x44]; // 0xb34
public:
	bool m_bInitialBoneSetup; // 0xb78	
private:
	[[maybe_unused]] uint8_t __pad0b79[0x7]; // 0xb79
public:
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	C_NetworkUtlVectorBase< uint16 > m_VisClusters; // 0xb80	
	
	// Datamap fields:
	// void m_StyleEvent[0]; // 0x8e0
	// void m_StyleEvent[1]; // 0x908
	// void m_StyleEvent[2]; // 0x930
	// void m_StyleEvent[3]; // 0x958
};

