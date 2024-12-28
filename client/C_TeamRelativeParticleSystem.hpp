#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xe40
// Has VTable
// 
// MNetworkExcludeByName "m_iEffectIndex"
// MNetworkIncludeByName "m_iTeamNum"
// MNetworkVarNames "HParticleSystemDefinitionStrong m_iFriendlyEffectIndex"
// MNetworkVarNames "HParticleSystemDefinitionStrong m_iEnemyEffectIndex"
class C_TeamRelativeParticleSystem : public C_ParticleSystem
{
private:
	[[maybe_unused]] uint8_t __pad0e08[0x18]; // 0xe08
public:
	CUtlSymbolLarge m_iszFriendlyEffectName; // 0xe20	
	CUtlSymbolLarge m_iszEnemyEffectName; // 0xe28	
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_iFriendlyEffectIndex; // 0xe30	
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_iEnemyEffectIndex; // 0xe38	
};

