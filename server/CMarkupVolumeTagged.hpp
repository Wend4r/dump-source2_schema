#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x7f8
// Has VTable
class CMarkupVolumeTagged : public CMarkupVolume
{
public:
	CUtlVector< CGlobalSymbol > m_GroupNames; // 0x7c0	
	CUtlVector< CGlobalSymbol > m_Tags; // 0x7d8	
	bool m_bIsGroup; // 0x7f0	
	bool m_bGroupByPrefab; // 0x7f1	
	bool m_bGroupByVolume; // 0x7f2	
	bool m_bGroupOtherGroups; // 0x7f3	
	bool m_bIsInGroup; // 0x7f4	
};

