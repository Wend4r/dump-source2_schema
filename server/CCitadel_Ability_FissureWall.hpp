#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xc00
// Has VTable
// 
// MNetworkVarNames "Vector m_vecStartPos"
// MNetworkVarNames "Vector m_vecPosition"
// MNetworkVarNames "Vector m_vecInitialPosition"
// MNetworkVarNames "GameTime_t m_CastTime"
// MNetworkVarNames "Vector m_vecDirection"
// MNetworkVarNames "Vector m_vecLeft"
// MNetworkVarNames "float m_Length"
// MNetworkVarNames "bool m_bTraveling"
// MNetworkVarNames "bool m_bPreview"
class CCitadel_Ability_FissureWall : public CCitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0af8[0xb8]; // 0xaf8
public:
	// MNetworkEnable
	Vector m_vecStartPos; // 0xbb0	
	// MNetworkEnable
	Vector m_vecPosition; // 0xbbc	
	// MNetworkEnable
	Vector m_vecInitialPosition; // 0xbc8	
	// MNetworkEnable
	GameTime_t m_CastTime; // 0xbd4	
	// MNetworkEnable
	Vector m_vecDirection; // 0xbd8	
	// MNetworkEnable
	Vector m_vecLeft; // 0xbe4	
	// MNetworkEnable
	float m_Length; // 0xbf0	
private:
	[[maybe_unused]] uint8_t __pad0bf4[0xa]; // 0xbf4
public:
	// MNetworkEnable
	bool m_bTraveling; // 0xbfe	
	// MNetworkEnable
	bool m_bPreview; // 0xbff	
};

