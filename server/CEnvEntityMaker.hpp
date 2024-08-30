#pragma once

#include <cstdint>

struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x578
// Has VTable
class CEnvEntityMaker : public CPointEntity
{
public:
	Vector m_vecEntityMins; // 0x4d8	
	Vector m_vecEntityMaxs; // 0x4e4	
	CHandle< CBaseEntity > m_hCurrentInstance; // 0x4f0	
	CHandle< CBaseEntity > m_hCurrentBlocker; // 0x4f4	
	Vector m_vecBlockerOrigin; // 0x4f8	
	QAngle m_angPostSpawnDirection; // 0x504	
	float m_flPostSpawnDirectionVariance; // 0x510	
	float m_flPostSpawnSpeed; // 0x514	
	bool m_bPostSpawnUseAngles; // 0x518	
private:
	[[maybe_unused]] uint8_t __pad0519[0x7]; // 0x519
public:
	CUtlSymbolLarge m_iszTemplate; // 0x520	
	CEntityIOOutput m_pOutputOnSpawned; // 0x528	
	CEntityIOOutput m_pOutputOnFailedSpawn; // 0x550	
	
	// Datamap fields:
	// void InputForceSpawn; // 0x0
	// CUtlSymbolLarge InputForceSpawnAtEntityOrigin; // 0x0
	// void CEnvEntityMakerCheckSpawnThink; // 0x0
};

