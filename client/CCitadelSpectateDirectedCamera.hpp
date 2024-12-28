#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x578
// Has VTable
// 
// MNetworkVarNames "float m_flCameraDist"
// MNetworkVarNames "float m_flCameraPitch"
// MNetworkVarNames "float m_flCameraHeight"
// MNetworkVarNames "EHANDLE m_hTarget"
class CCitadelSpectateDirectedCamera : public C_BaseEntity
{
private:
	[[maybe_unused]] uint8_t __pad0560[0x4]; // 0x560
public:
	// MNetworkEnable
	// MNetworkPriority "32"
	float m_flCameraDist; // 0x564	
	// MNetworkEnable
	float m_flCameraPitch; // 0x568	
	// MNetworkEnable
	float m_flCameraHeight; // 0x56c	
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hTarget; // 0x570	
};

