#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x16d0
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_GoldenIdolVData : public CCitadel_Ability_BaseHeldItemVData
{
public:
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_sIdolDropOffSound; // 0x1640	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_DropoffTimerModifier; // 0x1650	
	CEmbeddedSubclass< CCitadelModifier > m_HoldingIdolModifier; // 0x1660	
	CEmbeddedSubclass< CCitadelModifier > m_RevealedHoldingIdolModifier; // 0x1670	
	CEmbeddedSubclass< CCitadelModifier > m_Bonus01; // 0x1680	
	CEmbeddedSubclass< CCitadelModifier > m_Bonus02; // 0x1690	
	CEmbeddedSubclass< CCitadelModifier > m_NoPickupModifier; // 0x16a0	
	// MPropertyStartGroup "Gameplay"
	float m_flInstantGoldPercentage; // 0x16b0	
	int32_t m_iComebackBounty; // 0x16b4	
	float m_flCasterBonusPercent; // 0x16b8	
	float m_flRevealTime; // 0x16bc	
	float m_flDamageTickRate; // 0x16c0	
	float m_flMaxHealthDamage; // 0x16c4	
	float m_flTimeToDamage; // 0x16c8	
	float m_flNoPickupTime; // 0x16cc	
};

