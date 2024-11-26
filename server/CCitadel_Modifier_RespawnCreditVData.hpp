#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x638
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_RespawnCreditVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Respawn Settings"
	ERejuvenatorRespawnMechanic m_eRespawnMechanic; // 0x608	
	// MPropertySuppressExpr "m_eRespawnMechanic != RejuvenatorRespawnMechanic_FixedDelay"
	// MPropertyDescription "Respawn time is set to this fixed duration after dying."
	float m_flRespawnDelay; // 0x60c	
	// MPropertyStartGroup "Buff Values"
	float m_flBonusClipSize; // 0x610	
	float m_flBonusFirerate; // 0x614	
	float m_flBonusHealth; // 0x618	
	float m_flBonusMoveSpeedMeterPerSecond; // 0x61c	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_sExpireSound; // 0x620	
	// MPropertyStartGroup "UI Messages"
	int32_t m_iMaxMessages; // 0x630	
	float m_flMessageInterval; // 0x634	
};

