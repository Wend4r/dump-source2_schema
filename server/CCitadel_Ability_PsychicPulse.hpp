#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xb48
// Has VTable
// 
// MNetworkVarNames "EHANDLE m_vecPulseTargets"
class CCitadel_Ability_PsychicPulse : public CCitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0af8[0x38]; // 0xaf8
public:
	// MNetworkEnable
	CNetworkUtlVectorBase< CHandle< CBaseEntity > > m_vecPulseTargets; // 0xb30	
};

