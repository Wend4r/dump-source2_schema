#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x728
// Has VTable
// 
// MGetKV3ClassDefaults
class CModifierAirLiftGrabVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_GrabEffect; // 0x630	
	// MPropertyStartGroup "Gameplay"
	float m_flLiftHorizontal; // 0x710	
	float m_flLiftHeight; // 0x714	
	float m_flFollowDampingFactor; // 0x718	
	float m_flFollowDistance; // 0x71c	
	float m_flAllyGrabCancelTime; // 0x720	
	float m_flAllyPossibleStuckDistance; // 0x724	
};

