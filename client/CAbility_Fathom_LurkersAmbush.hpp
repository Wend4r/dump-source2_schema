#pragma once

#include <cstdint>

struct ParticleIndex_t;
struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xeb0
// Has VTable
// 
// MNetworkVarNames "bool m_bIsVisibleOnMinimap"
// MNetworkVarNames "GameTime_t m_flStoppedMovingStartTime"
class CAbility_Fathom_LurkersAmbush : public C_CitadelBaseAbility
{
public:
	ParticleIndex_t m_ChargeUpParticle; // 0xc98	
private:
	[[maybe_unused]] uint8_t __pad0c9c[0x1c4]; // 0xc9c
public:
	CModifierHandleTyped< CCitadelModifier > m_hRegenModifier; // 0xe60	
	CModifierHandleTyped< CCitadelModifier > m_hInvisModifier; // 0xe78	
	// MNetworkEnable
	bool m_bIsVisibleOnMinimap; // 0xe90	
private:
	[[maybe_unused]] uint8_t __pad0e91[0x3]; // 0xe91
public:
	// MNetworkEnable
	GameTime_t m_flStoppedMovingStartTime; // 0xe94	
	Vector m_vLastPos; // 0xe98	
	float m_flImmobilizeDuration; // 0xea4	
	GameTime_t m_flChannelTimeStarted; // 0xea8	
};

