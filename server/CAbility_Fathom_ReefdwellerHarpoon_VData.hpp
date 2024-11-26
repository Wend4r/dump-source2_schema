#pragma once

#include <cstdint>

struct CitadelCameraOperationsSequence_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1620
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbility_Fathom_ReefdwellerHarpoon_VData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadel_Modifier_ReefdwellerHarpoon_DetachBuff > m_DetachBuff; // 0x1560	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strSwapStarted; // 0x1570	
	// MPropertyStartGroup "Camera"
	CitadelCameraOperationsSequence_t m_cameraSequenceFlying; // 0x1580	
	// MPropertyStartGroup "+Harpoon Properties"
	float m_flAirSpeedMax; // 0x1608	
	float m_flFallSpeedMax; // 0x160c	
	float m_flAirDrag; // 0x1610	
	float m_flInitialSlowSpeed; // 0x1614	
	float m_flInitialSpeedBias; // 0x1618	
	float m_flMaxSurfacePitch; // 0x161c	
};

