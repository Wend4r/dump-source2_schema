#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x16a8
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Item_ModDisruptorVData : public CitadelItemVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DetonateParticle; // 0x15b0	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_DisruptModifier; // 0x1690	
	// MPropertyStartGroup "Gameplay"
	float m_flWaveSpeed; // 0x16a0	
};

