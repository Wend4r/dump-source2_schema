#pragma once

#include <cstdint>

struct ParticleNamedValueConfiguration_t;
// Registered binary: particles.dll (project 'particleslib')
// Alignment: 8
// Size: 0x60
// 
// MGetKV3ClassDefaults
struct ParticleNamedValueSource_t
{
public:
	CUtlString m_Name; // 0x0	
	bool m_IsPublic; // 0x8	
private:
	[[maybe_unused]] uint8_t __pad0009[0x3]; // 0x9
public:
	// MPropertySuppressField
	PulseValueType_t m_ValueType; // 0xc	
	// MPropertySuppressField
	ParticleNamedValueConfiguration_t m_DefaultConfig; // 0x10	
	// MPropertySuppressField
	CUtlVector< ParticleNamedValueConfiguration_t > m_NamedConfigs; // 0x48	
};
