#pragma once

#include <cstdint>

struct CCitadelPayload_PathMarker;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x4f8
// Has VTable
class CCitadelPayload_PathMarker : public CPointEntity
{
public:
	int32_t m_iLane; // 0x4e0	
	bool m_bStart; // 0x4e4	
	bool m_bRollBackToHere; // 0x4e5	
private:
	[[maybe_unused]] uint8_t __pad04e6[0x2]; // 0x4e6
public:
	float m_flDistFromPrev; // 0x4e8	
	float m_flProgressAlongTotalPath; // 0x4ec	
	CCitadelPayload_PathMarker* m_pPrevious; // 0x4f0	
};

