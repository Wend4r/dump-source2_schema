#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1a8
// Has VTable
class CModifier_Upgrade_ArcaneSurge_AbilityWatcher : public CCitadelModifier
{
public:
	CHandle< CCitadelBaseAbility > m_hBuffedAbility; // 0xc0	
	bool m_bRecastingBuffedAbility; // 0xc4	
};

