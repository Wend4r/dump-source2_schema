#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xc58
// Has VTable
// 
// MNetworkVarNames "float m_flDissipationRate"
// MNetworkVarNames "GameTime_t m_flDissipationTime"
// MNetworkVarNames "GameTime_t m_flHeatTime"
// MNetworkVarNames "GameTime_t m_flOverheatSoundTime"
// MNetworkVarNames "bool m_bOverheating"
class CCitadel_Ability_Tokamak_HeatSinks_Inherent : public CCitadelBaseAbility
{
public:
	int32_t m_nIntervalsElapsed; // 0xaf8	
	GameTime_t m_NextShotTime; // 0xafc	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	float m_flDissipationRate; // 0xb00	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flDissipationTime; // 0xb04	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flHeatTime; // 0xb08	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flOverheatSoundTime; // 0xb0c	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	bool m_bOverheating; // 0xb10	
};

