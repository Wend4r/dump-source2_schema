#pragma once

#include <cstdint>

struct CEntityIOOutput;
struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xac8
// Has VTable
class CPhysMagnet : public CBaseAnimGraph
{
public:
	CEntityIOOutput m_OnMagnetAttach; // 0xa38	
	CEntityIOOutput m_OnMagnetDetach; // 0xa60	
	float m_massScale; // 0xa88	
	float m_forceLimit; // 0xa8c	
	float m_torqueLimit; // 0xa90	
private:
	[[maybe_unused]] uint8_t __pad0a94[0x4]; // 0xa94
public:
	CUtlVector< magnetted_objects_t > m_MagnettedEntities; // 0xa98	
	bool m_bActive; // 0xab0	
	bool m_bHasHitSomething; // 0xab1	
private:
	[[maybe_unused]] uint8_t __pad0ab2[0x2]; // 0xab2
public:
	float m_flTotalMass; // 0xab4	
	float m_flRadius; // 0xab8	
	GameTime_t m_flNextSuckTime; // 0xabc	
	int32_t m_iMaxObjectsAttached; // 0xac0	
	
	// Datamap fields:
	// void InputToggle; // 0x0
	// void InputTurnOn; // 0x0
	// void InputTurnOff; // 0x0
};

