#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x510
// Has VTable
class CPointPush : public CPointEntity
{
public:
	bool m_bEnabled; // 0x4e8	
private:
	[[maybe_unused]] uint8_t __pad04e9[0x3]; // 0x4e9
public:
	float m_flMagnitude; // 0x4ec	
	float m_flRadius; // 0x4f0	
	float m_flInnerRadius; // 0x4f4	
	float m_flConeOfInfluence; // 0x4f8	
private:
	[[maybe_unused]] uint8_t __pad04fc[0x4]; // 0x4fc
public:
	CUtlSymbolLarge m_iszFilterName; // 0x500	
	CHandle< CBaseFilter > m_hFilter; // 0x508	
	
	// Datamap fields:
	// void CPointPushPushThink; // 0x0
	// void InputEnable; // 0x0
	// void InputDisable; // 0x0
};

