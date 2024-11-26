#pragma once

#include <cstdint>

struct FootLockPoseOpFixedSettings;
struct CAnimInputDamping;
// Registered binary: animationsystem.dll (project 'animgraphlib')
// Alignment: 8
// Size: 0x140
// Has VTable
// 
// MGetKV3ClassDefaults
class CFootLockUpdateNode : public CUnaryUpdateNode
{
public:
	FootLockPoseOpFixedSettings m_opFixedSettings; // 0x70	
private:
	[[maybe_unused]] uint8_t __pad00d0[0x8]; // 0xd0
public:
	CUtlVector< FootFixedSettings > m_footSettings; // 0xd8	
	CAnimInputDamping m_hipShiftDamping; // 0xf0	
	CAnimInputDamping m_rootHeightDamping; // 0x100	
	float m_flStrideCurveScale; // 0x110	
	float m_flStrideCurveLimitScale; // 0x114	
	float m_flStepHeightIncreaseScale; // 0x118	
	float m_flStepHeightDecreaseScale; // 0x11c	
	float m_flHipShiftScale; // 0x120	
	float m_flBlendTime; // 0x124	
	float m_flMaxRootHeightOffset; // 0x128	
	float m_flMinRootHeightOffset; // 0x12c	
	float m_flTiltPlanePitchSpringStrength; // 0x130	
	float m_flTiltPlaneRollSpringStrength; // 0x134	
	bool m_bApplyFootRotationLimits; // 0x138	
	bool m_bApplyHipShift; // 0x139	
	bool m_bModulateStepHeight; // 0x13a	
	bool m_bResetChild; // 0x13b	
	bool m_bEnableVerticalCurvedPaths; // 0x13c	
	bool m_bEnableRootHeightDamping; // 0x13d	
};

