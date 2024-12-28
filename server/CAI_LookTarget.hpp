#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x4f8
// Has VTable
class CAI_LookTarget : public CPointEntity
{
public:
	int32_t m_iContext; // 0x4e0	
	int32_t m_iPriority; // 0x4e4	
	bool m_bDisabled; // 0x4e8	
private:
	[[maybe_unused]] uint8_t __pad04e9[0x3]; // 0x4e9
public:
	GameTime_t m_flTimeNextAvailable; // 0x4ec	
	float m_flMaxDist; // 0x4f0	
};

