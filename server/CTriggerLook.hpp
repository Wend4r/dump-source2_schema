#pragma once

#include <cstdint>

struct GameTime_t;
struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xa40
// Has VTable
// 
// MNetworkVarNames "bool m_bTestOcclusion"
class CTriggerLook : public CTriggerOnce
{
public:
	CHandle< CBaseEntity > m_hLookTarget; // 0x9a8	
	float m_flFieldOfView; // 0x9ac	
	float m_flLookTime; // 0x9b0	
	float m_flLookTimeTotal; // 0x9b4	
	GameTime_t m_flLookTimeLast; // 0x9b8	
	float m_flTimeoutDuration; // 0x9bc	
	bool m_bTimeoutFired; // 0x9c0	
	bool m_bIsLooking; // 0x9c1	
	bool m_b2DFOV; // 0x9c2	
	bool m_bUseVelocity; // 0x9c3	
	// MNetworkEnable
	bool m_bTestOcclusion; // 0x9c4	
private:
	[[maybe_unused]] uint8_t __pad09c5[0x3]; // 0x9c5
public:
	CEntityIOOutput m_OnTimeout; // 0x9c8	
	CEntityIOOutput m_OnStartLook; // 0x9f0	
	CEntityIOOutput m_OnEndLook; // 0xa18	
	
	// Datamap fields:
	// void CTriggerLookTimeoutThink; // 0x0
};

