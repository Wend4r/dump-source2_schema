#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x110
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_SpiderAnimatingVData : public CEntitySubclassVDataBase
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_sModelName; // 0x28	
	float m_flModelScale; // 0x108	
	Color m_cGlowColor; // 0x10c	
};

