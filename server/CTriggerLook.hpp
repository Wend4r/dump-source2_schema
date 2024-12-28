#pragma once

#include <cstdint>

struct GameTime_t;
struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xa38
// Has VTable
// 
// MNetworkVarNames "bool m_bTestOcclusion"
class CTriggerLook : public CTriggerOnce
{
public:
	CHandle< CBaseEntity > m_hLookTarget; // 0x9a0	
	float m_flFieldOfView; // 0x9a4	
	float m_flLookTime; // 0x9a8	
	float m_flLookTimeTotal; // 0x9ac	
	GameTime_t m_flLookTimeLast; // 0x9b0	
	float m_flTimeoutDuration; // 0x9b4	
	bool m_bTimeoutFired; // 0x9b8	
	bool m_bIsLooking; // 0x9b9	
	bool m_b2DFOV; // 0x9ba	
	bool m_bUseVelocity; // 0x9bb	
	// MNetworkEnable
	bool m_bTestOcclusion; // 0x9bc	
private:
	[[maybe_unused]] uint8_t __pad09bd[0x3]; // 0x9bd
public:
	CEntityIOOutput m_OnTimeout; // 0x9c0	
	CEntityIOOutput m_OnStartLook; // 0x9e8	
	CEntityIOOutput m_OnEndLook; // 0xa10	
	
	// Datamap fields:
	// void CTriggerLookTimeoutThink; // 0x0
};

