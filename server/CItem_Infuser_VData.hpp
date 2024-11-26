#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1698
// Has VTable
// 
// MGetKV3ClassDefaults
class CItem_Infuser_VData : public CitadelItemVData
{
public:
	// MPropertyGroupName "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_BuffModifier; // 0x15a8	
	// MPropertyGroupName "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CastParticle; // 0x15b8	
};

