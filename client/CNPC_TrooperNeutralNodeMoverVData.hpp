#pragma once

#include <cstdint>

struct CRangeFloat;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1468
// Has VTable
// 
// MGetKV3ClassDefaults
class CNPC_TrooperNeutralNodeMoverVData : public CNPC_TrooperNeutralVData
{
public:
	// MPropertyStartGroup "Node Movement"
	bool m_bEnableMovementToNodes; // 0x1440	
private:
	[[maybe_unused]] uint8_t __pad1441[0x3]; // 0x1441
public:
	CRangeFloat m_flExposedDuration; // 0x1444	
	CRangeFloat m_flHideDuration; // 0x144c	
private:
	[[maybe_unused]] uint8_t __pad1454[0x4]; // 0x1454
public:
	CEmbeddedSubclass< CCitadelModifier > m_HidingModifier; // 0x1458	
};

