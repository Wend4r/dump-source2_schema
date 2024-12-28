#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x6b0
// Has VTable
// 
// MGetKV3ClassDefaults
class CModifier_Wrecker_UltimateVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_EnemyGrabModifier; // 0x630	
	CEmbeddedSubclass< CCitadelModifier > m_EnemyThrowModifier; // 0x640	
	CEmbeddedSubclass< CCitadelModifier > m_EnemyDamageModifier; // 0x650	
	CEmbeddedSubclass< CCitadelModifier > m_InvincibleModifier; // 0x660	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_StartSound; // 0x670	
	CSoundEventName m_AmbientLoopingSound; // 0x680	
	CSoundEventName m_GrabSound; // 0x690	
	CSoundEventName m_ThrowSound; // 0x6a0	
};

