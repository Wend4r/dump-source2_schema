#pragma once

#include <cstdint>

struct CCitadelMinimapComponent;
struct CEntityIOOutput;
struct GameTime_t;
struct CCitadelAbilityComponent;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xff8
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
	CCitadelMinimapComponent m_CCitadelMinimapComponent; // 0xbb8	
	CEntityIOOutput m_OnDestroyed; // 0xbd0	
	CEntityIOOutput m_OnRevitilized; // 0xbf8	
	CEntityIOOutput m_OnDamageTaken; // 0xc20	
	CEntityIOOutput m_OnLifeChanged; // 0xc48	
	CEntityIOOutput m_OnBecomeActive; // 0xc70	
	CEntityIOOutput m_OnBecomeInvulnerable; // 0xc98	
	CEntityIOOutput m_OnBecomeVulnerable; // 0xcc0	
	CEntityIOOutput m_OnUnderAttack; // 0xce8	
	CEntityIOOutput m_OnAttackSubsided; // 0xd10	
	int32_t m_nBuildingHealth; // 0xd38	
private:
	[[maybe_unused]] uint8_t __pad0d3c[0x4]; // 0xd3c
public:
	int32_t m_iLane; // 0xd40	
	GameTime_t m_flDestroyedTime; // 0xd44	
	GameTime_t m_flLastDamagedTime; // 0xd48	
	QAngle m_angOriginal; // 0xd4c	
private:
	[[maybe_unused]] uint8_t __pad0d58[0x18]; // 0xd58
public:
	CUtlSymbolLarge m_backdoorProtectionTrigger; // 0xd70	
private:
	[[maybe_unused]] uint8_t __pad0d78[0x8]; // 0xd78
public:
	// MNetworkEnable
	// MNetworkUserGroup "CCitadelAbilityComponent"
	// MNetworkAlias "CCitadelAbilityComponent"
	// MNetworkTypeAlias "CCitadelAbilityComponent"
	CCitadelAbilityComponent m_CCitadelAbilityComponent; // 0xd80	
	// MNetworkEnable
	CUtlVectorEmbeddedNetworkVar< WeakPoint_t > m_vecWeakPoints; // 0xf88	
	// MNetworkEnable
	// MNetworkChangeCallback "DestroyedChanged"
	bool m_bDestroyed; // 0xff0	
	// MNetworkEnable
	bool m_bActive; // 0xff1	
	// MNetworkEnable
	bool m_bFinal; // 0xff2	
};

