#pragma once

#include <cstdint>

struct CAnimParamHandle;
struct AimCameraOpFixedSettings_t;
// Registered binary: animationsystem.dll (project 'animgraphlib')
// Alignment: 8
// Size: 0xc0
// Has VTable
// 
// MGetKV3ClassDefaults
class CAimCameraUpdateNode : public CUnaryUpdateNode
{
public:
	CAnimParamHandle m_hParameterPosition; // 0x70	
	CAnimParamHandle m_hParameterOrientation; // 0x72	
	CAnimParamHandle m_hParameterSpineRotationWeight; // 0x74	
	CAnimParamHandle m_hParameterPelvisOffset; // 0x76	
	CAnimParamHandle m_hParameterUseIK; // 0x78	
	CAnimParamHandle m_hParameterCameraOnly; // 0x7a	
	CAnimParamHandle m_hParameterWeaponDepenetrationDistance; // 0x7c	
	CAnimParamHandle m_hParameterWeaponDepenetrationDelta; // 0x7e	
	CAnimParamHandle m_hParameterCameraClearanceDistance; // 0x80	
private:
	[[maybe_unused]] uint8_t __pad0082[0x6]; // 0x82
public:
	AimCameraOpFixedSettings_t m_opFixedSettings; // 0x88	
};

