#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1750
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityCardTossVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeParticle; // 0x1560	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SummonedCard; // 0x1640	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strCardTossSound; // 0x1720	
	CSoundEventName m_strCardSummonSound; // 0x1730	
	// MPropertyStartGroup "+Card Toss Properties"
	float m_flSummonedCardStartSideOffset; // 0x1740	
	float m_flSummonedCardSideOffsetStep; // 0x1744	
	float m_flSummonedCardForwardOffset; // 0x1748	
	float m_flSummonedCardVerticalOffset; // 0x174c	
};

