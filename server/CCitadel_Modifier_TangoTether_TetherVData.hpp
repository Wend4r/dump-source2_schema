#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x6c0
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_TangoTether_TetherVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_TetherSound; // 0x630	
	CSoundEventName m_HealSound; // 0x640	
	CSoundEventName m_HitIndicator; // 0x650	
	CSoundEventName m_GrappleHitSound; // 0x660	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_BuffModifier; // 0x670	
	CEmbeddedSubclass< CCitadelModifier > m_DisconnectingModifier; // 0x680	
	CEmbeddedSubclass< CCitadelModifier > m_DisconnectedModifier; // 0x690	
	CEmbeddedSubclass< CCitadelModifier > m_LockedTargetModifier; // 0x6a0	
	// MPropertyStartGroup "Gameplay"
	float m_flMinConnectTime; // 0x6b0	
	float m_flDisconnectDistanceBuffer; // 0x6b4	
	float m_flCandidateCloserDistance; // 0x6b8	
	float m_flTargetAwayDistance; // 0x6bc	
};

