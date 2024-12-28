#pragma once

#include <cstdint>

struct GameTime_t;
struct ParticleIndex_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xde8
// Has VTable
// 
// MNetworkVarNames "Vector m_vStrikeVel"
// MNetworkVarNames "float m_flStartHeight"
class CCitadel_Ability_LashDownStrike : public CCitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0af8[0xa8]; // 0xaf8
public:
	GameTime_t m_ImpactTime; // 0xba0	
	Vector m_vDamagePos; // 0xba4	
	Vector m_vDamageDir; // 0xbb0	
private:
	[[maybe_unused]] uint8_t __pad0bbc[0x4]; // 0xbbc
public:
	CUtlVector< CHandle< CBaseEntity > > m_vHitEnemies; // 0xbc0	
private:
	[[maybe_unused]] uint8_t __pad0bd8[0x20]; // 0xbd8
public:
	CUtlVector< CHandle< CBaseEntity > > m_vecHitEntities; // 0xbf8	
	ParticleIndex_t m_PreviewEffect; // 0xc10	
private:
	[[maybe_unused]] uint8_t __pad0c14[0x1c4]; // 0xc14
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	Vector m_vStrikeVel; // 0xdd8	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	float m_flStartHeight; // 0xde4	
};

