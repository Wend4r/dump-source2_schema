#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1588
// Has VTable
// 
// MGetKV3ClassDefaults
class CBaseLockonAbilityVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CBaseModifier > m_TargetModifier; // 0x1568	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strApplyLockonStack; // 0x1578	
};

