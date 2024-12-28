#pragma once

#include <cstdint>

struct CitadelCameraOperationsSequence_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1628
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbility_Fathom_ReefdwellerHarpoon_VData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadel_Modifier_ReefdwellerHarpoon_DetachBuff > m_DetachBuff; // 0x1568	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strSwapStarted; // 0x1578	
	// MPropertyStartGroup "Camera"
	CitadelCameraOperationsSequence_t m_cameraSequenceFlying; // 0x1588	
	// MPropertyStartGroup "+Harpoon Properties"
	float m_flAirSpeedMax; // 0x1610	
	float m_flFallSpeedMax; // 0x1614	
	float m_flAirDrag; // 0x1618	
	float m_flInitialSlowSpeed; // 0x161c	
	float m_flInitialSpeedBias; // 0x1620	
	float m_flMaxSurfacePitch; // 0x1624	
};

