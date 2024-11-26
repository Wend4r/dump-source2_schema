#pragma once

#include <cstdint>

struct CBreakableStageHelper;
struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xad0
// Has VTable
// 
// MNetworkIncludeByName "m_iMaxHealth"
// MNetworkIncludeByName "m_iHealth"
class CPropAnimatingBreakable : public CBaseAnimGraph
{
public:
	CBreakableStageHelper m_stages; // 0xa40	
	CEntityIOOutput m_OnTakeDamage; // 0xa58	
	CEntityIOOutput m_OnFinalBreak; // 0xa80	
	CEntityIOOutput m_OnStageAdvanced; // 0xaa8	
	
	// Datamap fields:
	// void InputNextBreakStage; // 0x0
};

