#pragma once

#include <cstdint>

struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x9b0
// Has VTable
class CTriggerDetectBulletFire : public CBaseTrigger
{
public:
	bool m_bPlayerFireOnly; // 0x980	
private:
	[[maybe_unused]] uint8_t __pad0981[0x7]; // 0x981
public:
	CEntityIOOutput m_OnDetectedBulletFire; // 0x988	
};

