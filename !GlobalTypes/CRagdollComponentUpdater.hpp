#pragma once

#include <cstdint>

// Registered binary: animationsystem.dll (project 'animgraphlib')
// Alignment: 8
// Size: 0xc0
// Has VTable
// 
// MGetKV3ClassDefaults
class CRagdollComponentUpdater : public CAnimComponentUpdater
{
public:
	CUtlVector< CAnimNodePath > m_ragdollNodePaths; // 0x30	
	CUtlVector< CAnimNodePath > m_followAttachmentNodePaths; // 0x48	
	CUtlVector< int32 > m_boneIndices; // 0x60	
	CUtlVector< CUtlString > m_boneNames; // 0x78	
	CUtlVector< WeightList > m_weightLists; // 0x90	
	float m_flSpringFrequencyMin; // 0xa8	
	float m_flSpringFrequencyMax; // 0xac	
	float m_flMaxStretch; // 0xb0	
	bool m_bSolidCollisionAtZeroWeight; // 0xb4	
};

