#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x50
// 
// MGetKV3ClassDefaults
struct RejuvinatorParams_t
{
public:
	float m_flRejuvinatorExpirationWarningTiming; // 0x0	
	float m_flRejuvinatorBuffDuration; // 0x4	
	float m_flRejuvinatorDropHeight; // 0x8	
	float m_flRejuvinatorDropDuration; // 0xc	
	CUtlVector< float32 > m_TrooperHealthMult; // 0x10	
	CUtlVector< float32 > m_PlayerRespawnMult; // 0x28	
	CSoundEventName m_strRejuvPickupSound; // 0x40	
};

