#pragma once

#include <cstdint>

// Registered binary: animationsystem.dll (project 'modellib')
// Alignment: 8
// Size: 0xa0
// 
// MGetKV3ClassDefaults
class CRenderGroom
{
public:
	CUtlVector< RenderHairStrandInfo_t > m_hairs; // 0x0	
	CUtlVector< uint32 > m_hairPositionOffsets; // 0x18	
private:
	[[maybe_unused]] uint8_t __pad0030[0x10]; // 0x30
public:
	CStrongHandleCopyable< InfoForResourceTypeIMaterial2 > m_hSimParamsMat; // 0x40	
	CUtlVector< int32 > m_strandSegmentCountHist; // 0x48	
private:
	[[maybe_unused]] uint8_t __pad0060[0x18]; // 0x60
public:
	int32_t m_nMaxSegmentsPerHairStrand; // 0x78	
	int32_t m_nGuideHairCount; // 0x7c	
	int32_t m_nHairCount; // 0x80	
	int32_t m_nTotalVertexCount; // 0x84	
	int32_t m_nTotalSegmentCount; // 0x88	
	int32_t m_nGroomGroupID; // 0x8c	
	int32_t m_nAttachBoneIdx; // 0x90	
	int32_t m_nAttachMeshIdx; // 0x94	
	int32_t m_nAttachMeshDrawCallIdx; // 0x98	
	bool m_bEnableSimulation; // 0x9c	
};

