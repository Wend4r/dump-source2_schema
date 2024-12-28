#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xd08
// Has VTable
class CCitadel_Upgrade_StabilizingTripod : public CCitadel_Item
{
public:
	CUtlVector< CHandle< CBaseEntity > > m_vecDeployedSentries; // 0xb18	
	Vector m_vDeployPosition; // 0xb30	
	QAngle m_vDeployAngles; // 0xb3c	
};

