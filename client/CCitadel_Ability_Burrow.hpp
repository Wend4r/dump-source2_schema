#pragma once

#include <cstdint>

struct GameTime_t;
struct ParticleIndex_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xd88
// Has VTable
// 
// MNetworkVarNames "bool m_bInGround"
// MNetworkVarNames "GameTime_t m_SpinEndTime"
class CCitadel_Ability_Burrow : public C_CitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0c98[0xe0]; // 0xc98
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	bool m_bInGround; // 0xd78	
private:
	[[maybe_unused]] uint8_t __pad0d79[0x3]; // 0xd79
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_SpinEndTime; // 0xd7c	
	ParticleIndex_t m_nBurrowEffect; // 0xd80	
};

