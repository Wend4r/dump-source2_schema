#pragma once

#include <cstdint>

// Registered binary: animationsystem.dll (project 'modellib')
// Alignment: 8
// Size: 0x28
// 
// MGetKV3ClassDefaults
class CMorphRectData
{
public:
	int16_t m_nXLeftDst; // 0x0	
	int16_t m_nYTopDst; // 0x2	
	float m_flUWidthSrc; // 0x4	
	float m_flVHeightSrc; // 0x8	
private:
	[[maybe_unused]] uint8_t __pad000c[0x4]; // 0xc
public:
	CUtlVector< CMorphBundleData > m_bundleDatas; // 0x10	
};

