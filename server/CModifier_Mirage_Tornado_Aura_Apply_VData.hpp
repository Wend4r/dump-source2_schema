#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x660
// Has VTable
// 
// MGetKV3ClassDefaults
class CModifier_Mirage_Tornado_Aura_Apply_VData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_TossModifier; // 0x630	
	CEmbeddedSubclass< CCitadelModifier > m_LiftModifier; // 0x640	
	CSoundEventName m_strHitConfirmSound; // 0x650	
};

