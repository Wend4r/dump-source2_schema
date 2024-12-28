#pragma once

#include <cstdint>

struct ice_path_shard_model_desc_t;
struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x8a8
// Has VTable
// 
// MNetworkExcludeByName "m_hModel"
// MNetworkVarNames "ice_path_shard_model_desc_t m_ShardDesc"
// MNetworkVarNames "QAngle m_qForward"
// MNetworkVarNames "GameTime_t m_flStartTime"
// MNetworkVarNames "GameTime_t m_flEndTime"
class C_Citadel_Ice_Path_Shard_Physics : public C_BaseModelEntity
{
public:
	// MNetworkEnable
	// -> m_nModelID - 0x860
	// -> m_vecPanelSize - 0x864
	// -> m_vecPanelVertices - 0x870
	// -> m_flThickness - 0x888
	// -> m_SurfacePropStringToken - 0x88c
	ice_path_shard_model_desc_t m_ShardDesc; // 0x858	
	// MNetworkEnable
	QAngle m_qForward; // 0x890	
	// MNetworkEnable
	// MNetworkChangeCallback "OnStartTimeChanged"
	GameTime_t m_flStartTime; // 0x89c	
	// MNetworkEnable
	// MNetworkChangeCallback "OnEndTimeChanged"
	GameTime_t m_flEndTime; // 0x8a0	
};

