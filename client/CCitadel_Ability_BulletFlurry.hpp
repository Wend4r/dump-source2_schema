#pragma once

#include <cstdint>

struct CCitadelAutoScaledTime;
struct GameTime_t;
struct SatVolumeIndex_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xe00
// Has VTable
// 
// MNetworkVarNames "CCitadelAutoScaledTime m_flFlurryEndTime"
// MNetworkVarNames "GameTime_t m_flNextAttackTime"
class CCitadel_Ability_BulletFlurry : public C_CitadelBaseAbility
{
public:
	// MNetworkEnable
	CCitadelAutoScaledTime m_flFlurryEndTime; // 0xc98	
	// MNetworkEnable
	GameTime_t m_flNextAttackTime; // 0xcb0	
private:
	[[maybe_unused]] uint8_t __pad0cb4[0x11c]; // 0xcb4
public:
	CUtlVector< CHandle< C_BaseEntity > > m_vecShootTargets; // 0xdd0	
	int32_t m_nNumPlayersKilled; // 0xde8	
	int32_t m_nShootIndex; // 0xdec	
	int32_t m_nShootIndexNPC; // 0xdf0	
	int32_t m_nBurstShots; // 0xdf4	
	SatVolumeIndex_t m_nSatVolumeIndex; // 0xdf8	
	bool m_bHasCameraOverride; // 0xdfc	
};

