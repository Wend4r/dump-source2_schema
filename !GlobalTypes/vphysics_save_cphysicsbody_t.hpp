#pragma once

#include <cstdint>

// Registered binary: vphysics2.dll (project 'vphysics2')
// Alignment: 8
// Size: 0xf0
// 
// MGetKV3ClassDefaults
struct vphysics_save_cphysicsbody_t : public RnBodyDesc_t
{
public:
	uint64_t m_nOldPointer; // 0xd0	
	CUtlVector< CGlobalSymbol > m_RemovedHitGroups; // 0xd8	
};

