#pragma once

#include <cstdint>

struct CSprite;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x880
// Has VTable
class CEnvLaser : public CBeam
{
public:
	CUtlSymbolLarge m_iszLaserTarget; // 0x858	
	CSprite* m_pSprite; // 0x860	
	CUtlSymbolLarge m_iszSpriteName; // 0x868	
	Vector m_firePosition; // 0x870	
	float m_flStartFrame; // 0x87c	
	
	// Datamap fields:
	// void CEnvLaserStrikeThink; // 0x0
	// void InputTurnOn; // 0x0
	// void InputTurnOff; // 0x0
	// void InputToggle; // 0x0
	// float width; // 0x7fffffff
	// int32_t NoiseAmplitude; // 0x7fffffff
	// int32_t TextureScroll; // 0x7fffffff
	// CUtlString texture; // 0x7fffffff
};

