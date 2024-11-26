#pragma once

#include <cstdint>

struct CPhysicsNPCSolver;
struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x518
// Has VTable
class CPhysicsNPCSolver : public CLogicalEntity
{
private:
	[[maybe_unused]] uint8_t __pad04e8[0x8]; // 0x4e8
public:
	CPhysicsNPCSolver* m_pNext; // 0x4f0	
	CHandle< CAI_BaseNPC > m_hNPC; // 0x4f8	
	CHandle< CBaseEntity > m_hEntity; // 0x4fc	
private:
	[[maybe_unused]] uint8_t __pad0500[0x8]; // 0x500
public:
	float m_separationDuration; // 0x508	
	GameTime_t m_cancelTime; // 0x50c	
	bool m_allowIntersection; // 0x510	
	
	// Datamap fields:
	// void m_pController; // 0x500
};

