#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x16e0
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityHookVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_SelfModifier; // 0x1568	
	CEmbeddedSubclass< CCitadelModifier > m_TargetModifier; // 0x1578	
	CEmbeddedSubclass< CCitadelModifier > m_BulletAmpModifier; // 0x1588	
	CEmbeddedSubclass< CCitadelModifier > m_ShieldModifier; // 0x1598	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_HookOutParticle; // 0x15a8	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strHookSuccessSound; // 0x1688	
	CSoundEventName m_strHookAllySound; // 0x1698	
	CSoundEventName m_strHookMissSound; // 0x16a8	
	CSoundEventName m_strHookImpactGeoSound; // 0x16b8	
	CSoundEventName m_SelfBuffCastSound; // 0x16c8	
	// MPropertyStartGroup "Gameplay"
	float m_flTrooperHitRadius; // 0x16d8	
};

