#pragma once

#include <cstdint>

struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x590
// Has VTable
class CMoverPathNode : public CPointEntity
{
public:
	Vector m_vInTangentLocal; // 0x4e8	
	Vector m_vOutTangentLocal; // 0x4f4	
	CUtlSymbolLarge m_szParentPathUniqueID; // 0x500	
	CUtlSymbolLarge m_szPathNodeParameter; // 0x508	
	CEntityIOOutput m_OnPassThrough; // 0x510	
	CEntityIOOutput m_OnPassThroughForward; // 0x538	
	CEntityIOOutput m_OnPassThroughReverse; // 0x560	
	CHandle< CPathMover > m_hMover; // 0x588	
};

