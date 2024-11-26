#pragma once

#include <cstdint>

struct GameTime_t;
struct SceneEventId_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xad0
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
	CNetworkUtlVectorBase< float32 > m_flexWeight; // 0xa40	
	// MNetworkEnable
	// MNetworkEncoder "coord"
	Vector m_vLookTargetPosition; // 0xa58	
	// MNetworkEnable
	bool m_blinktoggle; // 0xa64	
private:
	[[maybe_unused]] uint8_t __pad0a65[0x53]; // 0xa65
public:
	GameTime_t m_flAllowResponsesEndTime; // 0xab8	
	GameTime_t m_flLastFlexAnimationTime; // 0xabc	
	SceneEventId_t m_nNextSceneEventId; // 0xac0	
	bool m_bUpdateLayerPriorities; // 0xac4	
	
	// Datamap fields:
	// void CBaseFlexProcessSceneEventsThink; // 0x0
};

