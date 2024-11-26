#pragma once

#include <cstdint>

struct GameTime_t;
struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x610
// Has VTable
class CPointAngularVelocitySensor : public CPointEntity
{
public:
	CHandle< CBaseEntity > m_hTargetEntity; // 0x4e8	
	float m_flThreshold; // 0x4ec	
	int32_t m_nLastCompareResult; // 0x4f0	
	int32_t m_nLastFireResult; // 0x4f4	
	GameTime_t m_flFireTime; // 0x4f8	
	float m_flFireInterval; // 0x4fc	
	float m_flLastAngVelocity; // 0x500	
	QAngle m_lastOrientation; // 0x504	
	Vector m_vecAxis; // 0x510	
	bool m_bUseHelper; // 0x51c	
private:
	[[maybe_unused]] uint8_t __pad051d[0x3]; // 0x51d
public:
	CEntityOutputTemplate< float32 > m_AngularVelocity; // 0x520	
	CEntityIOOutput m_OnLessThan; // 0x548	
	CEntityIOOutput m_OnLessThanOrEqualTo; // 0x570	
	CEntityIOOutput m_OnGreaterThan; // 0x598	
	CEntityIOOutput m_OnGreaterThanOrEqualTo; // 0x5c0	
	CEntityIOOutput m_OnEqualTo; // 0x5e8	
	
	// Datamap fields:
	// void InputTest; // 0x0
	// void InputTestWithInterval; // 0x0
};

