#pragma once

#include <cstdint>

struct ParticleIndex_t;
struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xcb0
// Has VTable
// 
// MNetworkVarNames "bool m_bSprinting"
// MNetworkVarNames "GameTime_t m_flInCombatStartTime"
// MNetworkVarNames "GameTime_t m_flInCombatEndTime"
// MNetworkVarNames "GameTime_t m_flSprintStartTime"
class CCitadel_Ability_Sprint : public C_CitadelBaseAbility
{
public:
	ParticleIndex_t m_nSprintParticle; // 0xc98	
	// MNetworkEnable
	// MNetworkChangeCallback "OnSprintingChanged"
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	bool m_bSprinting; // 0xc9c	
private:
	[[maybe_unused]] uint8_t __pad0c9d[0x3]; // 0xc9d
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flInCombatStartTime; // 0xca0	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flInCombatEndTime; // 0xca4	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flSprintStartTime; // 0xca8	
	bool m_bInCombat; // 0xcac	
};

