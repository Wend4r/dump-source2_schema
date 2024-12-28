#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x7e0
// Has VTable
class CFogVolume : public CServerOnlyModelEntity
{
public:
	CUtlSymbolLarge m_fogName; // 0x7b8	
	CUtlSymbolLarge m_postProcessName; // 0x7c0	
	CUtlSymbolLarge m_colorCorrectionName; // 0x7c8	
private:
	[[maybe_unused]] uint8_t __pad07d0[0x8]; // 0x7d0
public:
	bool m_bDisabled; // 0x7d8	
	bool m_bInFogVolumesList; // 0x7d9	
	
	// Datamap fields:
	// void InputEnable; // 0x0
	// void InputDisable; // 0x0
	// CHandle< CBaseEntity > m_hFogController; // 0x7d0
	// CHandle< CBaseEntity > m_hColorCorrectionController; // 0x7d4
};

