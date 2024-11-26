#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x638
// Has VTable
// 
// MNetworkVarNames "EHANDLE m_hPayload"
// MNetworkVarNames "int m_nBossesAlive"
// MNetworkVarNames "int m_nBossesMax"
// MNetworkVarNames "EFlexSlotTypes_t m_nFlexSlotsUnlocked"
// MNetworkVarNames "int m_nBaseGuardianLanesCleared"
// MNetworkVarNames "STeamFOWEntity m_vecFOWEntities"
class CCitadelTeam : public CTeam
{
private:
	[[maybe_unused]] uint8_t __pad05a0[0x18]; // 0x5a0
public:
	// MNetworkEnable
	CHandle< CBaseEntity > m_hPayload; // 0x5b8	
	// MNetworkEnable
	int32_t m_nBossesAlive; // 0x5bc	
	// MNetworkEnable
	int32_t m_nBossesMax; // 0x5c0	
	// MNetworkEnable
	EFlexSlotTypes_t m_nFlexSlotsUnlocked; // 0x5c4	
private:
	[[maybe_unused]] uint8_t __pad05c6[0x2]; // 0x5c6
public:
	// MNetworkEnable
	int32_t m_nBaseGuardianLanesCleared; // 0x5c8	
private:
	[[maybe_unused]] uint8_t __pad05cc[0x4]; // 0x5cc
public:
	// MNetworkEnable
	// MNetworkSendProxyRecipientsFilter
	// MNetworkPriority "32"
	CUtlVectorEmbeddedNetworkVar< STeamFOWEntity > m_vecFOWEntities; // 0x5d0	
};

