#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1758
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityCardTossVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeParticle; // 0x1568	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SummonedCard; // 0x1648	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strCardTossSound; // 0x1728	
	CSoundEventName m_strCardSummonSound; // 0x1738	
	// MPropertyStartGroup "+Card Toss Properties"
	float m_flSummonedCardStartSideOffset; // 0x1748	
	float m_flSummonedCardSideOffsetStep; // 0x174c	
	float m_flSummonedCardForwardOffset; // 0x1750	
	float m_flSummonedCardVerticalOffset; // 0x1754	
};

