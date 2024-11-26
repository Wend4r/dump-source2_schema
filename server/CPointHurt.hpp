#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x508
// Has VTable
class CPointHurt : public CPointEntity
{
public:
	int32_t m_nDamage; // 0x4e8	
	DamageTypes_t m_bitsDamageType; // 0x4ec	
	float m_flRadius; // 0x4f0	
	float m_flDelay; // 0x4f4	
	CUtlSymbolLarge m_strTarget; // 0x4f8	
	CHandle< CBaseEntity > m_pActivator; // 0x500	
	
	// Datamap fields:
	// void CPointHurtHurtThink; // 0x0
	// void InputTurnOn; // 0x0
	// void InputTurnOff; // 0x0
	// void InputToggle; // 0x0
	// void InputHurt; // 0x0
};

