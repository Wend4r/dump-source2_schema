#pragma once

#include <cstdint>

struct CCitadelAutoScaledTime;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xcc0
// Has VTable
// 
// MNetworkVarNames "int m_nFastFireBulletsLeft"
// MNetworkVarNames "CCitadelAutoScaledTime m_flBlitzEndTime"
class CAbility_Synth_Blitz : public CCitadelBaseAbility
{
public:
	CUtlVector< ShotID_t > m_vecSpecialShots; // 0xaf8	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	int32_t m_nFastFireBulletsLeft; // 0xb10	
private:
	[[maybe_unused]] uint8_t __pad0b14[0x4]; // 0xb14
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	CCitadelAutoScaledTime m_flBlitzEndTime; // 0xb18	
	bool m_bCanApplyTechAmp; // 0xb30	
	bool m_bCanLifesteal; // 0xb31	
};

