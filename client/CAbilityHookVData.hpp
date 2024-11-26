#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x16d8
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityHookVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_SelfModifier; // 0x1560	
	CEmbeddedSubclass< CCitadelModifier > m_TargetModifier; // 0x1570	
	CEmbeddedSubclass< CCitadelModifier > m_BulletAmpModifier; // 0x1580	
	CEmbeddedSubclass< CCitadelModifier > m_ShieldModifier; // 0x1590	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_HookOutParticle; // 0x15a0	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strHookSuccessSound; // 0x1680	
	CSoundEventName m_strHookAllySound; // 0x1690	
	CSoundEventName m_strHookMissSound; // 0x16a0	
	CSoundEventName m_strHookImpactGeoSound; // 0x16b0	
	CSoundEventName m_SelfBuffCastSound; // 0x16c0	
	// MPropertyStartGroup "Gameplay"
	float m_flTrooperHitRadius; // 0x16d0	
};

