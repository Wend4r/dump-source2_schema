#pragma once

#include <cstdint>

struct CPathSimple;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x9b8
// Has VTable
class CTriggerPush : public CBaseTrigger
{
public:
	QAngle m_angPushEntitySpace; // 0x980	
	Vector m_vecPushDirEntitySpace; // 0x98c	
	bool m_bTriggerOnStartTouch; // 0x998	
	bool m_bUsePathSimple; // 0x999	
private:
	[[maybe_unused]] uint8_t __pad099a[0x6]; // 0x99a
public:
	CUtlSymbolLarge m_iszPathSimpleName; // 0x9a0	
	CPathSimple* m_PathSimple; // 0x9a8	
	uint32_t m_splinePushType; // 0x9b0	
	
	// Datamap fields:
	// Vector InputSetPushDirection; // 0x0
	// float InputSetPushSpeed; // 0x0
};

