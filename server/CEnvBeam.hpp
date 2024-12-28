#pragma once

#include <cstdint>

struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x900
// Has VTable
class CEnvBeam : public CBeam
{
public:
	int32_t m_active; // 0x858	
private:
	[[maybe_unused]] uint8_t __pad085c[0x4]; // 0x85c
public:
	CStrongHandle< InfoForResourceTypeIMaterial2 > m_spriteTexture; // 0x860	
	CUtlSymbolLarge m_iszStartEntity; // 0x868	
	CUtlSymbolLarge m_iszEndEntity; // 0x870	
	float m_life; // 0x878	
	float m_boltWidth; // 0x87c	
	float m_noiseAmplitude; // 0x880	
	int32_t m_speed; // 0x884	
	float m_restrike; // 0x888	
private:
	[[maybe_unused]] uint8_t __pad088c[0x4]; // 0x88c
public:
	CUtlSymbolLarge m_iszSpriteName; // 0x890	
	int32_t m_frameStart; // 0x898	
	Vector m_vEndPointWorld; // 0x89c	
	Vector m_vEndPointRelative; // 0x8a8	
	float m_radius; // 0x8b4	
	Touch_t m_TouchType; // 0x8b8	
private:
	[[maybe_unused]] uint8_t __pad08bc[0x4]; // 0x8bc
public:
	CUtlSymbolLarge m_iFilterName; // 0x8c0	
	CHandle< CBaseEntity > m_hFilter; // 0x8c8	
private:
	[[maybe_unused]] uint8_t __pad08cc[0x4]; // 0x8cc
public:
	CUtlSymbolLarge m_iszDecal; // 0x8d0	
	CEntityIOOutput m_OnTouchedByEntity; // 0x8d8	
	
	// Datamap fields:
	// int32_t m_nClipStyle; // 0x83c
	// void CEnvBeamStrikeThink; // 0x0
	// void CEnvBeamUpdateThink; // 0x0
	// void InputTurnOn; // 0x0
	// void InputTurnOff; // 0x0
	// void InputToggle; // 0x0
	// void InputStrikeOnce; // 0x0
};

