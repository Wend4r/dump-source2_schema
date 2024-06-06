#pragma once

#include <cstdint>

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x1e8
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_CPOffsetToPercentageBetweenCPs : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "percentage minimum"
	float m_flInputMin; // 0x1b8	
	// MPropertyFriendlyName "percentage maximum"
	float m_flInputMax; // 0x1bc	
	// MPropertyFriendlyName "percentage bias"
	float m_flInputBias; // 0x1c0	
	// MPropertyFriendlyName "starting control point"
	int32_t m_nStartCP; // 0x1c4	
	// MPropertyFriendlyName "ending control point"
	int32_t m_nEndCP; // 0x1c8	
	// MPropertyFriendlyName "offset control point"
	int32_t m_nOffsetCP; // 0x1cc	
	// MPropertyFriendlyName "output control point"
	int32_t m_nOuputCP; // 0x1d0	
	// MPropertyFriendlyName "input control point"
	int32_t m_nInputCP; // 0x1d4	
	// MPropertyFriendlyName "treat distance between points as radius"
	bool m_bRadialCheck; // 0x1d8	
	// MPropertyFriendlyName "treat offset as scale of total distance"
	bool m_bScaleOffset; // 0x1d9	
private:
	[[maybe_unused]] uint8_t __pad01da[0x2]; // 0x1da
public:
	// MPropertyFriendlyName "offset amount"
	// MVectorIsCoordinate
	Vector m_vecOffset; // 0x1dc	
};
