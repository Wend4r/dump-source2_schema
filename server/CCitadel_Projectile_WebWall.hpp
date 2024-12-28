#pragma once

#include <cstdint>

struct ParticleIndex_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xa00
// Has VTable
class CCitadel_Projectile_WebWall : public CCitadelProjectile
{
public:
	bool bHasDetonatedOnTarget; // 0x868	
private:
	[[maybe_unused]] uint8_t __pad0869[0x3]; // 0x869
public:
	ParticleIndex_t m_nWebWallFxIndex; // 0x86c	
private:
	[[maybe_unused]] uint8_t __pad0870[0x10]; // 0x870
public:
	Vector m_vecCastPosition; // 0x880	
	Vector m_vecCastPositionNormal; // 0x88c	
	Vector m_vecEndPosition; // 0x898	
	Vector m_vecEndPositionNormal; // 0x8a4	
};

