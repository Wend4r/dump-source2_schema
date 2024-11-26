#pragma once

#include <cstdint>

struct GameTime_t;
struct ParticleIndex_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x9f8
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
	float m_flInitialRadius; // 0x9a0	
	// MNetworkEnable
	float m_flEndRadius; // 0x9a4	
	// MNetworkEnable
	float m_flProgress; // 0x9a8	
	// MNetworkEnable
	float m_flCaptureTime; // 0x9ac	
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hUnlockPrereq; // 0x9b0	
	// MNetworkEnable
	bool m_bAvailable; // 0x9b4	
	// MNetworkEnable
	bool m_bIsBeingCaptured; // 0x9b5	
	// MNetworkEnable
	bool m_bIsBeingBlocked; // 0x9b6	
private:
	[[maybe_unused]] uint8_t __pad09b7[0x9]; // 0x9b7
public:
	GameTime_t m_flLastTouchedTime; // 0x9c0	
	Vector m_vecBeamTarget; // 0x9c4	
	Vector m_vecBeamStart; // 0x9d0	
	ParticleIndex_t m_nFXProgressBeam; // 0x9dc	
	CUtlSymbolLarge m_strUnlockPrereq; // 0x9e0	
	CUtlSymbolLarge m_strBeamStart; // 0x9e8	
	CUtlSymbolLarge m_strBeamTarget; // 0x9f0	
};

