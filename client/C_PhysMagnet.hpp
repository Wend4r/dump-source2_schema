#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xb28
// Has VTable
class C_PhysMagnet : public CBaseAnimGraph
{
public:
	CUtlVector< int32 > m_aAttachedObjectsFromServer; // 0xaf8	
	CUtlVector< CHandle< C_BaseEntity > > m_aAttachedObjects; // 0xb10	
};

