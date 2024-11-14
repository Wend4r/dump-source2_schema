#pragma once

#include <cstdint>

// Registered binary: animationsystem.dll (project 'animgraphlib')
// Alignment: 8
// Size: 0xc
// Has Trivial Destructor
struct IKSolverSettings_t
{
public:
	// MPropertyFriendlyName "Solver Type"
	// MPropertyAttrChangeCallback
	IKSolverType m_SolverType; // 0x0	
	// MPropertyFriendlyName "Num Iterations "
	// MPropertyAttrStateCallback
	int32_t m_nNumIterations; // 0x4	
	// MPropertyFriendlyName "End Effector Rotation Behaviour"
	EIKEndEffectorRotationFixUpMode m_EndEffectorRotationFixUpMode; // 0x8	
};

