#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x638
// Has VTable
// 
// MGetKV3ClassDefaults
class CModifier_Mirage_Tornado_Aura_Apply_VData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_TossModifier; // 0x608	
	CEmbeddedSubclass< CCitadelModifier > m_LiftModifier; // 0x618	
	CSoundEventName m_strHitConfirmSound; // 0x628	
};

