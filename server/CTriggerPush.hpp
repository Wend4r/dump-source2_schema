#pragma once

#include <cstdint>

struct CPathSimple;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x970
// Has VTable
class CTriggerPush : public CBaseTrigger
{
public:
	QAngle m_angPushEntitySpace; // 0x938	
	Vector m_vecPushDirEntitySpace; // 0x944	
	bool m_bTriggerOnStartTouch; // 0x950	
	bool m_bUsePathSimple; // 0x951	
private:
	[[maybe_unused]] uint8_t __pad0952[0x6]; // 0x952
public:
	CUtlSymbolLarge m_iszPathSimpleName; // 0x958	
	CPathSimple* m_PathSimple; // 0x960	
	uint32_t m_splinePushType; // 0x968	
	
	// Datamap fields:
	// Vector InputSetPushDirection; // 0x0
	// float InputSetPushSpeed; // 0x0
};

