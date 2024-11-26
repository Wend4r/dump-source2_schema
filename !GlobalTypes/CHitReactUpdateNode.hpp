#pragma once

#include <cstdint>

struct HitReactFixedSettings_t;
struct CAnimParamHandle;
// Registered binary: animationsystem.dll (project 'animgraphlib')
// Alignment: 8
// Size: 0xd0
// Has VTable
// 
// MGetKV3ClassDefaults
class CHitReactUpdateNode : public CUnaryUpdateNode
{
public:
	HitReactFixedSettings_t m_opFixedSettings; // 0x70	
private:
	[[maybe_unused]] uint8_t __pad00b4[0x8]; // 0xb4
public:
	CAnimParamHandle m_triggerParam; // 0xbc	
	CAnimParamHandle m_hitBoneParam; // 0xbe	
	CAnimParamHandle m_hitOffsetParam; // 0xc0	
	CAnimParamHandle m_hitDirectionParam; // 0xc2	
	CAnimParamHandle m_hitStrengthParam; // 0xc4	
private:
	[[maybe_unused]] uint8_t __pad00c6[0x2]; // 0xc6
public:
	float m_flMinDelayBetweenHits; // 0xc8	
	bool m_bResetChild; // 0xcc	
};

