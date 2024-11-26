#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x708
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_TargetPracticeSelfVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TracerParticle; // 0x608	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strWeaponShootSound; // 0x6e8	
	CSoundEventName m_strBulletWhizSound; // 0x6f8	
};

