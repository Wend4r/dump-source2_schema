#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x550
// Has VTable
class CPointPrefab : public CServerOnlyPointEntity
{
public:
	CUtlSymbolLarge m_targetMapName; // 0x4e8	
	CUtlSymbolLarge m_forceWorldGroupID; // 0x4f0	
	CUtlSymbolLarge m_associatedRelayTargetName; // 0x4f8	
	bool m_fixupNames; // 0x500	
	bool m_bLoadDynamic; // 0x501	
private:
	[[maybe_unused]] uint8_t __pad0502[0x2]; // 0x502
public:
	CHandle< CPointPrefab > m_associatedRelayEntity; // 0x504	
};

