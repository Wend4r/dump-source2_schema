#pragma once

#include <cstdint>

struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x9b8
// Has VTable
class CChangeLevel : public CBaseTrigger
{
public:
	CUtlString m_sMapName; // 0x978	
	CUtlString m_sLandmarkName; // 0x980	
	CEntityIOOutput m_OnChangeLevel; // 0x988	
	bool m_bTouched; // 0x9b0	
	bool m_bNoTouch; // 0x9b1	
	bool m_bNewChapter; // 0x9b2	
	bool m_bOnChangeLevelFired; // 0x9b3	
	
	// Datamap fields:
	// void InputChangeLevel; // 0x0
	// CUtlString map; // 0x7fffffff
	// CUtlString landmark; // 0x7fffffff
};

