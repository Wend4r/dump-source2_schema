#pragma once

#include <cstdint>

struct ice_path_shard_model_desc_t;
struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x818
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
	ice_path_shard_model_desc_t m_ShardDesc; // 0x7c0	
	// MNetworkEnable
	QAngle m_qForward; // 0x7f8	
	// MNetworkEnable
	// MNetworkChangeCallback "OnStartTimeChanged"
	GameTime_t m_flStartTime; // 0x804	
	// MNetworkEnable
	// MNetworkChangeCallback "OnEndTimeChanged"
	GameTime_t m_flEndTime; // 0x808	
	bool m_bIsBase; // 0x80c	
private:
	[[maybe_unused]] uint8_t __pad080d[0x3]; // 0x80d
public:
	CHandle< CTriggerIcePathVolume > m_hTrooperTrigger; // 0x810	
};

