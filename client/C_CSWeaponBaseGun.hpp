#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 16
// Size: 0x1b40
// Has VTable
// 
// MNetworkVarNames "int m_zoomLevel"
// MNetworkVarNames "int m_iBurstShotsRemaining"
// MNetworkVarNames "bool m_bNeedsBoltAction"
class C_CSWeaponBaseGun : public C_CSWeaponBase
{
public:
	// MNetworkEnable
	int32_t m_zoomLevel; // 0x1b20	
	// MNetworkEnable
	int32_t m_iBurstShotsRemaining; // 0x1b24	
	int32_t m_iSilencerBodygroup; // 0x1b28	
private:
	[[maybe_unused]] uint8_t __pad1b2c[0xc]; // 0x1b2c
public:
	int32_t m_silencedModelIndex; // 0x1b38	
	bool m_inPrecache; // 0x1b3c	
	// MNetworkEnable
	bool m_bNeedsBoltAction; // 0x1b3d	
};

