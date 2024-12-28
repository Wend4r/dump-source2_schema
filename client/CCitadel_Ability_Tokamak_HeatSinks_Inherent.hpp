#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xdf8
// Has VTable
// 
// MNetworkVarNames "float m_flDissipationRate"
// MNetworkVarNames "GameTime_t m_flDissipationTime"
// MNetworkVarNames "GameTime_t m_flHeatTime"
// MNetworkVarNames "GameTime_t m_flOverheatSoundTime"
// MNetworkVarNames "bool m_bOverheating"
class CCitadel_Ability_Tokamak_HeatSinks_Inherent : public C_CitadelBaseAbility
{
public:
	int32_t m_nIntervalsElapsed; // 0xc98	
	GameTime_t m_NextShotTime; // 0xc9c	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	float m_flDissipationRate; // 0xca0	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flDissipationTime; // 0xca4	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flHeatTime; // 0xca8	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flOverheatSoundTime; // 0xcac	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	bool m_bOverheating; // 0xcb0	
};

