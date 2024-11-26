#pragma once

#include <cstdint>

struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x9c0
// Has VTable
class CChangeLevel : public CBaseTrigger
{
public:
	CUtlString m_sMapName; // 0x980	
	CUtlString m_sLandmarkName; // 0x988	
	CEntityIOOutput m_OnChangeLevel; // 0x990	
	bool m_bTouched; // 0x9b8	
	bool m_bNoTouch; // 0x9b9	
	bool m_bNewChapter; // 0x9ba	
	bool m_bOnChangeLevelFired; // 0x9bb	
	
	// Datamap fields:
	// void InputChangeLevel; // 0x0
	// CUtlString map; // 0x7fffffff
	// CUtlString landmark; // 0x7fffffff
};

