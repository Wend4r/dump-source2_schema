#pragma once

#include <cstdint>

struct ParticleIndex_t;
struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xd10
// Has VTable
// 
// MNetworkVarNames "bool m_bIsVisibleOnMinimap"
// MNetworkVarNames "GameTime_t m_flStoppedMovingStartTime"
class CAbility_Fathom_LurkersAmbush : public CCitadelBaseAbility
{
public:
	ParticleIndex_t m_ChargeUpParticle; // 0xaf8	
private:
	[[maybe_unused]] uint8_t __pad0afc[0x1c4]; // 0xafc
public:
	CModifierHandleTyped< CCitadelModifier > m_hRegenModifier; // 0xcc0	
	CModifierHandleTyped< CCitadelModifier > m_hInvisModifier; // 0xcd8	
	// MNetworkEnable
	bool m_bIsVisibleOnMinimap; // 0xcf0	
private:
	[[maybe_unused]] uint8_t __pad0cf1[0x3]; // 0xcf1
public:
	// MNetworkEnable
	GameTime_t m_flStoppedMovingStartTime; // 0xcf4	
	Vector m_vLastPos; // 0xcf8	
	float m_flImmobilizeDuration; // 0xd04	
	GameTime_t m_flChannelTimeStarted; // 0xd08	
};

