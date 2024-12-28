#pragma once

#include <cstdint>

struct GameTime_t;
struct ParticleIndex_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x9f0
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
class CCitadelControlPointTrigger : public C_BaseTrigger
{
public:
	// MNetworkEnable
	float m_flInitialRadius; // 0x998	
	// MNetworkEnable
	float m_flEndRadius; // 0x99c	
	// MNetworkEnable
	float m_flProgress; // 0x9a0	
	// MNetworkEnable
	float m_flCaptureTime; // 0x9a4	
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hUnlockPrereq; // 0x9a8	
	// MNetworkEnable
	bool m_bAvailable; // 0x9ac	
	// MNetworkEnable
	bool m_bIsBeingCaptured; // 0x9ad	
	// MNetworkEnable
	bool m_bIsBeingBlocked; // 0x9ae	
private:
	[[maybe_unused]] uint8_t __pad09af[0x9]; // 0x9af
public:
	GameTime_t m_flLastTouchedTime; // 0x9b8	
	Vector m_vecBeamTarget; // 0x9bc	
	Vector m_vecBeamStart; // 0x9c8	
	ParticleIndex_t m_nFXProgressBeam; // 0x9d4	
	CUtlSymbolLarge m_strUnlockPrereq; // 0x9d8	
	CUtlSymbolLarge m_strBeamStart; // 0x9e0	
	CUtlSymbolLarge m_strBeamTarget; // 0x9e8	
};

