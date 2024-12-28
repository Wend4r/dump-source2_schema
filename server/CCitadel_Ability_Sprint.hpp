#pragma once

#include <cstdint>

struct ParticleIndex_t;
struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xb10
// Has VTable
// 
// MNetworkVarNames "bool m_bSprinting"
// MNetworkVarNames "GameTime_t m_flInCombatStartTime"
// MNetworkVarNames "GameTime_t m_flInCombatEndTime"
// MNetworkVarNames "GameTime_t m_flSprintStartTime"
class CCitadel_Ability_Sprint : public CCitadelBaseAbility
{
public:
	ParticleIndex_t m_nSprintParticle; // 0xaf8	
	// MNetworkEnable
	// MNetworkChangeCallback "OnSprintingChanged"
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	bool m_bSprinting; // 0xafc	
private:
	[[maybe_unused]] uint8_t __pad0afd[0x3]; // 0xafd
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flInCombatStartTime; // 0xb00	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flInCombatEndTime; // 0xb04	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flSprintStartTime; // 0xb08	
	bool m_bInCombat; // 0xb0c	
};

