#pragma once

#include <cstdint>

struct shard_model_desc_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xe18
// Has VTable
// 
// MNetworkExcludeByName "m_hModel"
// MNetworkVarNames "shard_model_desc_t m_ShardDesc"
class CShatterGlassShardPhysics : public CPhysicsProp
{
public:
	bool m_bDebris; // 0xd90	
private:
	[[maybe_unused]] uint8_t __pad0d91[0x3]; // 0xd91
public:
	uint32_t m_hParentShard; // 0xd94	
	// MNetworkEnable
	shard_model_desc_t m_ShardDesc; // 0xd98	
};

