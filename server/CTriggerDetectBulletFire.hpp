#pragma once

#include <cstdint>

struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x9a8
// Has VTable
class CTriggerDetectBulletFire : public CBaseTrigger
{
public:
	bool m_bPlayerFireOnly; // 0x978	
private:
	[[maybe_unused]] uint8_t __pad0979[0x7]; // 0x979
public:
	CEntityIOOutput m_OnDetectedBulletFire; // 0x980	
};

