#pragma once

#include <cstdint>

struct CCitadelMinimapComponent;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xc40
// Has VTable
// 
// MNetworkVarNames "CCitadelMinimapComponent::Storage_t m_CCitadelMinimapComponent"
// MNetworkVarNames "float m_flAttackRange"
class CNPC_ShieldedSentry : public CNPC_SimpleAnimatingAI
{
public:
	// MNetworkEnable
	// MNetworkUserGroup "CCitadelMinimapComponent"
	// MNetworkAlias "CCitadelMinimapComponent"
	// MNetworkTypeAlias "CCitadelMinimapComponent"
	CCitadelMinimapComponent m_CCitadelMinimapComponent; // 0xbd0	
	// MNetworkEnable
	float m_flAttackRange; // 0xbe8	
	float m_flAttackCone; // 0xbec	
	float m_flLifeTime; // 0xbf0	
	float m_flTrackingSpeed; // 0xbf4	
	float m_flDeployTime; // 0xbf8	
	float m_flAttackDelay; // 0xbfc	
};

