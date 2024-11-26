#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x518
// Has VTable
class CCitadelZipLinePathNode : public CBaseEntity
{
private:
	[[maybe_unused]] uint8_t __pad04e8[0x8]; // 0x4e8
public:
	bool m_bCornerNode; // 0x4f0	
	bool m_bDisableZippingToByPlayers; // 0x4f1	
	bool m_bEnabled; // 0x4f2	
	bool m_bCapturable; // 0x4f3	
	bool m_bAlwaysUsable; // 0x4f4	
	bool m_bOneWay; // 0x4f5	
private:
	[[maybe_unused]] uint8_t __pad04f6[0x2]; // 0x4f6
public:
	CUtlSymbolLarge m_strGuardBossName; // 0x4f8	
	CUtlSymbolLarge m_strGuardBossName2; // 0x500	
	CUtlSymbolLarge m_strGuardBossName3; // 0x508	
private:
	[[maybe_unused]] uint8_t __pad0510[0x4]; // 0x510
public:
	bool m_bUseForMinimapDrawing; // 0x514	
	
	// Datamap fields:
	// void m_pNode; // 0x510
};

