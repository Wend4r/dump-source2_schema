#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x298
// Has VTable
class CCitadel_Modifier_LurkersAmbush_Invis : public CCitadel_Modifier_Invis
{
public:
	CUtlOrderedMap< C_CitadelPlayerPawn*, GameTime_t > m_mapStartLookTime; // 0x268	
	GameTime_t m_flStartSpotted; // 0x290	
};

