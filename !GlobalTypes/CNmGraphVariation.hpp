#pragma once

#include <cstdint>

struct CNmGraphDataSet;
// Registered binary: animationsystem.dll (project 'animlib')
// Alignment: 8
// Size: 0x68
// 
// MGetKV3ClassDefaults
class CNmGraphVariation
{
public:
	CStrongHandle< InfoForResourceTypeCNmGraphDefinition > m_graphDefinition; // 0x0	
	// -> m_variationID - 0x8
	// -> m_skeleton - 0x10
	// -> m_data - 0x18
	// -> m_warnings - 0x50
	CNmGraphDataSet m_dataSet; // 0x8	
};

