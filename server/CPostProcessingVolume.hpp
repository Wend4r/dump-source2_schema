#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x9b8
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
class CPostProcessingVolume : public CBaseTrigger
{
private:
	[[maybe_unused]] uint8_t __pad0978[0x10]; // 0x978
public:
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeCPostProcessingResource > m_hPostSettings; // 0x988	
	// MNetworkEnable
	float m_flFadeDuration; // 0x990	
	// MNetworkEnable
	float m_flMinLogExposure; // 0x994	
	// MNetworkEnable
	float m_flMaxLogExposure; // 0x998	
	// MNetworkEnable
	float m_flMinExposure; // 0x99c	
	// MNetworkEnable
	float m_flMaxExposure; // 0x9a0	
	// MNetworkEnable
	float m_flExposureCompensation; // 0x9a4	
	// MNetworkEnable
	float m_flExposureFadeSpeedUp; // 0x9a8	
	// MNetworkEnable
	float m_flExposureFadeSpeedDown; // 0x9ac	
	// MNetworkEnable
	float m_flTonemapEVSmoothingRange; // 0x9b0	
	// MNetworkEnable
	bool m_bMaster; // 0x9b4	
	// MNetworkEnable
	bool m_bExposureControl; // 0x9b5	
};

