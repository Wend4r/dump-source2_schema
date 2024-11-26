#pragma once

#include <cstdint>

struct CCitadelPayload_PathMarker;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x500
// Has VTable
class CCitadelPayload_PathMarker : public CPointEntity
{
public:
	int32_t m_iLane; // 0x4e8	
	bool m_bStart; // 0x4ec	
	bool m_bRollBackToHere; // 0x4ed	
private:
	[[maybe_unused]] uint8_t __pad04ee[0x2]; // 0x4ee
public:
	float m_flDistFromPrev; // 0x4f0	
	float m_flProgressAlongTotalPath; // 0x4f4	
	CCitadelPayload_PathMarker* m_pPrevious; // 0x4f8	
};

