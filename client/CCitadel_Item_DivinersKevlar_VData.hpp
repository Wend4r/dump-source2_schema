#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x15c8
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Item_DivinersKevlar_VData : public CitadelItemVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_BuffModifier; // 0x15a8	
	CEmbeddedSubclass< CCitadelModifier > m_PrecastSpiritBuffModifier; // 0x15b8	
};

