#pragma once

#include <cstdint>

struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x908
// Has VTable
class CEnvBeam : public CBeam
{
public:
	int32_t m_active; // 0x860	
private:
	[[maybe_unused]] uint8_t __pad0864[0x4]; // 0x864
public:
	CStrongHandle< InfoForResourceTypeIMaterial2 > m_spriteTexture; // 0x868	
	CUtlSymbolLarge m_iszStartEntity; // 0x870	
	CUtlSymbolLarge m_iszEndEntity; // 0x878	
	float m_life; // 0x880	
	float m_boltWidth; // 0x884	
	float m_noiseAmplitude; // 0x888	
	int32_t m_speed; // 0x88c	
	float m_restrike; // 0x890	
private:
	[[maybe_unused]] uint8_t __pad0894[0x4]; // 0x894
public:
	CUtlSymbolLarge m_iszSpriteName; // 0x898	
	int32_t m_frameStart; // 0x8a0	
	Vector m_vEndPointWorld; // 0x8a4	
	Vector m_vEndPointRelative; // 0x8b0	
	float m_radius; // 0x8bc	
	Touch_t m_TouchType; // 0x8c0	
private:
	[[maybe_unused]] uint8_t __pad08c4[0x4]; // 0x8c4
public:
	CUtlSymbolLarge m_iFilterName; // 0x8c8	
	CHandle< CBaseEntity > m_hFilter; // 0x8d0	
private:
	[[maybe_unused]] uint8_t __pad08d4[0x4]; // 0x8d4
public:
	CUtlSymbolLarge m_iszDecal; // 0x8d8	
	CEntityIOOutput m_OnTouchedByEntity; // 0x8e0	
	
	// Datamap fields:
	// int32_t m_nClipStyle; // 0x844
	// void CEnvBeamStrikeThink; // 0x0
	// void CEnvBeamUpdateThink; // 0x0
	// void InputTurnOn; // 0x0
	// void InputTurnOff; // 0x0
	// void InputToggle; // 0x0
	// void InputStrikeOnce; // 0x0
};

