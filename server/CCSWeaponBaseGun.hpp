#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xf90
// Has VTable
// 
// MNetworkVarNames "int m_zoomLevel"
// MNetworkVarNames "int m_iBurstShotsRemaining"
// MNetworkVarNames "bool m_bNeedsBoltAction"
class CCSWeaponBaseGun : public CCSWeaponBase
{
public:
	// MNetworkEnable
	int32_t m_zoomLevel; // 0xf70	
	// MNetworkEnable
	int32_t m_iBurstShotsRemaining; // 0xf74	
private:
	[[maybe_unused]] uint8_t __pad0f78[0x8]; // 0xf78
public:
	int32_t m_silencedModelIndex; // 0xf80	
	bool m_inPrecache; // 0xf84	
	// MNetworkEnable
	bool m_bNeedsBoltAction; // 0xf85	
	bool m_bSkillReloadAvailable; // 0xf86	
	bool m_bSkillReloadLiftedReloadKey; // 0xf87	
	bool m_bSkillBoltInterruptAvailable; // 0xf88	
	bool m_bSkillBoltLiftedFireKey; // 0xf89	
};

