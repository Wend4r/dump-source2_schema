#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x608
// Has VTable
// 
// MNetworkVarNames "EHANDLE m_hPayload"
// MNetworkVarNames "int m_nBossesAlive"
// MNetworkVarNames "int m_nBossesMax"
// MNetworkVarNames "EFlexSlotTypes_t m_nFlexSlotsUnlocked"
// MNetworkVarNames "STeamFOWEntity m_vecFOWEntities"
class CCitadelTeam : public CTeam
{
private:
	[[maybe_unused]] uint8_t __pad0590[0x18]; // 0x590
public:
	// MNetworkEnable
	CHandle< CBaseEntity > m_hPayload; // 0x5a8	
	// MNetworkEnable
	int32_t m_nBossesAlive; // 0x5ac	
	// MNetworkEnable
	int32_t m_nBossesMax; // 0x5b0	
	// MNetworkEnable
	EFlexSlotTypes_t m_nFlexSlotsUnlocked; // 0x5b4	
private:
	[[maybe_unused]] uint8_t __pad05b6[0x2]; // 0x5b6
public:
	// MNetworkEnable
	// MNetworkSendProxyRecipientsFilter
	// MNetworkPriority "32"
	CUtlVectorEmbeddedNetworkVar< STeamFOWEntity > m_vecFOWEntities; // 0x5b8	
};
