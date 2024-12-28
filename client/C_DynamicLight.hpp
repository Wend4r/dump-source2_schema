#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x880
// Has VTable
// 
// MNetworkVarNames "uint8 m_Flags"
// MNetworkVarNames "uint8 m_LightStyle"
// MNetworkVarNames "float32 m_Radius"
// MNetworkVarNames "int32 m_Exponent"
// MNetworkVarNames "float32 m_InnerAngle"
// MNetworkVarNames "float32 m_OuterAngle"
// MNetworkVarNames "float32 m_SpotRadius"
class C_DynamicLight : public C_BaseModelEntity
{
public:
	// MNetworkEnable
	uint8_t m_Flags; // 0x858	
	// MNetworkEnable
	uint8_t m_LightStyle; // 0x859	
private:
	[[maybe_unused]] uint8_t __pad085a[0x2]; // 0x85a
public:
	// MNetworkEnable
	float m_Radius; // 0x85c	
	// MNetworkEnable
	int32_t m_Exponent; // 0x860	
	// MNetworkEnable
	// MNetworkBitCount "8"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "360.000000"
	float m_InnerAngle; // 0x864	
	// MNetworkEnable
	// MNetworkBitCount "8"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "360.000000"
	float m_OuterAngle; // 0x868	
	// MNetworkEnable
	float m_SpotRadius; // 0x86c	
};

