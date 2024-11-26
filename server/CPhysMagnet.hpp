#pragma once

#include <cstdint>

struct CEntityIOOutput;
struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xad0
// Has VTable
class CPhysMagnet : public CBaseAnimGraph
{
public:
	CEntityIOOutput m_OnMagnetAttach; // 0xa40	
	CEntityIOOutput m_OnMagnetDetach; // 0xa68	
	float m_massScale; // 0xa90	
	float m_forceLimit; // 0xa94	
	float m_torqueLimit; // 0xa98	
private:
	[[maybe_unused]] uint8_t __pad0a9c[0x4]; // 0xa9c
public:
	CUtlVector< magnetted_objects_t > m_MagnettedEntities; // 0xaa0	
	bool m_bActive; // 0xab8	
	bool m_bHasHitSomething; // 0xab9	
private:
	[[maybe_unused]] uint8_t __pad0aba[0x2]; // 0xaba
public:
	float m_flTotalMass; // 0xabc	
	float m_flRadius; // 0xac0	
	GameTime_t m_flNextSuckTime; // 0xac4	
	int32_t m_iMaxObjectsAttached; // 0xac8	
	
	// Datamap fields:
	// void InputToggle; // 0x0
	// void InputTurnOn; // 0x0
	// void InputTurnOff; // 0x0
};

