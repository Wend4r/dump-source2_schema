#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1668
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityCadenceGrandFinaleVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_StageModel; // 0x1568	
	float m_flStageModelHeight; // 0x1648	
	float m_flStageModelWidth; // 0x164c	
	float m_flStageModelLength; // 0x1650	
	float m_flStageModelScale; // 0x1654	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_GrandFinaleAOEModifier; // 0x1658	
};

