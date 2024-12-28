#pragma once

#include <cstdint>

struct CCitadelAutoScaledTime;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xe60
// Has VTable
// 
// MNetworkVarNames "int m_nFastFireBulletsLeft"
// MNetworkVarNames "CCitadelAutoScaledTime m_flBlitzEndTime"
class CAbility_Synth_Blitz : public C_CitadelBaseAbility
{
public:
	CUtlVector< ShotID_t > m_vecSpecialShots; // 0xc98	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	int32_t m_nFastFireBulletsLeft; // 0xcb0	
private:
	[[maybe_unused]] uint8_t __pad0cb4[0x4]; // 0xcb4
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	CCitadelAutoScaledTime m_flBlitzEndTime; // 0xcb8	
	bool m_bCanApplyTechAmp; // 0xcd0	
	bool m_bCanLifesteal; // 0xcd1	
};

