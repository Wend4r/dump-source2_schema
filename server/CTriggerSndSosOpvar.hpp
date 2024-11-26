#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xce0
// Has VTable
class CTriggerSndSosOpvar : public CBaseTrigger
{
public:
	CUtlVector< CHandle< CBaseEntity > > m_hTouchingPlayers; // 0x980	
	Vector m_flPosition; // 0x998	
	float m_flCenterSize; // 0x9a4	
	float m_flMinVal; // 0x9a8	
	float m_flMaxVal; // 0x9ac	
	CUtlSymbolLarge m_opvarName; // 0x9b0	
	CUtlSymbolLarge m_stackName; // 0x9b8	
	CUtlSymbolLarge m_operatorName; // 0x9c0	
	bool m_bVolIs2D; // 0x9c8	
	char m_opvarNameChar[256]; // 0x9c9	
	char m_stackNameChar[256]; // 0xac9	
	char m_operatorNameChar[256]; // 0xbc9	
private:
	[[maybe_unused]] uint8_t __pad0cc9[0x3]; // 0xcc9
public:
	Vector m_VecNormPos; // 0xccc	
	float m_flNormCenterSize; // 0xcd8	
	
	// Datamap fields:
	// void CTriggerSndSosOpvarSndSosTriggerOpvarWaitOver; // 0x0
	// void m_opvarNameChar; // 0x9c9
	// void m_stackNameChar; // 0xac9
	// void m_operatorNameChar; // 0xbc9
};

