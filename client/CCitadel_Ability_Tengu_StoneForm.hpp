#pragma once

#include <cstdint>

struct GameTime_t;
struct ParticleIndex_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xe78
// Has VTable
// 
// MNetworkVarNames "GameTime_t m_flStartTime"
// MNetworkVarNames "GameTime_t m_flLandedTime"
// MNetworkVarNames "bool m_bLanded"
// MNetworkVarNames "bool m_bFalling"
// MNetworkVarNames "bool m_bInStoneForm"
// MNetworkVarNames "float m_flStartHeight"
class CCitadel_Ability_Tengu_StoneForm : public C_CitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0c98[0x1c8]; // 0xc98
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flStartTime; // 0xe60	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flLandedTime; // 0xe64	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	bool m_bLanded; // 0xe68	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	bool m_bFalling; // 0xe69	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	bool m_bInStoneForm; // 0xe6a	
private:
	[[maybe_unused]] uint8_t __pad0e6b[0x1]; // 0xe6b
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	float m_flStartHeight; // 0xe6c	
	ParticleIndex_t m_nStoneFormEffect; // 0xe70	
};

