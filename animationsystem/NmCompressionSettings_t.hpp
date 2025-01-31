#pragma once

#include <cstdint>

struct NmCompressionSettings_t::QuantizationRange_t;
// Registered binary: animationsystem.dll (project 'animlib')
// Alignment: 16
// Size: 0x40
// Has Trivial Destructor
// 
// MGetKV3ClassDefaults
struct NmCompressionSettings_t
{
public:
	NmCompressionSettings_t::QuantizationRange_t m_translationRangeX; // 0x0	
	NmCompressionSettings_t::QuantizationRange_t m_translationRangeY; // 0x8	
	NmCompressionSettings_t::QuantizationRange_t m_translationRangeZ; // 0x10	
	NmCompressionSettings_t::QuantizationRange_t m_scaleRange; // 0x18	
	Quaternion m_constantRotation; // 0x20	
	bool m_bIsRotationStatic; // 0x30	
	bool m_bIsTranslationStatic; // 0x31	
	bool m_bIsScaleStatic; // 0x32	
};

