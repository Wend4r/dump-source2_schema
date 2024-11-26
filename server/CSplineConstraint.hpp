#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x5c0
// Has VTable
class CSplineConstraint : public CPhysConstraint
{
private:
	[[maybe_unused]] uint8_t __pad0560[0x48]; // 0x560
public:
	Vector m_vAnchorOffsetRestore; // 0x5a8	
	bool m_bEnableLateralConstraint; // 0x5b4	
	bool m_bEnableVerticalConstraint; // 0x5b5	
	bool m_bEnableAngularConstraint; // 0x5b6	
private:
	[[maybe_unused]] uint8_t __pad05b7[0x1]; // 0x5b7
public:
	float m_flLinearFrequency; // 0x5b8	
	float m_flLinarDampingRatio; // 0x5bc	
	
	// Datamap fields:
	// void CSplineConstraintUpdateThink; // 0x0
};

