#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x7e8
// Has VTable
class CFogVolume : public CServerOnlyModelEntity
{
public:
	CUtlSymbolLarge m_fogName; // 0x7c0	
	CUtlSymbolLarge m_postProcessName; // 0x7c8	
	CUtlSymbolLarge m_colorCorrectionName; // 0x7d0	
private:
	[[maybe_unused]] uint8_t __pad07d8[0x8]; // 0x7d8
public:
	bool m_bDisabled; // 0x7e0	
	bool m_bInFogVolumesList; // 0x7e1	
	
	// Datamap fields:
	// void InputEnable; // 0x0
	// void InputDisable; // 0x0
	// CHandle< CBaseEntity > m_hFogController; // 0x7d8
	// CHandle< CBaseEntity > m_hColorCorrectionController; // 0x7dc
};

