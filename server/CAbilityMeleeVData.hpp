#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1580
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityMeleeVData : public CitadelAbilityVData
{
public:
	// MPropertyDescription "How long we'll buffer input to trigger another melee if we're already performing a melee"
	float m_flMeleeInputBufferTime; // 0x1560	
	// MPropertyDescription "If we detect an enemy within this distance, forward attack movement will be suppressed so we don't move through them"
	float m_flCollisionDistance; // 0x1564	
	// MPropertyDescription "A heavy attack will trigger after being charged up for this long"
	float m_flHeavyAttackRequiredHoldTime; // 0x1568	
	// MPropertyDescription "A light attack will trigger if the melee button is pressed and released within this time.  After this time, a heavy melee will charge up"
	float m_flLightAttackMaxHoldTime; // 0x156c	
	TakeDamageFlags_t m_MeleeDamageFlags; // 0x1570	
	CUtlString m_strEffectsAttachName; // 0x1578	
};

