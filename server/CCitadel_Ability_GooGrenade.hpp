#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xd48
// Has VTable
// 
// MNetworkVarNames "CUtlVector<EHANDLE> m_vecPuddleModifiers"
class CCitadel_Ability_GooGrenade : public CCitadelBaseAbility
{
public:
	// MNetworkEnable
	CUtlVector< CHandle< CBaseEntity > > m_vecPuddleModifiers; // 0xaf8	
private:
	[[maybe_unused]] uint8_t __pad0b10[0x230]; // 0xb10
public:
	GameTime_t m_LastDetonateTime; // 0xd40	
};

