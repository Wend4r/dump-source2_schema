#pragma once

#include <cstdint>

struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x528
// Has VTable
class CPhysExplosion : public CPointEntity
{
public:
	bool m_bExplodeOnSpawn; // 0x4d8	
private:
	[[maybe_unused]] uint8_t __pad04d9[0x3]; // 0x4d9
public:
	float m_flMagnitude; // 0x4dc	
	float m_flDamage; // 0x4e0	
	float m_radius; // 0x4e4	
	CUtlSymbolLarge m_targetEntityName; // 0x4e8	
	float m_flInnerRadius; // 0x4f0	
	float m_flPushScale; // 0x4f4	
	bool m_bConvertToDebrisWhenPossible; // 0x4f8	
private:
	[[maybe_unused]] uint8_t __pad04f9[0x7]; // 0x4f9
public:
	CEntityIOOutput m_OnPushedPlayer; // 0x500	
	
	// Datamap fields:
	// void InputExplode; // 0x0
};

