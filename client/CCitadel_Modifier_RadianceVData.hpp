#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x890
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_RadianceVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_RadianceFxParticle; // 0x5e0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_RadianceDamageParticle; // 0x6c0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ClientsideDamageParticle; // 0x7a0	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strDamageRecievedSound; // 0x880	
};

