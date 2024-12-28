#pragma once

#include <cstdint>

// Registered binary: worldrenderer.dll (project 'worldrenderer')
// Alignment: 4
// Size: 0x20
// Has Trivial Destructor
// 
// MGetKV3ClassDefaults
struct AggregateMeshInfo_t
{
public:
	uint32_t m_nVisClusterMemberOffset; // 0x0	
	uint8_t m_nVisClusterMemberCount; // 0x4	
	bool m_bHasTransform; // 0x5	
	uint8_t m_nLODGroupMask; // 0x6	
private:
	[[maybe_unused]] uint8_t __pad0007[0x1]; // 0x7
public:
	int16_t m_nDrawCallIndex; // 0x8	
	int16_t m_nLODSetupIndex; // 0xa	
	Color m_vTintColor; // 0xc	
	ObjectTypeFlags_t m_objectFlags; // 0x10	
	int32_t m_nLightProbeVolumePrecomputedHandshake; // 0x14	
	uint32_t m_nInstanceStreamOffset; // 0x18	
	AggregateInstanceStream_t m_instanceStreams; // 0x1c	
};

