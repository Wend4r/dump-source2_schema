#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x688
// Has VTable
// 
// MGetKV3ClassDefaults
class CModifier_Wrecker_UltimateVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_EnemyGrabModifier; // 0x608	
	CEmbeddedSubclass< CCitadelModifier > m_EnemyThrowModifier; // 0x618	
	CEmbeddedSubclass< CCitadelModifier > m_EnemyDamageModifier; // 0x628	
	CEmbeddedSubclass< CCitadelModifier > m_InvincibleModifier; // 0x638	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_StartSound; // 0x648	
	CSoundEventName m_AmbientLoopingSound; // 0x658	
	CSoundEventName m_GrabSound; // 0x668	
	CSoundEventName m_ThrowSound; // 0x678	
};

