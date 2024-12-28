#pragma once

#include <cstdint>

struct GameTime_t;
struct SceneEventId_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xac8
// Has VTable
// 
// MNetworkVarNames "float32 m_flexWeight"
// MNetworkVarNames "Vector m_vLookTargetPosition"
// MNetworkVarNames "bool m_blinktoggle"
class CBaseFlex : public CBaseAnimGraph
{
public:
	// MNetworkEnable
	// MNetworkBitCount "12"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "1.000000"
	// MNetworkEncodeFlags "1"
	CNetworkUtlVectorBase< float32 > m_flexWeight; // 0xa38	
	// MNetworkEnable
	// MNetworkEncoder "coord"
	Vector m_vLookTargetPosition; // 0xa50	
	// MNetworkEnable
	bool m_blinktoggle; // 0xa5c	
private:
	[[maybe_unused]] uint8_t __pad0a5d[0x53]; // 0xa5d
public:
	GameTime_t m_flAllowResponsesEndTime; // 0xab0	
	GameTime_t m_flLastFlexAnimationTime; // 0xab4	
	SceneEventId_t m_nNextSceneEventId; // 0xab8	
	bool m_bUpdateLayerPriorities; // 0xabc	
	
	// Datamap fields:
	// void CBaseFlexProcessSceneEventsThink; // 0x0
};

