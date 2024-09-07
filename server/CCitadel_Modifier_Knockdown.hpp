#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xf0
// Has VTable
class CCitadel_Modifier_Knockdown : public CCitadel_Modifier_Stunned
{
public:
	QAngle m_angStunAngles; // 0xd0	
	EKnockDownTypes m_ePreferredKnockdownType; // 0xdc	
	bool m_bForceTakePreferred; // 0xe0	
private:
	[[maybe_unused]] uint8_t __pad00e1[0x3]; // 0xe1
public:
	GameTime_t m_flGetUpAnimTime; // 0xe4	
	bool m_bGetUpCamSeqStarted; // 0xe8	
	bool m_bOnGroundDuration; // 0xe9	
};

