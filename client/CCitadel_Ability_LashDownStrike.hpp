#pragma once

#include <cstdint>

struct GameTime_t;
struct ParticleIndex_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xf28
// Has VTable
// 
// MNetworkVarNames "Vector m_vStrikeVel"
// MNetworkVarNames "float m_flStartHeight"
class CCitadel_Ability_LashDownStrike : public C_CitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0c98[0xa8]; // 0xc98
public:
	GameTime_t m_ImpactTime; // 0xd40	
	Vector m_vDamagePos; // 0xd44	
private:
	[[maybe_unused]] uint8_t __pad0d50[0x4]; // 0xd50
public:
	ParticleIndex_t m_PreviewEffect; // 0xd54	
private:
	[[maybe_unused]] uint8_t __pad0d58[0x1c0]; // 0xd58
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	Vector m_vStrikeVel; // 0xf18	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	float m_flStartHeight; // 0xf24	
};

