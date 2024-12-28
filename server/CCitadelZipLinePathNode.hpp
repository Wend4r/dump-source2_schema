#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x510
// Has VTable
class CCitadelZipLinePathNode : public CBaseEntity
{
private:
	[[maybe_unused]] uint8_t __pad04e0[0x8]; // 0x4e0
public:
	bool m_bCornerNode; // 0x4e8	
	bool m_bDisableZippingToByPlayers; // 0x4e9	
	bool m_bEnabled; // 0x4ea	
	bool m_bCapturable; // 0x4eb	
	bool m_bAlwaysUsable; // 0x4ec	
	bool m_bOneWay; // 0x4ed	
private:
	[[maybe_unused]] uint8_t __pad04ee[0x2]; // 0x4ee
public:
	CUtlSymbolLarge m_strGuardBossName; // 0x4f0	
	CUtlSymbolLarge m_strGuardBossName2; // 0x4f8	
	CUtlSymbolLarge m_strGuardBossName3; // 0x500	
private:
	[[maybe_unused]] uint8_t __pad0508[0x4]; // 0x508
public:
	bool m_bUseForMinimapDrawing; // 0x50c	
	
	// Datamap fields:
	// void m_pNode; // 0x508
};

