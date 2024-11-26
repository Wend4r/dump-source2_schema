#pragma once

#include <cstdint>

struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x538
// Has VTable
class CPhysExplosion : public CPointEntity
{
public:
	bool m_bExplodeOnSpawn; // 0x4e8	
private:
	[[maybe_unused]] uint8_t __pad04e9[0x3]; // 0x4e9
public:
	float m_flMagnitude; // 0x4ec	
	float m_flDamage; // 0x4f0	
	float m_radius; // 0x4f4	
	CUtlSymbolLarge m_targetEntityName; // 0x4f8	
	float m_flInnerRadius; // 0x500	
	float m_flPushScale; // 0x504	
	bool m_bConvertToDebrisWhenPossible; // 0x508	
private:
	[[maybe_unused]] uint8_t __pad0509[0x7]; // 0x509
public:
	CEntityIOOutput m_OnPushedPlayer; // 0x510	
	
	// Datamap fields:
	// void InputExplode; // 0x0
};

