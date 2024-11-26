#pragma once

#include <cstdint>

struct CCitadelAutoScaledTime;
struct GameTime_t;
struct SatVolumeIndex_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xe08
// Has VTable
// 
// MNetworkVarNames "CCitadelAutoScaledTime m_flFlurryEndTime"
class CCitadel_Ability_BulletFlurry : public C_CitadelBaseAbility
{
public:
	// MNetworkEnable
	CCitadelAutoScaledTime m_flFlurryEndTime; // 0xca0	
private:
	[[maybe_unused]] uint8_t __pad0cb8[0x118]; // 0xcb8
public:
	CUtlVector< CHandle< C_BaseEntity > > m_vecShootTargets; // 0xdd0	
	int32_t m_nNumPlayersKilled; // 0xde8	
	int32_t m_nShootIndex; // 0xdec	
	int32_t m_nShootIndexNPC; // 0xdf0	
	int32_t m_nBurstShots; // 0xdf4	
	GameTime_t m_flNextAttackTime; // 0xdf8	
	SatVolumeIndex_t m_nSatVolumeIndex; // 0xdfc	
	bool m_bHasCameraOverride; // 0xe00	
};

