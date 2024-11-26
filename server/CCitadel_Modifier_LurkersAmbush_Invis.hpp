#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x290
// Has VTable
class CCitadel_Modifier_LurkersAmbush_Invis : public CCitadel_Modifier_Invis
{
public:
	CUtlOrderedMap< CCitadelPlayerPawn*, GameTime_t > m_mapStartLookTime; // 0x260	
	GameTime_t m_flStartSpotted; // 0x288	
};

