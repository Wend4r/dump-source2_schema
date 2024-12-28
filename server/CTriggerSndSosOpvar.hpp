#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xcd8
// Has VTable
class CTriggerSndSosOpvar : public CBaseTrigger
{
public:
	CUtlVector< CHandle< CBaseEntity > > m_hTouchingPlayers; // 0x978	
	Vector m_flPosition; // 0x990	
	float m_flCenterSize; // 0x99c	
	float m_flMinVal; // 0x9a0	
	float m_flMaxVal; // 0x9a4	
	CUtlSymbolLarge m_opvarName; // 0x9a8	
	CUtlSymbolLarge m_stackName; // 0x9b0	
	CUtlSymbolLarge m_operatorName; // 0x9b8	
	bool m_bVolIs2D; // 0x9c0	
	char m_opvarNameChar[256]; // 0x9c1	
	char m_stackNameChar[256]; // 0xac1	
	char m_operatorNameChar[256]; // 0xbc1	
private:
	[[maybe_unused]] uint8_t __pad0cc1[0x3]; // 0xcc1
public:
	Vector m_VecNormPos; // 0xcc4	
	float m_flNormCenterSize; // 0xcd0	
	
	// Datamap fields:
	// void CTriggerSndSosOpvarSndSosTriggerOpvarWaitOver; // 0x0
	// void m_opvarNameChar; // 0x9c1
	// void m_stackNameChar; // 0xac1
	// void m_operatorNameChar; // 0xbc1
};

