#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x5a8
// Has VTable
class CSplineConstraint : public CPhysConstraint
{
private:
	[[maybe_unused]] uint8_t __pad0550[0x48]; // 0x550
public:
	Vector m_vAnchorOffsetRestore; // 0x598	
	
	// Datamap fields:
	// void CSplineConstraintUpdateThink; // 0x0
};

