#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x578
// Has VTable
class CPhysFixed : public CPhysConstraint
{
public:
	float m_flLinearFrequency; // 0x560	
	float m_flLinearDampingRatio; // 0x564	
	float m_flAngularFrequency; // 0x568	
	float m_flAngularDampingRatio; // 0x56c	
	bool m_bEnableLinearConstraint; // 0x570	
	bool m_bEnableAngularConstraint; // 0x571	
	
	// Datamap fields:
	// float InputSetLinearFrequency; // 0x0
	// float InputSetLinearDampingRatio; // 0x0
	// float InputSetAngularFrequency; // 0x0
	// float InputSetAngularDampingRatio; // 0x0
};

