#pragma once

#include <cstdint>

struct CCitadelMinimapComponent;
struct CEntityIOOutput;
struct GameTime_t;
struct CCitadelAbilityComponent;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1000
// Has VTable
// 
// MNetworkIncludeByName "m_bTakesDamage"
// MNetworkIncludeByName "m_nTakeDamageFlags"
// MNetworkVarNames "CCitadelMinimapComponent::Storage_t m_CCitadelMinimapComponent"
// MNetworkVarNames "CCitadelAbilityComponent::Storage_t m_CCitadelAbilityComponent"
// MNetworkVarNames "WeakPoint_t m_vecWeakPoints"
// MNetworkVarNames "bool m_bDestroyed"
// MNetworkVarNames "bool m_bActive"
// MNetworkVarNames "bool m_bFinal"
class CCitadel_Destroyable_Building : public CCitadelAnimatingModelEntity
{
public:
	// MNetworkEnable
	// MNetworkUserGroup "CCitadelMinimapComponent"
	// MNetworkAlias "CCitadelMinimapComponent"
	// MNetworkTypeAlias "CCitadelMinimapComponent"
	CCitadelMinimapComponent m_CCitadelMinimapComponent; // 0xbc0	
	CEntityIOOutput m_OnDestroyed; // 0xbd8	
	CEntityIOOutput m_OnRevitilized; // 0xc00	
	CEntityIOOutput m_OnDamageTaken; // 0xc28	
	CEntityIOOutput m_OnLifeChanged; // 0xc50	
	CEntityIOOutput m_OnBecomeActive; // 0xc78	
	CEntityIOOutput m_OnBecomeInvulnerable; // 0xca0	
	CEntityIOOutput m_OnBecomeVulnerable; // 0xcc8	
	CEntityIOOutput m_OnUnderAttack; // 0xcf0	
	CEntityIOOutput m_OnAttackSubsided; // 0xd18	
	int32_t m_nBuildingHealth; // 0xd40	
private:
	[[maybe_unused]] uint8_t __pad0d44[0x4]; // 0xd44
public:
	int32_t m_iLane; // 0xd48	
	GameTime_t m_flDestroyedTime; // 0xd4c	
	GameTime_t m_flLastDamagedTime; // 0xd50	
	QAngle m_angOriginal; // 0xd54	
private:
	[[maybe_unused]] uint8_t __pad0d60[0x18]; // 0xd60
public:
	CUtlSymbolLarge m_backdoorProtectionTrigger; // 0xd78	
private:
	[[maybe_unused]] uint8_t __pad0d80[0x8]; // 0xd80
public:
	// MNetworkEnable
	// MNetworkUserGroup "CCitadelAbilityComponent"
	// MNetworkAlias "CCitadelAbilityComponent"
	// MNetworkTypeAlias "CCitadelAbilityComponent"
	CCitadelAbilityComponent m_CCitadelAbilityComponent; // 0xd88	
	// MNetworkEnable
	CUtlVectorEmbeddedNetworkVar< WeakPoint_t > m_vecWeakPoints; // 0xf90	
	// MNetworkEnable
	// MNetworkChangeCallback "DestroyedChanged"
	bool m_bDestroyed; // 0xff8	
	// MNetworkEnable
	bool m_bActive; // 0xff9	
	// MNetworkEnable
	bool m_bFinal; // 0xffa	
};

