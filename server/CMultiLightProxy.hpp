#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x528
// Has VTable
class CMultiLightProxy : public CLogicalEntity
{
public:
	CUtlSymbolLarge m_iszLightNameFilter; // 0x4e8	
	CUtlSymbolLarge m_iszLightClassFilter; // 0x4f0	
	float m_flLightRadiusFilter; // 0x4f8	
	float m_flBrightnessDelta; // 0x4fc	
	bool m_bPerformScreenFade; // 0x500	
private:
	[[maybe_unused]] uint8_t __pad0501[0x3]; // 0x501
public:
	float m_flTargetBrightnessMultiplier; // 0x504	
	float m_flCurrentBrightnessMultiplier; // 0x508	
private:
	[[maybe_unused]] uint8_t __pad050c[0x4]; // 0x50c
public:
	CUtlVector< CHandle< CLightEntity > > m_vecLights; // 0x510	
	
	// Datamap fields:
	// float InputFlickerLights; // 0x0
	// float InputDisableLights; // 0x0
	// float InputSetLightsBrightnessMultiplier; // 0x0
	// float InputSetBrightnessDelta; // 0x0
	// void CMultiLightProxyRestoreFlashlightThink; // 0x0
	// void CMultiLightProxyApproachBrightnessThink; // 0x0
};

