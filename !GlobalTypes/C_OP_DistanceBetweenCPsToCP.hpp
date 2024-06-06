#pragma once

#include <cstdint>

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x278
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_DistanceBetweenCPsToCP : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "starting control point"
	int32_t m_nStartCP; // 0x1c0	
	// MPropertyFriendlyName "ending control point"
	int32_t m_nEndCP; // 0x1c4	
	// MPropertyFriendlyName "output control point"
	int32_t m_nOutputCP; // 0x1c8	
	// MPropertyFriendlyName "output control point field"
	int32_t m_nOutputCPField; // 0x1cc	
	// MPropertyFriendlyName "only set distance once"
	bool m_bSetOnce; // 0x1d0	
private:
	[[maybe_unused]] uint8_t __pad01d1[0x3]; // 0x1d1
public:
	// MPropertyFriendlyName "distance minimum"
	float m_flInputMin; // 0x1d4	
	// MPropertyFriendlyName "distance maximum"
	float m_flInputMax; // 0x1d8	
	// MPropertyFriendlyName "output minimum"
	float m_flOutputMin; // 0x1dc	
	// MPropertyFriendlyName "output maximum"
	float m_flOutputMax; // 0x1e0	
	// MPropertyFriendlyName "maximum trace length"
	float m_flMaxTraceLength; // 0x1e4	
	// MPropertyFriendlyName "LOS Failure Scale"
	float m_flLOSScale; // 0x1e8	
	// MPropertyFriendlyName "ensure line of sight"
	bool m_bLOS; // 0x1ec	
	// MPropertyFriendlyName "LOS collision group"
	char m_CollisionGroupName[128]; // 0x1ed	
private:
	[[maybe_unused]] uint8_t __pad026d[0x3]; // 0x26d
public:
	// MPropertyFriendlyName "Trace Set"
	ParticleTraceSet_t m_nTraceSet; // 0x270	
	// MPropertyFriendlyName "set parent"
	ParticleParentSetMode_t m_nSetParent; // 0x274	
};
