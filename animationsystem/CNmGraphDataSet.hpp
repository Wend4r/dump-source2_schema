#pragma once

#include <cstdint>

// Registered binary: animationsystem.dll (project 'animlib')
// Alignment: 8
// Size: 0x60
// 
// MGetKV3ClassDefaults
class CNmGraphDataSet
{
public:
	CGlobalSymbol m_variationID; // 0x0	
	CStrongHandle< InfoForResourceTypeCNmSkeleton > m_skeleton; // 0x8	
	CUtlVector< CStrongHandleVoid > m_resources; // 0x10	
private:
	[[maybe_unused]] uint8_t __pad0028[0x20]; // 0x28
public:
	CUtlVector< CUtlString > m_warnings; // 0x48	
};

