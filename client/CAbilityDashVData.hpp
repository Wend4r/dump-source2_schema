#pragma once

#include <cstdint>

struct CitadelCameraOperationsSequence_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x18f0
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityDashVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DashParticle; // 0x1568	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DownDashParticle; // 0x1648	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strArriveSound; // 0x1728	
	CSoundEventName m_strStaminaDrainedSound; // 0x1738	
	// MPropertyStartGroup "Camera"
	CitadelCameraOperationsSequence_t m_cameraSequenceGroundDashActivate; // 0x1748	
	CitadelCameraOperationsSequence_t m_cameraSequenceAirDashActivate; // 0x17d0	
	// MPropertyStartGroup "Ground Dash Stuff"
	float m_flMaxAngDiff; // 0x1858	
	float m_flDurationScaleForSpeed; // 0x185c	
	float m_flSlideEarlyOutWindow; // 0x1860	
	float m_flSlideLockoutTime; // 0x1864	
	float m_flGroundDashAirbornDrag; // 0x1868	
	float m_flGroundDashAirbornSpeedClamp; // 0x186c	
	CSoundEventName m_strGroundDashActivate; // 0x1870	
	CPiecewiseCurve m_curvePosition; // 0x1880	
	float m_flGroundDashDuration; // 0x18c0	
	float m_flGroundDashDistanceInMeters; // 0x18c4	
	// MPropertyStartGroup "Air Dash Stuff"
	float m_flAirDashEndVelocityScale; // 0x18c8	
	float m_flAirDashAccPct; // 0x18cc	
	float m_flDuringDrag; // 0x18d0	
	float m_flPostDrag; // 0x18d4	
	float m_flPostDragDuration; // 0x18d8	
	float m_flDownwardAirDashSpeed; // 0x18dc	
	CSoundEventName m_strDashActivate; // 0x18e0	
};

