#pragma once

#include <cstdint>

struct sky3dparams_t;
struct CSkyCamera;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x588
// Has VTable
// 
// MNetworkVarNames "sky3dparams_t m_skyboxData"
// MNetworkVarNames "CUtlStringToken m_skyboxSlotToken"
class CSkyCamera : public CBaseEntity
{
public:
	// MNetworkEnable
	// -> scale - 0x4f0
	// -> origin - 0x4f4
	// -> bClip3DSkyBoxNearToWorldFar - 0x500
	// -> flClip3DSkyBoxNearToWorldFarOffset - 0x504
	// -> fog - 0x508
	// -> m_nWorldGroupID - 0x570
	sky3dparams_t m_skyboxData; // 0x4e8	
	// MNetworkEnable
	CUtlStringToken m_skyboxSlotToken; // 0x578	
	bool m_bUseAngles; // 0x57c	
private:
	[[maybe_unused]] uint8_t __pad057d[0x3]; // 0x57d
public:
	CSkyCamera* m_pNext; // 0x580	
	
	// Datamap fields:
	// int16_t m_skyboxData.scale; // 0x4f0
	// Vector m_skyboxData.origin; // 0x4f4
	// bool m_skyboxData.bClip3DSkyBoxNearToWorldFar; // 0x500
	// float m_skyboxData.flClip3DSkyBoxNearToWorldFarOffset; // 0x504
	// bool m_skyboxData.fog.enable; // 0x56c
	// bool m_skyboxData.fog.blend; // 0x56d
	// Vector m_skyboxData.fog.dirPrimary; // 0x510
	// Color m_skyboxData.fog.colorPrimary; // 0x51c
	// Color m_skyboxData.fog.colorSecondary; // 0x520
	// float m_skyboxData.fog.start; // 0x52c
	// float m_skyboxData.fog.end; // 0x530
	// float m_skyboxData.fog.maxdensity; // 0x538
	// void InputActivateSkybox; // 0x0
};

