#pragma once

#include <cstdint>

struct CRangeFloat;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1478
// Has VTable
// 
// MGetKV3ClassDefaults
class CNPC_TrooperNeutralNodeMoverVData : public CNPC_TrooperNeutralVData
{
public:
	// MPropertyStartGroup "Node Movement"
	bool m_bEnableMovementToNodes; // 0x1450	
private:
	[[maybe_unused]] uint8_t __pad1451[0x3]; // 0x1451
public:
	CRangeFloat m_flExposedDuration; // 0x1454	
	CRangeFloat m_flHideDuration; // 0x145c	
private:
	[[maybe_unused]] uint8_t __pad1464[0x4]; // 0x1464
public:
	CEmbeddedSubclass< CCitadelModifier > m_HidingModifier; // 0x1468	
};

