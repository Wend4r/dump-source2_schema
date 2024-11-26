#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x698
// Has VTable
class CSoundOpvarSetPathCornerEntity : public CSoundOpvarSetPointEntity
{
private:
	[[maybe_unused]] uint8_t __pad0670[0x18]; // 0x670
public:
	float m_flDistMinSqr; // 0x688	
	float m_flDistMaxSqr; // 0x68c	
	CUtlSymbolLarge m_iszPathCornerEntityName; // 0x690	
	
	// Datamap fields:
	// void CSoundOpvarSetPathCornerEntitySetOpvarThink; // 0x0
};

