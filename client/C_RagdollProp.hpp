#pragma once

#include <cstdint>

struct AttachmentHandle_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xb70
// Has VTable
// 
// MNetworkVarNames "Vector m_ragPos"
// MNetworkVarNames "QAngle m_ragAngles"
// MNetworkVarNames "float32 m_flBlendWeight"
// MNetworkVarNames "EHANDLE m_hRagdollSource"
class C_RagdollProp : public CBaseAnimGraph
{
private:
	[[maybe_unused]] uint8_t __pad0af8[0x8]; // 0xaf8
public:
	// MNetworkEnable
	// MNetworkEncoder "coord"
	// MNetworkChangeCallback "ragAnglesChanged"
	C_NetworkUtlVectorBase< Vector > m_ragPos; // 0xb00	
	// MNetworkEnable
	// MNetworkEncoder "qangle"
	// MNetworkBitCount "13"
	// MNetworkChangeCallback "ragAnglesChanged"
	C_NetworkUtlVectorBase< QAngle > m_ragAngles; // 0xb18	
	// MNetworkEnable
	// MNetworkBitCount "8"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "1.000000"
	// MNetworkEncodeFlags "1"
	float m_flBlendWeight; // 0xb30	
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hRagdollSource; // 0xb34	
	AttachmentHandle_t m_iEyeAttachment; // 0xb38	
private:
	[[maybe_unused]] uint8_t __pad0b39[0x3]; // 0xb39
public:
	float m_flBlendWeightCurrent; // 0xb3c	
	CUtlVector< int32 > m_parentPhysicsBoneIndices; // 0xb40	
	CUtlVector< int32 > m_worldSpaceBoneComputationOrder; // 0xb58	
};

