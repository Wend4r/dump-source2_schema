#pragma once

#include <cstdint>

struct CEntityIOOutput;
struct GameTime_t;
struct ParticleIndex_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xa50
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
	CEntityIOOutput m_OnFullyCaptured; // 0x9a8	
	CEntityIOOutput m_OnBecomeCapturable; // 0x9d0	
	// MNetworkEnable
	float m_flInitialRadius; // 0x9f8	
	// MNetworkEnable
	float m_flEndRadius; // 0x9fc	
	// MNetworkEnable
	float m_flProgress; // 0xa00	
	// MNetworkEnable
	float m_flCaptureTime; // 0xa04	
	// MNetworkEnable
	CHandle< CBaseEntity > m_hUnlockPrereq; // 0xa08	
	// MNetworkEnable
	bool m_bAvailable; // 0xa0c	
	// MNetworkEnable
	bool m_bIsBeingCaptured; // 0xa0d	
	// MNetworkEnable
	bool m_bIsBeingBlocked; // 0xa0e	
private:
	[[maybe_unused]] uint8_t __pad0a0f[0x9]; // 0xa0f
public:
	GameTime_t m_flLastTouchedTime; // 0xa18	
	Vector m_vecBeamTarget; // 0xa1c	
	Vector m_vecBeamStart; // 0xa28	
	ParticleIndex_t m_nFXProgressBeam; // 0xa34	
	CUtlSymbolLarge m_strUnlockPrereq; // 0xa38	
	CUtlSymbolLarge m_strBeamStart; // 0xa40	
	CUtlSymbolLarge m_strBeamTarget; // 0xa48	
};

