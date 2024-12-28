#pragma once

#include <cstdint>

struct shard_model_desc_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xd10
// Has VTable
// 
// MNetworkExcludeByName "m_hModel"
// MNetworkVarNames "shard_model_desc_t m_ShardDesc"
class C_ShatterGlassShardPhysics : public C_PhysicsProp
{
private:
	[[maybe_unused]] uint8_t __pad0c88[0x8]; // 0xc88
public:
	// MNetworkEnable
	shard_model_desc_t m_ShardDesc; // 0xc90	
};

