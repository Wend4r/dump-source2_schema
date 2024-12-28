#pragma once

#include <cstdint>

struct GameTime_t;
struct ParticleIndex_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xc38
// Has VTable
class CCitadel_Ability_TurretClone : public CCitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0af8[0x118]; // 0xaf8
public:
	GameTime_t m_flTurretExpireTime; // 0xc10	
private:
	[[maybe_unused]] uint8_t __pad0c14[0x4]; // 0xc14
public:
	bool m_bTeleported; // 0xc18	
	bool m_bHasTurretReady; // 0xc19	
private:
	[[maybe_unused]] uint8_t __pad0c1a[0x2]; // 0xc1a
public:
	int32_t m_iCurrentSwapCount; // 0xc1c	
	Vector m_vecTurretPosition; // 0xc20	
	ParticleIndex_t m_nFXIndex; // 0xc2c	
};

