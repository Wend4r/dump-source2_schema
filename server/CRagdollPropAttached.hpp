#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xc18
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
	uint32_t m_boneIndexAttached; // 0xbd8	
	// MNetworkEnable
	uint32_t m_ragdollAttachedObjectIndex; // 0xbdc	
	// MNetworkEnable
	// MNetworkEncoder "coord"
	Vector m_attachmentPointBoneSpace; // 0xbe0	
	// MNetworkEnable
	// MNetworkEncoder "coord"
	Vector m_attachmentPointRagdollSpace; // 0xbec	
	bool m_bShouldDetach; // 0xbf8	
private:
	[[maybe_unused]] uint8_t __pad0bf9[0xf]; // 0xbf9
public:
	bool m_bShouldDeleteAttachedActivationRecord; // 0xc08	
};

