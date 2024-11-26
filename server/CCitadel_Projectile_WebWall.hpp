#pragma once

#include <cstdint>

struct ParticleIndex_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xa08
// Has VTable
class CCitadel_Projectile_WebWall : public CCitadelProjectile
{
public:
	bool bHasDetonatedOnTarget; // 0x870	
private:
	[[maybe_unused]] uint8_t __pad0871[0x3]; // 0x871
public:
	ParticleIndex_t m_nWebWallFxIndex; // 0x874	
private:
	[[maybe_unused]] uint8_t __pad0878[0x10]; // 0x878
public:
	Vector m_vecCastPosition; // 0x888	
	Vector m_vecCastPositionNormal; // 0x894	
	Vector m_vecEndPosition; // 0x8a0	
	Vector m_vecEndPositionNormal; // 0x8ac	
};

