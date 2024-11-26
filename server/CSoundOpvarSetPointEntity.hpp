#pragma once

#include <cstdint>

struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x670
// Has VTable
class CSoundOpvarSetPointEntity : public CSoundOpvarSetPointBase
{
public:
	CEntityIOOutput m_OnEnter; // 0x580	
	CEntityIOOutput m_OnExit; // 0x5a8	
	bool m_bAutoDisable; // 0x5d0	
private:
	[[maybe_unused]] uint8_t __pad05d1[0x23]; // 0x5d1
public:
	float m_flDistanceMin; // 0x5f4	
	float m_flDistanceMax; // 0x5f8	
	float m_flDistanceMapMin; // 0x5fc	
	float m_flDistanceMapMax; // 0x600	
	float m_flOcclusionRadius; // 0x604	
	float m_flOcclusionMin; // 0x608	
	float m_flOcclusionMax; // 0x60c	
	float m_flValSetOnDisable; // 0x610	
	bool m_bSetValueOnDisable; // 0x614	
	bool m_bReloading; // 0x615	
private:
	[[maybe_unused]] uint8_t __pad0616[0x2]; // 0x616
public:
	int32_t m_nSimulationMode; // 0x618	
	int32_t m_nVisibilitySamples; // 0x61c	
	Vector m_vDynamicProxyPoint; // 0x620	
	float m_flDynamicMaximumOcclusion; // 0x62c	
	CEntityHandle m_hDynamicEntity; // 0x630	
private:
	[[maybe_unused]] uint8_t __pad0634[0x4]; // 0x634
public:
	CUtlSymbolLarge m_iszDynamicEntityName; // 0x638	
	float m_flPathingDistanceNormFactor; // 0x640	
	Vector m_vPathingSourcePos; // 0x644	
	Vector m_vPathingListenerPos; // 0x650	
	Vector m_vPathingDirection; // 0x65c	
	int32_t m_nPathingSourceIndex; // 0x668	
	
	// Datamap fields:
	// void InputSetDisabledValue; // 0x0
	// void CSoundOpvarSetPointEntitySetOpvarThink; // 0x0
};

