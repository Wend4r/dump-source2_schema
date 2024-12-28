#pragma once

#include <cstdint>

struct GameTime_t;
struct TimedEvent;
struct CFireOverlay;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x5d8
// Has VTable
// 
// MNetworkOverride "m_flScale"
// MNetworkOverride "m_flScaleTime"
// MNetworkVarNames "int32 m_nFlameModelIndex"
// MNetworkVarNames "int32 m_nFlameFromAboveModelIndex"
class C_FireSmoke : public C_BaseFire
{
public:
	// MNetworkEnable
	int32_t m_nFlameModelIndex; // 0x570	
	// MNetworkEnable
	int32_t m_nFlameFromAboveModelIndex; // 0x574	
	float m_flScaleRegister; // 0x578	
	float m_flScaleStart; // 0x57c	
	float m_flScaleEnd; // 0x580	
	GameTime_t m_flScaleTimeStart; // 0x584	
	GameTime_t m_flScaleTimeEnd; // 0x588	
	float m_flChildFlameSpread; // 0x58c	
private:
	[[maybe_unused]] uint8_t __pad0590[0x10]; // 0x590
public:
	float m_flClipPerc; // 0x5a0	
	bool m_bClipTested; // 0x5a4	
	bool m_bFadingOut; // 0x5a5	
private:
	[[maybe_unused]] uint8_t __pad05a6[0x2]; // 0x5a6
public:
	TimedEvent m_tParticleSpawn; // 0x5a8	
	CFireOverlay* m_pFireOverlay; // 0x5b0	
};

