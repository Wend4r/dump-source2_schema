#pragma once

#include <cstdint>

struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x588
// Has VTable
class CMoverPathNode : public CPointEntity
{
public:
	Vector m_vInTangentLocal; // 0x4e0	
	Vector m_vOutTangentLocal; // 0x4ec	
	CUtlSymbolLarge m_szParentPathUniqueID; // 0x4f8	
	CUtlSymbolLarge m_szPathNodeParameter; // 0x500	
	CEntityIOOutput m_OnPassThrough; // 0x508	
	CEntityIOOutput m_OnPassThroughForward; // 0x530	
	CEntityIOOutput m_OnPassThroughReverse; // 0x558	
	CHandle< CPathMover > m_hMover; // 0x580	
};

