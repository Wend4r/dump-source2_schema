#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x800
// Has VTable
class CMarkupVolumeTagged : public CMarkupVolume
{
public:
	CUtlVector< CGlobalSymbol > m_GroupNames; // 0x7c8	
	CUtlVector< CGlobalSymbol > m_Tags; // 0x7e0	
	bool m_bIsGroup; // 0x7f8	
	bool m_bGroupByPrefab; // 0x7f9	
	bool m_bGroupByVolume; // 0x7fa	
	bool m_bGroupOtherGroups; // 0x7fb	
	bool m_bIsInGroup; // 0x7fc	
};

