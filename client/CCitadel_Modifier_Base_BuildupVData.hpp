#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x648
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_Base_BuildupVData : public CCitadelModifierVData
{
public:
	bool m_bUseBaseWeaponCycleTimeForDelay; // 0x630	
private:
	[[maybe_unused]] uint8_t __pad0631[0x3]; // 0x631
public:
	float m_flCycleTimeDelayAdd; // 0x634	
	float m_flBuildUpDecayDelay; // 0x638	
	BuildupMode_t m_eBuildupMode; // 0x63c	
	// MPropertyDescription "When true, effectiveness (distance falloff) will be applied to the buildup."
	bool m_bBuildupAffectedByEffectiveness; // 0x640	
	// MPropertyDescription "When true, the averaged effectiveness of the build up modifier will be passed to the fill modifier"
	bool m_bPassBuildupEffectivenessToFillModifier; // 0x641	
};

