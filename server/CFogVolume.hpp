#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x738
// Has VTable
class CFogVolume : public CServerOnlyModelEntity
{
public:
	CUtlSymbolLarge m_fogName; // 0x710	
	CUtlSymbolLarge m_postProcessName; // 0x718	
	CUtlSymbolLarge m_colorCorrectionName; // 0x720	
private:
	[[maybe_unused]] uint8_t __pad0728[0x8]; // 0x728
public:
	bool m_bDisabled; // 0x730	
	bool m_bInFogVolumesList; // 0x731	
	
	// Datamap fields:
	// void InputEnable; // 0x0
	// void InputDisable; // 0x0
	// CHandle< CBaseEntity > m_hFogController; // 0x728
	// CHandle< CBaseEntity > m_hColorCorrectionController; // 0x72c
};
