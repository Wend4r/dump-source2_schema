#pragma once

#include <cstdint>

struct CCitadelRegenComponent;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xbd0
// Has VTable
// 
// MNetworkIncludeByName "m_iMaxHealth"
// MNetworkIncludeByName "m_iHealth"
// MNetworkIncludeByName "m_iTeam"
// MNetworkExcludeByName "m_flSimulationTime"
// MNetworkExcludeByName "m_blinktoggle"
// MNetworkExcludeByName "m_flAnimTime"
// MNetworkExcludeByUserGroup "m_flCycle"
// MNetworkExcludeByName "m_flEncodedController"
// MNetworkExcludeByName "m_flPoseParameter"
// MNetworkVarNames "EHANDLE m_hEnemy"
// MNetworkVarNames "CCitadelRegenComponent::Storage_t m_CCitadelRegenComponent"
class CNPC_SimpleAnimatingAI : public CBaseAnimGraph
{
private:
	[[maybe_unused]] uint8_t __pad0a38[0x14]; // 0xa38
public:
	// MNetworkEnable
	CHandle< CBaseEntity > m_hEnemy; // 0xa4c	
	// MNetworkEnable
	// MNetworkUserGroup "CCitadelRegenComponent"
	// MNetworkAlias "CCitadelRegenComponent"
	// MNetworkTypeAlias "CCitadelRegenComponent"
	CCitadelRegenComponent m_CCitadelRegenComponent; // 0xa50	
	
	// Datamap fields:
	// CHandle< CBaseEntity > m_hAbilityOwner; // 0xa40
};

