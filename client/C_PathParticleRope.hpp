#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x670
// Has VTable
// 
// MNetworkVarNames "float m_flParticleSpacing"
// MNetworkVarNames "float m_flSlack"
// MNetworkVarNames "float m_flRadius"
// MNetworkVarNames "Color m_ColorTint"
// MNetworkVarNames "int m_nEffectState"
// MNetworkVarNames "HParticleSystemDefinitionStrong m_iEffectIndex"
// MNetworkVarNames "Vector m_PathNodes_Position"
// MNetworkVarNames "Vector m_PathNodes_TangentIn"
// MNetworkVarNames "Vector m_PathNodes_TangentOut"
// MNetworkVarNames "Vector m_PathNodes_Color"
// MNetworkVarNames "bool m_PathNodes_PinEnabled"
// MNetworkVarNames "float m_PathNodes_RadiusScale"
class C_PathParticleRope : public C_BaseEntity
{
private:
	[[maybe_unused]] uint8_t __pad0560[0x8]; // 0x560
public:
	bool m_bStartActive; // 0x568	
private:
	[[maybe_unused]] uint8_t __pad0569[0x3]; // 0x569
public:
	float m_flMaxSimulationTime; // 0x56c	
	CUtlSymbolLarge m_iszEffectName; // 0x570	
	CUtlVector< CUtlSymbolLarge > m_PathNodes_Name; // 0x578	
	// MNetworkEnable
	float m_flParticleSpacing; // 0x590	
	// MNetworkEnable
	// MNetworkChangeCallback "parametersChanged"
	float m_flSlack; // 0x594	
	// MNetworkEnable
	// MNetworkChangeCallback "parametersChanged"
	float m_flRadius; // 0x598	
	// MNetworkEnable
	// MNetworkChangeCallback "parametersChanged"
	Color m_ColorTint; // 0x59c	
	// MNetworkEnable
	// MNetworkChangeCallback "effectStateChanged"
	int32_t m_nEffectState; // 0x5a0	
private:
	[[maybe_unused]] uint8_t __pad05a4[0x4]; // 0x5a4
public:
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_iEffectIndex; // 0x5a8	
	// MNetworkEnable
	C_NetworkUtlVectorBase< Vector > m_PathNodes_Position; // 0x5b0	
	// MNetworkEnable
	C_NetworkUtlVectorBase< Vector > m_PathNodes_TangentIn; // 0x5c8	
	// MNetworkEnable
	C_NetworkUtlVectorBase< Vector > m_PathNodes_TangentOut; // 0x5e0	
	// MNetworkEnable
	C_NetworkUtlVectorBase< Vector > m_PathNodes_Color; // 0x5f8	
	// MNetworkEnable
	// MNetworkChangeCallback "pinStateChanged"
	C_NetworkUtlVectorBase< bool > m_PathNodes_PinEnabled; // 0x610	
	// MNetworkEnable
	C_NetworkUtlVectorBase< float32 > m_PathNodes_RadiusScale; // 0x628	
	
	// Datamap fields:
	// CUtlSymbolLarge pathNodes; // 0x7fffffff
	// void InputStart; // 0x0
	// void InputStop; // 0x0
	// void InputStopEndCap; // 0x0
	// void InputDestroy; // 0x0
	// CUtlSymbolLarge InputDisablePin; // 0x0
	// float InputSetRadius; // 0x0
	// float InputSetSlack; // 0x0
};

