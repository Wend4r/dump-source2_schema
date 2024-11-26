#pragma once

#include <cstdint>

struct CCitadelPlayerPawn;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xd8
// Has VTable
class CCitadel_Modifier_HeroUpgradeBonuses : public CCitadelModifier
{
public:
	CCitadelPlayerPawn* m_pOwningPlayer; // 0xc0	
	float m_flWeaponPower; // 0xc8	
	float m_flArmorPower; // 0xcc	
	float m_flTechPower; // 0xd0	
};

