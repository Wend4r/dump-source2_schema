#pragma once

#include <cstdint>

struct GameTime_t;
struct ParticleIndex_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xde0
// Has VTable
class CCitadel_Ability_TurretClone : public C_CitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0ca0[0x118]; // 0xca0
public:
	GameTime_t m_flTurretExpireTime; // 0xdb8	
private:
	[[maybe_unused]] uint8_t __pad0dbc[0x4]; // 0xdbc
public:
	bool m_bTeleported; // 0xdc0	
	bool m_bHasTurretReady; // 0xdc1	
private:
	[[maybe_unused]] uint8_t __pad0dc2[0x2]; // 0xdc2
public:
	int32_t m_iCurrentSwapCount; // 0xdc4	
	Vector m_vecTurretPosition; // 0xdc8	
	ParticleIndex_t m_nFXIndex; // 0xdd4	
};

