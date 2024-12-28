#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xdb0
// Has VTable
// 
// MNetworkVarNames "Vector m_vecStartPos"
// MNetworkVarNames "Vector m_vecPosition"
// MNetworkVarNames "Vector m_vecInitialPosition"
// MNetworkVarNames "GameTime_t m_CastTime"
// MNetworkVarNames "Vector m_vecDirection"
// MNetworkVarNames "Vector m_vecLeft"
// MNetworkVarNames "float m_Length"
// MNetworkVarNames "bool m_bTraveling"
// MNetworkVarNames "bool m_bPreview"
class CCitadel_Ability_FissureWall : public C_CitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0c98[0x10]; // 0xc98
public:
	CUtlVector< ParticleIndex_t > m_vecWallPreviewParticles; // 0xca8	
private:
	[[maybe_unused]] uint8_t __pad0cc0[0xa8]; // 0xcc0
public:
	// MNetworkEnable
	Vector m_vecStartPos; // 0xd68	
	// MNetworkEnable
	Vector m_vecPosition; // 0xd74	
	// MNetworkEnable
	Vector m_vecInitialPosition; // 0xd80	
	// MNetworkEnable
	GameTime_t m_CastTime; // 0xd8c	
	// MNetworkEnable
	Vector m_vecDirection; // 0xd90	
	// MNetworkEnable
	Vector m_vecLeft; // 0xd9c	
	// MNetworkEnable
	float m_Length; // 0xda8	
	// MNetworkEnable
	// MNetworkChangeCallback "PreviewModeChanged"
	bool m_bTraveling; // 0xdac	
	// MNetworkEnable
	// MNetworkChangeCallback "PreviewModeChanged"
	bool m_bPreview; // 0xdad	
};

