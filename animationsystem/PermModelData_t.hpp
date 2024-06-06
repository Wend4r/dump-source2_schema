#pragma once

#include <cstdint>

struct PermModelInfo_t;
struct ModelSkeletonData_t;
struct CModelConfigList;
// Registered binary: animationsystem.dll (project 'modellib')
// Alignment: 8
// Size: 0x2c8
// 
// MGetKV3ClassDefaults
struct PermModelData_t
{
public:
	CUtlString m_name; // 0x0	
	// -> m_nFlags - 0x8
	// -> m_vHullMin - 0xc
	// -> m_vHullMax - 0x18
	// -> m_vViewMin - 0x24
	// -> m_vViewMax - 0x30
	// -> m_flMass - 0x3c
	// -> m_vEyePosition - 0x40
	// -> m_flMaxEyeDeflection - 0x4c
	// -> m_sSurfaceProperty - 0x50
	// -> m_keyValueText - 0x58
	PermModelInfo_t m_modelInfo; // 0x8	
	CUtlVector< PermModelExtPart_t > m_ExtParts; // 0x60	
	CUtlVector< CStrongHandle< InfoForResourceTypeCRenderMesh > > m_refMeshes; // 0x78	
	CUtlVector< uint64 > m_refMeshGroupMasks; // 0x90	
	CUtlVector< uint64 > m_refPhysGroupMasks; // 0xa8	
	CUtlVector< uint8 > m_refLODGroupMasks; // 0xc0	
	CUtlVector< float32 > m_lodGroupSwitchDistances; // 0xd8	
	CUtlVector< CStrongHandle< InfoForResourceTypeCPhysAggregateData > > m_refPhysicsData; // 0xf0	
	CUtlVector< CStrongHandle< InfoForResourceTypeCPhysAggregateData > > m_refPhysicsHitboxData; // 0x108	
	CUtlVector< CStrongHandle< InfoForResourceTypeCAnimationGroup > > m_refAnimGroups; // 0x120	
	CUtlVector< CStrongHandle< InfoForResourceTypeCSequenceGroupData > > m_refSequenceGroups; // 0x138	
	CUtlVector< CUtlString > m_meshGroups; // 0x150	
	CUtlVector< MaterialGroup_t > m_materialGroups; // 0x168	
	uint64_t m_nDefaultMeshGroupMask; // 0x180	
	// -> m_boneName - 0x188
	// -> m_nParent - 0x1a0
	// -> m_boneSphere - 0x1b8
	// -> m_nFlag - 0x1d0
	// -> m_bonePosParent - 0x1e8
	// -> m_boneRotParent - 0x200
	// -> m_boneScaleParent - 0x218
	ModelSkeletonData_t m_modelSkeleton; // 0x188	
	CUtlVector< int16 > m_remappingTable; // 0x230	
	CUtlVector< uint16 > m_remappingTableStarts; // 0x248	
	CUtlVector< ModelBoneFlexDriver_t > m_boneFlexDrivers; // 0x260	
	CModelConfigList* m_pModelConfigList; // 0x278	
	CUtlVector< CUtlString > m_BodyGroupsHiddenInTools; // 0x280	
	CUtlVector< CStrongHandle< InfoForResourceTypeCModel > > m_refAnimIncludeModels; // 0x298	
	CUtlVector< PermModelDataAnimatedMaterialAttribute_t > m_AnimatedMaterialAttributes; // 0x2b0	
};

