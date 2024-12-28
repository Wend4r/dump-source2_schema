#pragma once

#include <cstdint>

struct CBreakableStageHelper;
struct CEntityIOOutput;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xb88
// Has VTable
// 
// MNetworkIncludeByName "m_iMaxHealth"
// MNetworkIncludeByName "m_iHealth"
class CPropAnimatingBreakable : public CBaseAnimGraph
{
public:
	CBreakableStageHelper m_stages; // 0xaf8	
	CEntityIOOutput m_OnTakeDamage; // 0xb10	
	CEntityIOOutput m_OnFinalBreak; // 0xb38	
	CEntityIOOutput m_OnStageAdvanced; // 0xb60	
	
	// Datamap fields:
	// void InputNextBreakStage; // 0x0
};

