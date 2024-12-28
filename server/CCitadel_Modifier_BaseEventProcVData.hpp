#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x660
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_BaseEventProcVData : public CCitadelModifierVData
{
public:
	bool m_bProcChanceAffectedByEffectiveness; // 0x630	
	bool m_bShouldApplyAbilityCooldown; // 0x631	
	// MPropertySuppressExpr "m_bCanProcMultipleTimesFromSameShot != true"
	bool m_bCanProcMultipleTimesOnOneTarget; // 0x632	
	bool m_bCanProcByOtherObjects; // 0x633	
	CITADEL_UNIT_TARGET_TYPE m_nAbilityTargetTypes; // 0x634	
	CITADEL_UNIT_TARGET_FLAGS m_nAbilityTargetFlags; // 0x638	
private:
	[[maybe_unused]] uint8_t __pad063c[0x4]; // 0x63c
public:
	CUtlVector< ECitadelDamageType > m_vecProcDamageTypes; // 0x640	
	TakeDamageFlags_t m_nRequiredDamageFlags; // 0x658	
};

