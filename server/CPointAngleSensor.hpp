#pragma once

#include <cstdint>

struct GameTime_t;
struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x5b0
// Has VTable
class CPointAngleSensor : public CPointEntity
{
public:
	bool m_bDisabled; // 0x4e8	
private:
	[[maybe_unused]] uint8_t __pad04e9[0x7]; // 0x4e9
public:
	CUtlSymbolLarge m_nLookAtName; // 0x4f0	
	CHandle< CBaseEntity > m_hTargetEntity; // 0x4f8	
	CHandle< CBaseEntity > m_hLookAtEntity; // 0x4fc	
	float m_flDuration; // 0x500	
	float m_flDotTolerance; // 0x504	
	GameTime_t m_flFacingTime; // 0x508	
	bool m_bFired; // 0x50c	
private:
	[[maybe_unused]] uint8_t __pad050d[0x3]; // 0x50d
public:
	CEntityIOOutput m_OnFacingLookat; // 0x510	
	CEntityIOOutput m_OnNotFacingLookat; // 0x538	
	CEntityOutputTemplate< Vector > m_TargetDir; // 0x560	
	CEntityOutputTemplate< float32 > m_FacingPercentage; // 0x588	
	
	// Datamap fields:
	// void InputEnable; // 0x0
	// void InputDisable; // 0x0
	// void InputToggle; // 0x0
	// void InputTest; // 0x0
	// CUtlSymbolLarge InputSetTargetEntity; // 0x0
	// float tolerance; // 0x7fffffff
};

