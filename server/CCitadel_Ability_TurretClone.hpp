#pragma once

#include <cstdint>

struct GameTime_t;
struct ParticleIndex_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xc40
// Has VTable
class CCitadel_Ability_TurretClone : public CCitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0b00[0x118]; // 0xb00
public:
	GameTime_t m_flTurretExpireTime; // 0xc18	
private:
	[[maybe_unused]] uint8_t __pad0c1c[0x4]; // 0xc1c
public:
	bool m_bTeleported; // 0xc20	
	bool m_bHasTurretReady; // 0xc21	
private:
	[[maybe_unused]] uint8_t __pad0c22[0x2]; // 0xc22
public:
	int32_t m_iCurrentSwapCount; // 0xc24	
	Vector m_vecTurretPosition; // 0xc28	
	ParticleIndex_t m_nFXIndex; // 0xc34	
};

