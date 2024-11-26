#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x528
// Has VTable
class CTankTrainAI : public CPointEntity
{
public:
	CHandle< CFuncTrackTrain > m_hTrain; // 0x4e8	
	CHandle< CBaseEntity > m_hTargetEntity; // 0x4ec	
	int32_t m_soundPlaying; // 0x4f0	
private:
	[[maybe_unused]] uint8_t __pad04f4[0x14]; // 0x4f4
public:
	CUtlSymbolLarge m_startSoundName; // 0x508	
	CUtlSymbolLarge m_engineSoundName; // 0x510	
	CUtlSymbolLarge m_movementSoundName; // 0x518	
	CUtlSymbolLarge m_targetEntityName; // 0x520	
	
	// Datamap fields:
	// void m_soundTreads; // 0x4f8
	// void m_soundEngine; // 0x500
	// CUtlSymbolLarge InputTargetEntity; // 0x0
};

