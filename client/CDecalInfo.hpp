#pragma once

#include <cstdint>

struct CDecalInfo;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xb8
class CDecalInfo
{
public:
	float m_flAnimationScale; // 0x0	
	float m_flAnimationLifeSpan; // 0x4	
	float m_flPlaceTime; // 0x8	
	float m_flFadeStartTime; // 0xc	
	float m_flFadeDuration; // 0x10	
	int32_t m_nVBSlot; // 0x14	
	int32_t m_nBoneIndex; // 0x18	
private:
	[[maybe_unused]] uint8_t __pad001c[0xc]; // 0x1c
public:
	CDecalInfo* m_pNext; // 0x28	
	CDecalInfo* m_pPrev; // 0x30	
private:
	[[maybe_unused]] uint8_t __pad0038[0x78]; // 0x38
public:
	int32_t m_nDecalMaterialIndex; // 0xb0	
	
	// Datamap fields:
	// void m_decalEvent; // 0x38
	// void m_hProjectedDecal; // 0x20
};

