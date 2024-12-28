#pragma once

#include <cstdint>

struct GameTime_t;
struct ParticleIndex_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xce8
// Has VTable
// 
// MNetworkVarNames "GameTime_t m_flStartTime"
// MNetworkVarNames "GameTime_t m_flLandedTime"
// MNetworkVarNames "bool m_bLanded"
// MNetworkVarNames "bool m_bFalling"
// MNetworkVarNames "bool m_bInStoneForm"
// MNetworkVarNames "float m_flStartHeight"
class CCitadel_Ability_Tengu_StoneForm : public CCitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0af8[0x1c0]; // 0xaf8
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flStartTime; // 0xcb8	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flLandedTime; // 0xcbc	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	bool m_bLanded; // 0xcc0	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	bool m_bFalling; // 0xcc1	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	bool m_bInStoneForm; // 0xcc2	
private:
	[[maybe_unused]] uint8_t __pad0cc3[0x1]; // 0xcc3
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	float m_flStartHeight; // 0xcc4	
	ParticleIndex_t m_nStoneFormEffect; // 0xcc8	
private:
	[[maybe_unused]] uint8_t __pad0ccc[0x4]; // 0xccc
public:
	CUtlVector< CHandle< CBaseEntity > > m_vecHitEntities; // 0xcd0	
};

