#pragma once

#include <cstdint>

struct CModifierLevelFloat;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x640
// Has VTable
// 
// MGetKV3ClassDefaults
class CModifierVData_BaseAura : public CCitadelModifierVData
{
public:
	eAuraShapeType m_eAuraShapeType; // 0x608	
	// MPropertySuppressExpr "m_eAuraShapeType != k_eAuraShapeTypeSphere"
	CModifierLevelFloat m_flAuraRadius; // 0x60c	
	// MPropertySuppressExpr "m_eAuraShapeType != k_eAuraShapeTypeEntityBased"
	CModifierLevelFloat m_flAuraEntityBoundsScale; // 0x61c	
	int32_t m_nAmbientParticleRadiusControlPoint; // 0x62c	
	// MPropertyDescription "Aura - Modifier to Apply"
	// MPropertyFriendlyName "Modifier Provided By Aura"
	CEmbeddedSubclass< CBaseModifier > m_modifierProvidedByAura; // 0x630	
};

