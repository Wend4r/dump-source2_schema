#pragma once

#include <cstdint>

struct CountdownTimer;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x540
// Has VTable
class CFishPool : public CBaseEntity
{
private:
	[[maybe_unused]] uint8_t __pad04e8[0x10]; // 0x4e8
public:
	int32_t m_fishCount; // 0x4f8	
	float m_maxRange; // 0x4fc	
	float m_swimDepth; // 0x500	
	float m_waterLevel; // 0x504	
	bool m_isDormant; // 0x508	
private:
	[[maybe_unused]] uint8_t __pad0509[0x7]; // 0x509
public:
	CUtlVector< CHandle< CFish > > m_fishes; // 0x510	
	CountdownTimer m_visTimer; // 0x528	
	
	// Datamap fields:
	// void CFishPoolUpdate; // 0x0
	// float max_range; // 0x7fffffff
};

