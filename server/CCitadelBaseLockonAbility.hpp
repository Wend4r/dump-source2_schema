#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xc80
// Has VTable
// 
// MNetworkVarNames "LockonTarget_t m_vecLockonTargets"
// MNetworkVarNames "GameTime_t m_LockOnStartTime"
class CCitadelBaseLockonAbility : public CCitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0af8[0x118]; // 0xaf8
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	CUtlVectorEmbeddedNetworkVar< LockonTarget_t > m_vecLockonTargets; // 0xc10	
	// MNetworkEnable
	GameTime_t m_LockOnStartTime; // 0xc78	
};

