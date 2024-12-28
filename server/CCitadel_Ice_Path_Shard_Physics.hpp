#pragma once

#include <cstdint>

struct ice_path_shard_model_desc_t;
struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x810
// Has VTable
// 
// MNetworkExcludeByName "m_hModel"
// MNetworkVarNames "ice_path_shard_model_desc_t m_ShardDesc"
// MNetworkVarNames "QAngle m_qForward"
// MNetworkVarNames "GameTime_t m_flStartTime"
// MNetworkVarNames "GameTime_t m_flEndTime"
class CCitadel_Ice_Path_Shard_Physics : public CBaseModelEntity
{
public:
	// MNetworkEnable
	ice_path_shard_model_desc_t m_ShardDesc; // 0x7b8	
	// MNetworkEnable
	QAngle m_qForward; // 0x7f0	
	// MNetworkEnable
	// MNetworkChangeCallback "OnStartTimeChanged"
	GameTime_t m_flStartTime; // 0x7fc	
	// MNetworkEnable
	// MNetworkChangeCallback "OnEndTimeChanged"
	GameTime_t m_flEndTime; // 0x800	
	bool m_bIsBase; // 0x804	
private:
	[[maybe_unused]] uint8_t __pad0805[0x3]; // 0x805
public:
	CHandle< CTriggerIcePathVolume > m_hTrooperTrigger; // 0x808	
};

