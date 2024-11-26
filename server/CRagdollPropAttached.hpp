#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xc20
// Has VTable
// 
// MNetworkVarNames "uint32 m_boneIndexAttached"
// MNetworkVarNames "uint32 m_ragdollAttachedObjectIndex"
// MNetworkVarNames "Vector m_attachmentPointBoneSpace"
// MNetworkVarNames "Vector m_attachmentPointRagdollSpace"
class CRagdollPropAttached : public CRagdollProp
{
public:
	// MNetworkEnable
	uint32_t m_boneIndexAttached; // 0xbe0	
	// MNetworkEnable
	uint32_t m_ragdollAttachedObjectIndex; // 0xbe4	
	// MNetworkEnable
	// MNetworkEncoder "coord"
	Vector m_attachmentPointBoneSpace; // 0xbe8	
	// MNetworkEnable
	// MNetworkEncoder "coord"
	Vector m_attachmentPointRagdollSpace; // 0xbf4	
	bool m_bShouldDetach; // 0xc00	
private:
	[[maybe_unused]] uint8_t __pad0c01[0xf]; // 0xc01
public:
	bool m_bShouldDeleteAttachedActivationRecord; // 0xc10	
};

