#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1a8
// Has VTable
class CModifier_Upgrade_ArcaneSurge_AbilityWatcher : public CCitadelModifier
{
public:
	CHandle< C_CitadelBaseAbility > m_hBuffedAbility; // 0xc0	
	bool m_bRecastingBuffedAbility; // 0xc4	
};

