#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x220
// Has VTable
class CCitadel_Modifier_ChainLightningEffect : public CCitadelModifier
{
public:
	int32_t m_nChainCount; // 0xc0	
private:
	[[maybe_unused]] uint8_t __pad00c4[0x4]; // 0xc4
public:
	CUtlVector< CHandle< CBaseEntity > > m_hHitEntities; // 0xc8	
	CUtlVector< CHandle< CBaseEntity > > m_hUnhitEnts; // 0xe0	
	Vector m_vLastSource; // 0xf8	
};

