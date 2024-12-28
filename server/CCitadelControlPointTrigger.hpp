#pragma once

#include <cstdint>

struct CEntityIOOutput;
struct GameTime_t;
struct ParticleIndex_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xa48
// Has VTable
// 
// MNetworkVarNames "float m_flInitialRadius"
// MNetworkVarNames "float m_flEndRadius"
// MNetworkVarNames "float m_flProgress"
// MNetworkVarNames "float m_flCaptureTime"
// MNetworkVarNames "EHANDLE m_hUnlockPrereq"
// MNetworkVarNames "bool m_bAvailable"
// MNetworkVarNames "bool m_bIsBeingCaptured"
// MNetworkVarNames "bool m_bIsBeingBlocked"
class CCitadelControlPointTrigger : public CTriggerMultiple
{
public:
	CEntityIOOutput m_OnFullyCaptured; // 0x9a0	
	CEntityIOOutput m_OnBecomeCapturable; // 0x9c8	
	// MNetworkEnable
	float m_flInitialRadius; // 0x9f0	
	// MNetworkEnable
	float m_flEndRadius; // 0x9f4	
	// MNetworkEnable
	float m_flProgress; // 0x9f8	
	// MNetworkEnable
	float m_flCaptureTime; // 0x9fc	
	// MNetworkEnable
	CHandle< CBaseEntity > m_hUnlockPrereq; // 0xa00	
	// MNetworkEnable
	bool m_bAvailable; // 0xa04	
	// MNetworkEnable
	bool m_bIsBeingCaptured; // 0xa05	
	// MNetworkEnable
	bool m_bIsBeingBlocked; // 0xa06	
private:
	[[maybe_unused]] uint8_t __pad0a07[0x9]; // 0xa07
public:
	GameTime_t m_flLastTouchedTime; // 0xa10	
	Vector m_vecBeamTarget; // 0xa14	
	Vector m_vecBeamStart; // 0xa20	
	ParticleIndex_t m_nFXProgressBeam; // 0xa2c	
	CUtlSymbolLarge m_strUnlockPrereq; // 0xa30	
	CUtlSymbolLarge m_strBeamStart; // 0xa38	
	CUtlSymbolLarge m_strBeamTarget; // 0xa40	
};

