#pragma once

#include <cstdint>

struct fogparams_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x9e0
// Has VTable
class CFogTrigger : public CBaseTrigger
{
public:
	fogparams_t m_fog; // 0x978	
	
	// Datamap fields:
	// Color m_fog.colorPrimary; // 0x98c
	// Color m_fog.colorSecondary; // 0x990
	// Vector m_fog.dirPrimary; // 0x980
	// bool m_fog.enable; // 0x9dc
	// bool m_fog.blend; // 0x9dd
	// float m_fog.start; // 0x99c
	// float m_fog.end; // 0x9a0
	// float m_fog.farz; // 0x9a4
};

