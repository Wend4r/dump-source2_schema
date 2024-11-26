#pragma once

#include <cstdint>

struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x588
// Has VTable
class CEnvEntityMaker : public CPointEntity
{
public:
	Vector m_vecEntityMins; // 0x4e8	
	Vector m_vecEntityMaxs; // 0x4f4	
	CHandle< CBaseEntity > m_hCurrentInstance; // 0x500	
	CHandle< CBaseEntity > m_hCurrentBlocker; // 0x504	
	Vector m_vecBlockerOrigin; // 0x508	
	QAngle m_angPostSpawnDirection; // 0x514	
	float m_flPostSpawnDirectionVariance; // 0x520	
	float m_flPostSpawnSpeed; // 0x524	
	bool m_bPostSpawnUseAngles; // 0x528	
private:
	[[maybe_unused]] uint8_t __pad0529[0x7]; // 0x529
public:
	CUtlSymbolLarge m_iszTemplate; // 0x530	
	CEntityIOOutput m_pOutputOnSpawned; // 0x538	
	CEntityIOOutput m_pOutputOnFailedSpawn; // 0x560	
	
	// Datamap fields:
	// void InputForceSpawn; // 0x0
	// CUtlSymbolLarge InputForceSpawnAtEntityOrigin; // 0x0
	// void CEnvEntityMakerCheckSpawnThink; // 0x0
};

