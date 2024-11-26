#pragma once

#include <cstdint>

struct fogparams_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x9e8
// Has VTable
class CFogTrigger : public CBaseTrigger
{
public:
	fogparams_t m_fog; // 0x980	
	
	// Datamap fields:
	// Color m_fog.colorPrimary; // 0x994
	// Color m_fog.colorSecondary; // 0x998
	// Vector m_fog.dirPrimary; // 0x988
	// bool m_fog.enable; // 0x9e4
	// bool m_fog.blend; // 0x9e5
	// float m_fog.start; // 0x9a4
	// float m_fog.end; // 0x9a8
	// float m_fog.farz; // 0x9ac
};

