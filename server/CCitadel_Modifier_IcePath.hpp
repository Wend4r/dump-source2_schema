#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x310
// Has VTable
class CCitadel_Modifier_IcePath : public CCitadelModifier
{
private:
	[[maybe_unused]] uint8_t __pad00c8[0x230]; // 0xc8
public:
	int32_t m_iShardCount; // 0x2f8	
	Vector m_vLastShardPosition; // 0x2fc	
	CHandle< CBaseModelEntity > m_hSurfShard; // 0x308	
};

