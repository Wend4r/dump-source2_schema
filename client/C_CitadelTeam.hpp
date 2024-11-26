#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x6a0
// Has VTable
// 
// MNetworkVarNames "EHANDLE m_hPayload"
// MNetworkVarNames "int m_nBossesAlive"
// MNetworkVarNames "int m_nBossesMax"
// MNetworkVarNames "EFlexSlotTypes_t m_nFlexSlotsUnlocked"
// MNetworkVarNames "int m_nBaseGuardianLanesCleared"
// MNetworkVarNames "STeamFOWEntity m_vecFOWEntities"
class C_CitadelTeam : public C_Team
{
public:
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hPayload; // 0x620	
	// MNetworkEnable
	int32_t m_nBossesAlive; // 0x624	
	// MNetworkEnable
	int32_t m_nBossesMax; // 0x628	
	// MNetworkEnable
	EFlexSlotTypes_t m_nFlexSlotsUnlocked; // 0x62c	
private:
	[[maybe_unused]] uint8_t __pad062e[0x2]; // 0x62e
public:
	// MNetworkEnable
	int32_t m_nBaseGuardianLanesCleared; // 0x630	
private:
	[[maybe_unused]] uint8_t __pad0634[0x4]; // 0x634
public:
	// MNetworkEnable
	C_UtlVectorEmbeddedNetworkVar< STeamFOWEntity > m_vecFOWEntities; // 0x638	
};

