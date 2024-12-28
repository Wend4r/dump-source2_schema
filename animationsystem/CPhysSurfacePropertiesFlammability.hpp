#pragma once

#include <cstdint>

// Registered binary: animationsystem.dll (project 'modellib')
// Alignment: 4
// Size: 0x18
// Has Trivial Destructor
// 
// MGetKV3ClassDefaults
class CPhysSurfacePropertiesFlammability
{
public:
	// MKV3TransferName "heatconductivity"
	float m_heatConductivity; // 0x0	
	// MKV3TransferName "flashpoint"
	float m_flashpoint; // 0x4	
	// MKV3TransferName "burnfuel"
	float m_burnfuel; // 0x8	
	// MKV3TransferName "heataura"
	float m_heataura; // 0xc	
	// MKV3TransferName "immediateignition"
	bool m_immediateignition; // 0x10	
private:
	[[maybe_unused]] uint8_t __pad0011[0x3]; // 0x11
public:
	// MKV3TransferName "burndamage"
	float m_burndamage; // 0x14	
};

