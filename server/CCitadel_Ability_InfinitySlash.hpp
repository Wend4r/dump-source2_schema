#pragma once

#include <cstdint>

struct GameTime_t;
struct ParticleIndex_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xc28
// Has VTable
// 
// MNetworkVarNames "GameTime_t m_flExplodeEndTime"
// MNetworkVarNames "GameTime_t m_flBuffEndTime"
class CCitadel_Ability_InfinitySlash : public CCitadelBaseYamatoAbility
{
private:
	[[maybe_unused]] uint8_t __pad0b00[0x118]; // 0xb00
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flExplodeEndTime; // 0xc18	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flBuffEndTime; // 0xc1c	
	ParticleIndex_t m_nCastEffect; // 0xc20	
};

