#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x9a0
// Has VTable
class CTriggerSoundscape : public CBaseTrigger
{
public:
	CHandle< CEnvSoundscapeTriggerable > m_hSoundscape; // 0x978	
private:
	[[maybe_unused]] uint8_t __pad097c[0x4]; // 0x97c
public:
	CUtlSymbolLarge m_SoundscapeName; // 0x980	
	CUtlVector< CHandle< CBasePlayerPawn > > m_spectators; // 0x988	
	
	// Datamap fields:
	// void CTriggerSoundscapePlayerUpdateThink; // 0x0
};

