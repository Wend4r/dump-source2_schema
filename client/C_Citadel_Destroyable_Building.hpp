#pragma once

#include <cstdint>

struct CCitadelAbilityComponent;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xd10
// Has VTable
// 
// MNetworkIncludeByName "m_bTakesDamage"
// MNetworkIncludeByName "m_nTakeDamageFlags"
// MNetworkVarNames "CCitadelAbilityComponent::Storage_t m_CCitadelAbilityComponent"
// MNetworkVarNames "WeakPoint_t m_vecWeakPoints"
// MNetworkVarNames "bool m_bDestroyed"
// MNetworkVarNames "bool m_bActive"
// MNetworkVarNames "bool m_bFinal"
class C_Citadel_Destroyable_Building : public CCitadelAnimatingModelEntity
{
public:
	// MNetworkEnable
	// MNetworkUserGroup "CCitadelAbilityComponent"
	// MNetworkAlias "CCitadelAbilityComponent"
	// MNetworkTypeAlias "CCitadelAbilityComponent"
	CCitadelAbilityComponent m_CCitadelAbilityComponent; // 0xb00	
	// MNetworkEnable
	C_UtlVectorEmbeddedNetworkVar< WeakPoint_t > m_vecWeakPoints; // 0xca0	
	// MNetworkEnable
	// MNetworkChangeCallback "DestroyedChanged"
	bool m_bDestroyed; // 0xd08	
	// MNetworkEnable
	bool m_bActive; // 0xd09	
	// MNetworkEnable
	bool m_bFinal; // 0xd0a	
};

