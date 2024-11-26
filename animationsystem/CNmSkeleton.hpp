#pragma once

#include <cstdint>

// Registered binary: animationsystem.dll (project 'animlib')
// Alignment: 8
// Size: 0x88
// 
// MGetKV3ClassDefaults
class CNmSkeleton
{
public:
	CGlobalSymbol m_ID; // 0x0	
	CUtlLeanVector< CGlobalSymbol > m_boneIDs; // 0x8	
	CUtlVector< int32 > m_parentIndices; // 0x18	
	CUtlVector< CTransform > m_parentSpaceReferencePose; // 0x30	
	CUtlVector< CTransform > m_modelSpaceReferencePose; // 0x48	
	int32_t m_numBonesToSampleAtLowLOD; // 0x60	
private:
	[[maybe_unused]] uint8_t __pad0064[0x4]; // 0x64
public:
	CUtlLeanVector< CNmBoneMask::SerializedData_t > m_serializedMasks; // 0x68	
};

