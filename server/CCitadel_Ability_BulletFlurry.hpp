#pragma once

#include <cstdint>

struct CCitadelAutoScaledTime;
struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xc60
// Has VTable
// 
// MNetworkVarNames "CCitadelAutoScaledTime m_flFlurryEndTime"
class CCitadel_Ability_BulletFlurry : public CCitadelBaseAbility
{
public:
	// MNetworkEnable
	CCitadelAutoScaledTime m_flFlurryEndTime; // 0xb00	
private:
	[[maybe_unused]] uint8_t __pad0b18[0x118]; // 0xb18
public:
	CUtlVector< CHandle< CBaseEntity > > m_vecShootTargets; // 0xc30	
	int32_t m_nNumPlayersKilled; // 0xc48	
	int32_t m_nShootIndex; // 0xc4c	
	int32_t m_nShootIndexNPC; // 0xc50	
	int32_t m_nBurstShots; // 0xc54	
	GameTime_t m_flNextAttackTime; // 0xc58	
	bool m_bHasCameraOverride; // 0xc5c	
};

