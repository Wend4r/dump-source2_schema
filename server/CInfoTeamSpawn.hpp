#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x4f8
// Has VTable
class CInfoTeamSpawn : public CServerOnlyPointEntity
{
public:
	bool m_bIntroSpawn; // 0x4e8	
private:
	[[maybe_unused]] uint8_t __pad04e9[0x3]; // 0x4e9
public:
	int32_t m_iLaneNum; // 0x4ec	
	CHandle< CBaseEntity > m_hAssignedPlayer; // 0x4f0	
};

