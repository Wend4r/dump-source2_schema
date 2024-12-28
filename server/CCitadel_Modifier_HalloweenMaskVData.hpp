#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x718
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_HalloweenMaskVData : public CCitadelModifierVData
{
public:
	int32_t m_nNumMasks; // 0x630	
private:
	[[maybe_unused]] uint8_t __pad0634[0x4]; // 0x634
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_HalloweenMask; // 0x638	
};

