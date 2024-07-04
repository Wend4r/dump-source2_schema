#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x680
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_TangoTether_TetherVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_TetherSound; // 0x5f0	
	CSoundEventName m_HealSound; // 0x600	
	CSoundEventName m_HitIndicator; // 0x610	
	CSoundEventName m_GrappleHitSound; // 0x620	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_BuffModifier; // 0x630	
	CEmbeddedSubclass< CCitadelModifier > m_DisconnectingModifier; // 0x640	
	CEmbeddedSubclass< CCitadelModifier > m_DisconnectedModifier; // 0x650	
	CEmbeddedSubclass< CCitadelModifier > m_LockedTargetModifier; // 0x660	
	// MPropertyStartGroup "Gameplay"
	float m_flMinConnectTime; // 0x670	
	float m_flDisconnectDistanceBuffer; // 0x674	
	float m_flCandidateCloserDistance; // 0x678	
	float m_flTargetAwayDistance; // 0x67c	
};

