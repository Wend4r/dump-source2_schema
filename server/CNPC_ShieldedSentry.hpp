#pragma once

#include <cstdint>

struct CCitadelMinimapComponent;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xc58
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
	CCitadelMinimapComponent m_CCitadelMinimapComponent; // 0xbd8	
	// MNetworkEnable
	float m_flAttackRange; // 0xbf0	
	float m_flAttackCone; // 0xbf4	
	float m_flLifeTime; // 0xbf8	
	float m_flTrackingSpeed; // 0xbfc	
	float m_flDeployTime; // 0xc00	
	float m_flAttackDelay; // 0xc04	
};

