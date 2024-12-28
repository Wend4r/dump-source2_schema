#pragma once

#include <cstdint>

struct CPathSimple;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x9b0
// Has VTable
class CTriggerPush : public CBaseTrigger
{
public:
	QAngle m_angPushEntitySpace; // 0x978	
	Vector m_vecPushDirEntitySpace; // 0x984	
	bool m_bTriggerOnStartTouch; // 0x990	
	bool m_bUsePathSimple; // 0x991	
private:
	[[maybe_unused]] uint8_t __pad0992[0x6]; // 0x992
public:
	CUtlSymbolLarge m_iszPathSimpleName; // 0x998	
	CPathSimple* m_PathSimple; // 0x9a0	
	uint32_t m_splinePushType; // 0x9a8	
	
	// Datamap fields:
	// Vector InputSetPushDirection; // 0x0
	// float InputSetPushSpeed; // 0x0
};

