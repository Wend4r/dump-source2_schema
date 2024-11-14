#pragma once

#include <cstdint>

struct GameTime_t;
struct EntitySpottedState_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xff0
// Has VTable
// 
// MNetworkVarNames "bool m_bStartedArming"
// MNetworkVarNames "GameTime_t m_fArmedTime"
// MNetworkVarNames "bool m_bBombPlacedAnimation"
// MNetworkVarNames "bool m_bIsPlantingViaUse"
// MNetworkVarNames "EntitySpottedState_t m_entitySpottedState"
class CC4 : public CCSWeaponBase
{
private:
	[[maybe_unused]] uint8_t __pad0f70[0x30]; // 0xf70
public:
	Vector m_vecLastValidPlayerHeldPosition; // 0xfa0	
	Vector m_vecLastValidDroppedPosition; // 0xfac	
	bool m_bDoValidDroppedPositionCheck; // 0xfb8	
	// MNetworkEnable
	bool m_bStartedArming; // 0xfb9	
private:
	[[maybe_unused]] uint8_t __pad0fba[0x2]; // 0xfba
public:
	// MNetworkEnable
	GameTime_t m_fArmedTime; // 0xfbc	
	// MNetworkEnable
	bool m_bBombPlacedAnimation; // 0xfc0	
	// MNetworkEnable
	bool m_bIsPlantingViaUse; // 0xfc1	
private:
	[[maybe_unused]] uint8_t __pad0fc2[0x6]; // 0xfc2
public:
	// MNetworkEnable
	EntitySpottedState_t m_entitySpottedState; // 0xfc8	
	int32_t m_nSpotRules; // 0xfe0	
	bool m_bPlayedArmingBeeps[7]; // 0xfe4	
	bool m_bBombPlanted; // 0xfeb	
};

