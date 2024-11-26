#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x14b0
// Has VTable
// 
// MNetworkVarNames "int m_iLane"
// MNetworkVarNames "int m_nElectricBeamCasts"
// MNetworkVarNames "ETier3State_t m_eAliveState"
// MNetworkVarNames "ETier3Phase_t m_ePhase"
class C_NPC_Boss_Tier3 : public C_AI_CitadelNPC
{
public:
	// MNetworkEnable
	int32_t m_iLane; // 0x1468	
private:
	[[maybe_unused]] uint8_t __pad146c[0x4]; // 0x146c
public:
	// MNetworkEnable
	// MNetworkEncoder "qangle"
	// MNetworkChangeCallback "OnT3Targeting1Changed"
	QAngle m_angTargeting1; // 0x1470	
private:
	[[maybe_unused]] uint8_t __pad147c[0xc]; // 0x147c
public:
	// MNetworkEnable
	// MNetworkEncoder "qangle"
	// MNetworkChangeCallback "OnT3Targeting2Changed"
	QAngle m_angTargeting2; // 0x1488	
private:
	[[maybe_unused]] uint8_t __pad1494[0xc]; // 0x1494
public:
	// MNetworkEnable
	// MNetworkChangeCallback "OnT3ElectricBeamCastsChanged"
	int32_t m_nElectricBeamCasts; // 0x14a0	
	// MNetworkEnable
	ETier3State_t m_eAliveState; // 0x14a4	
	// MNetworkEnable
	ETier3Phase_t m_ePhase; // 0x14a8	
};

