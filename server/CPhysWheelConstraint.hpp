#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x590
// Has VTable
class CPhysWheelConstraint : public CPhysConstraint
{
public:
	float m_flSuspensionFrequency; // 0x560	
	float m_flSuspensionDampingRatio; // 0x564	
	float m_flSuspensionHeightOffset; // 0x568	
	bool m_bEnableSuspensionLimit; // 0x56c	
private:
	[[maybe_unused]] uint8_t __pad056d[0x3]; // 0x56d
public:
	float m_flMinSuspensionOffset; // 0x570	
	float m_flMaxSuspensionOffset; // 0x574	
	bool m_bEnableSteeringLimit; // 0x578	
private:
	[[maybe_unused]] uint8_t __pad0579[0x3]; // 0x579
public:
	float m_flMinSteeringAngle; // 0x57c	
	float m_flMaxSteeringAngle; // 0x580	
	float m_flSteeringAxisFriction; // 0x584	
	float m_flSpinAxisFriction; // 0x588	
	CHandle< CBaseEntity > m_hSteeringMimicsEntity; // 0x58c	
	
	// Datamap fields:
	// CUtlSymbolLarge InputSetSteeringMimicsEntity; // 0x0
};

