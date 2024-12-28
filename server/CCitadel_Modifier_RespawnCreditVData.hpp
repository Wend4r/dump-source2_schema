#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x660
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_RespawnCreditVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Respawn Settings"
	ERejuvenatorRespawnMechanic m_eRespawnMechanic; // 0x630	
	// MPropertySuppressExpr "m_eRespawnMechanic != RejuvenatorRespawnMechanic_FixedDelay"
	// MPropertyDescription "Respawn time is set to this fixed duration after dying."
	float m_flRespawnDelay; // 0x634	
	// MPropertyStartGroup "Buff Values"
	float m_flBonusClipSize; // 0x638	
	float m_flBonusFirerate; // 0x63c	
	float m_flBonusHealth; // 0x640	
	float m_flBonusMoveSpeedMeterPerSecond; // 0x644	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_sExpireSound; // 0x648	
	// MPropertyStartGroup "UI Messages"
	int32_t m_iMaxMessages; // 0x658	
	float m_flMessageInterval; // 0x65c	
};

