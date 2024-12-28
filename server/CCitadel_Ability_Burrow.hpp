#pragma once

#include <cstdint>

struct GameTime_t;
struct ParticleIndex_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xbe8
// Has VTable
// 
// MNetworkVarNames "bool m_bInGround"
// MNetworkVarNames "GameTime_t m_SpinEndTime"
class CCitadel_Ability_Burrow : public CCitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0af8[0xe0]; // 0xaf8
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	bool m_bInGround; // 0xbd8	
private:
	[[maybe_unused]] uint8_t __pad0bd9[0x3]; // 0xbd9
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_SpinEndTime; // 0xbdc	
	ParticleIndex_t m_nBurrowEffect; // 0xbe0	
};

