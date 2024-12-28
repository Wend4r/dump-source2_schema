#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xca8
// Has VTable
class C_PhysPropClientside : public C_BreakableProp
{
public:
	GameTime_t m_flTouchDelta; // 0xc80	
	GameTime_t m_fDeathTime; // 0xc84	
	float m_inertiaScale; // 0xc88	
	Vector m_vecDamagePosition; // 0xc8c	
	Vector m_vecDamageDirection; // 0xc98	
	DamageTypes_t m_nDamageType; // 0xca4	
	
	// Datamap fields:
	// float m_impactEnergyScale; // 0xbf0
	// bool forcemotiondisabled; // 0x7fffffff
	// bool phys_start_asleep; // 0x7fffffff
	// float fademaxdist; // 0x7fffffff
	// float fademindist; // 0x7fffffff
	// float fadescale; // 0x7fffffff
	// float scale; // 0x7fffffff
	// const char * skin; // 0x7fffffff
};

