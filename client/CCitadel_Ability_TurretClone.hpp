#pragma once

#include <cstdint>

struct GameTime_t;
struct ParticleIndex_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xdd8
// Has VTable
class CCitadel_Ability_TurretClone : public C_CitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0c98[0x118]; // 0xc98
public:
	GameTime_t m_flTurretExpireTime; // 0xdb0	
private:
	[[maybe_unused]] uint8_t __pad0db4[0x4]; // 0xdb4
public:
	bool m_bTeleported; // 0xdb8	
	bool m_bHasTurretReady; // 0xdb9	
private:
	[[maybe_unused]] uint8_t __pad0dba[0x2]; // 0xdba
public:
	int32_t m_iCurrentSwapCount; // 0xdbc	
	Vector m_vecTurretPosition; // 0xdc0	
	ParticleIndex_t m_nFXIndex; // 0xdcc	
};

