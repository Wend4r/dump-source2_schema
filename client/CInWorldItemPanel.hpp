#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 16
// Size: 0xad0
// Has VTable
class CInWorldItemPanel : public C_PointClientUIWorldPanel
{
public:
	CHandle< C_BaseEntity > m_hTrackedEntity; // 0xac0	
	int32_t m_nTrackedEntity; // 0xac4	
};

