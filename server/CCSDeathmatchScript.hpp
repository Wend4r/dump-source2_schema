#pragma once

#include <cstdint>

struct CCSGameModeRules_Deathmatch;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x100
// Has VTable
// 
// MPulseInstanceDomainInfo
// MPulseDomainHookInfo
// MPulseLibraryBindings
// MPulseDomainOptInFeatureTag
class CCSDeathmatchScript : public CCSGameModeScript
{
public:
	CCSGameModeRules_Deathmatch* m_pOuter; // 0xf8	
};

