#pragma once

#include <cstdint>

struct ParticleIndex_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xbc8
// Has VTable
class CCitadel_ArmorUpgrade_PersonalRejuvenator : public CCitadel_Item
{
public:
	bool m_bActivated; // 0xb18	
private:
	[[maybe_unused]] uint8_t __pad0b19[0x3]; // 0xb19
public:
	ParticleIndex_t m_nFxIndex; // 0xb1c	
};

