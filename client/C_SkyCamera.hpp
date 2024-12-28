#pragma once

#include <cstdint>

struct sky3dparams_t;
struct C_SkyCamera;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x600
// Has VTable
// 
// MNetworkVarNames "sky3dparams_t m_skyboxData"
// MNetworkVarNames "CUtlStringToken m_skyboxSlotToken"
class C_SkyCamera : public C_BaseEntity
{
public:
	// MNetworkEnable
	// -> scale - 0x568
	// -> origin - 0x56c
	// -> bClip3DSkyBoxNearToWorldFar - 0x578
	// -> flClip3DSkyBoxNearToWorldFarOffset - 0x57c
	// -> fog - 0x580
	// -> m_nWorldGroupID - 0x5e8
	sky3dparams_t m_skyboxData; // 0x560	
	// MNetworkEnable
	CUtlStringToken m_skyboxSlotToken; // 0x5f0	
	bool m_bUseAngles; // 0x5f4	
private:
	[[maybe_unused]] uint8_t __pad05f5[0x3]; // 0x5f5
public:
	C_SkyCamera* m_pNext; // 0x5f8	
	
	// Datamap fields:
	// int16_t m_skyboxData.scale; // 0x568
	// Vector m_skyboxData.origin; // 0x56c
	// bool m_skyboxData.bClip3DSkyBoxNearToWorldFar; // 0x578
	// float m_skyboxData.flClip3DSkyBoxNearToWorldFarOffset; // 0x57c
	// bool m_skyboxData.fog.enable; // 0x5e4
	// bool m_skyboxData.fog.blend; // 0x5e5
	// Vector m_skyboxData.fog.dirPrimary; // 0x588
	// Color m_skyboxData.fog.colorPrimary; // 0x594
	// Color m_skyboxData.fog.colorSecondary; // 0x598
	// float m_skyboxData.fog.start; // 0x5a4
	// float m_skyboxData.fog.end; // 0x5a8
	// float m_skyboxData.fog.maxdensity; // 0x5b0
};

