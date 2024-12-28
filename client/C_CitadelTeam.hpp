#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x698
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
	CHandle< C_BaseEntity > m_hPayload; // 0x618	
	// MNetworkEnable
	int32_t m_nBossesAlive; // 0x61c	
	// MNetworkEnable
	int32_t m_nBossesMax; // 0x620	
	// MNetworkEnable
	EFlexSlotTypes_t m_nFlexSlotsUnlocked; // 0x624	
private:
	[[maybe_unused]] uint8_t __pad0626[0x2]; // 0x626
public:
	// MNetworkEnable
	int32_t m_nBaseGuardianLanesCleared; // 0x628	
private:
	[[maybe_unused]] uint8_t __pad062c[0x4]; // 0x62c
public:
	// MNetworkEnable
	C_UtlVectorEmbeddedNetworkVar< STeamFOWEntity > m_vecFOWEntities; // 0x630	
};

