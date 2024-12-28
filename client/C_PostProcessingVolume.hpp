#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x9d8
// Has VTable
// 
// MEntityAllowsPortraitWorldSpawn
// MNetworkVarNames "HPostProcessingStrong m_hPostSettings"
// MNetworkVarNames "float m_flFadeDuration"
// MNetworkVarNames "float m_flMinLogExposure"
// MNetworkVarNames "float m_flMaxLogExposure"
// MNetworkVarNames "float m_flMinExposure"
// MNetworkVarNames "float m_flMaxExposure"
// MNetworkVarNames "float m_flExposureCompensation"
// MNetworkVarNames "float m_flExposureFadeSpeedUp"
// MNetworkVarNames "float m_flExposureFadeSpeedDown"
// MNetworkVarNames "float m_flTonemapEVSmoothingRange"
// MNetworkVarNames "bool m_bMaster"
// MNetworkVarNames "bool m_bExposureControl"
class C_PostProcessingVolume : public C_BaseTrigger
{
private:
	[[maybe_unused]] uint8_t __pad0998[0x10]; // 0x998
public:
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeCPostProcessingResource > m_hPostSettings; // 0x9a8	
	// MNetworkEnable
	float m_flFadeDuration; // 0x9b0	
	// MNetworkEnable
	float m_flMinLogExposure; // 0x9b4	
	// MNetworkEnable
	float m_flMaxLogExposure; // 0x9b8	
	// MNetworkEnable
	float m_flMinExposure; // 0x9bc	
	// MNetworkEnable
	float m_flMaxExposure; // 0x9c0	
	// MNetworkEnable
	float m_flExposureCompensation; // 0x9c4	
	// MNetworkEnable
	float m_flExposureFadeSpeedUp; // 0x9c8	
	// MNetworkEnable
	float m_flExposureFadeSpeedDown; // 0x9cc	
	// MNetworkEnable
	float m_flTonemapEVSmoothingRange; // 0x9d0	
	// MNetworkEnable
	bool m_bMaster; // 0x9d4	
	// MNetworkEnable
	bool m_bExposureControl; // 0x9d5	
};

