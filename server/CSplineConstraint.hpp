#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x5b8
// Has VTable
class CSplineConstraint : public CPhysConstraint
{
private:
	[[maybe_unused]] uint8_t __pad0558[0x48]; // 0x558
public:
	Vector m_vAnchorOffsetRestore; // 0x5a0	
	bool m_bEnableLateralConstraint; // 0x5ac	
	bool m_bEnableVerticalConstraint; // 0x5ad	
	bool m_bEnableAngularConstraint; // 0x5ae	
private:
	[[maybe_unused]] uint8_t __pad05af[0x1]; // 0x5af
public:
	float m_flLinearFrequency; // 0x5b0	
	float m_flLinarDampingRatio; // 0x5b4	
	
	// Datamap fields:
	// void CSplineConstraintUpdateThink; // 0x0
};

