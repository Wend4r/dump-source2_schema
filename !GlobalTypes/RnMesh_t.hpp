#pragma once

#include <cstdint>

// Registered binary: vphysics2.dll (project 'physicslib')
// Alignment: 8
// Size: 0xa8
// 
// MGetKV3ClassDefaults
struct RnMesh_t
{
public:
	Vector m_vMin; // 0x0	
	Vector m_vMax; // 0xc	
	CUtlVector< RnNode_t > m_Nodes; // 0x18	
	CUtlVectorSIMDPaddedVector m_Vertices; // 0x30	
	CUtlVector< RnTriangle_t > m_Triangles; // 0x48	
	CUtlVector< RnWing_t > m_Wings; // 0x60	
	CUtlVector< uint8 > m_Materials; // 0x78	
	Vector m_vOrthographicAreas; // 0x90	
	uint32_t m_nFlags; // 0x9c	
	uint32_t m_nDebugFlags; // 0xa0	
};

