#pragma once

#include <cstdint>

struct shard_model_desc_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xe20
// Has VTable
// 
// MNetworkExcludeByName "m_hModel"
// MNetworkVarNames "shard_model_desc_t m_ShardDesc"
class CShatterGlassShardPhysics : public CPhysicsProp
{
public:
	bool m_bDebris; // 0xd98	
private:
	[[maybe_unused]] uint8_t __pad0d99[0x3]; // 0xd99
public:
	uint32_t m_hParentShard; // 0xd9c	
	// MNetworkEnable
	shard_model_desc_t m_ShardDesc; // 0xda0	
};

