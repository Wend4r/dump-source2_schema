#pragma once

#include <cstdint>

struct CBlendCurve;
struct CAnimParamHandle;
// Registered binary: animationsystem.dll (project 'animgraphlib')
// Alignment: 8
// Size: 0xb8
// Has VTable
// 
// MGetKV3ClassDefaults
class CSelectorUpdateNode : public CAnimUpdateNodeBase
{
private:
	[[maybe_unused]] uint8_t __pad0058[0x8]; // 0x58
public:
	CUtlVector< CAnimUpdateNodeRef > m_children; // 0x60	
	CUtlVector< int8 > m_tags; // 0x78	
private:
	[[maybe_unused]] uint8_t __pad0090[0x4]; // 0x90
public:
	CBlendCurve m_blendCurve; // 0x94	
	CAnimValue< float32 > m_flBlendTime; // 0x9c	
	CAnimParamHandle m_hParameter; // 0xa4	
private:
	[[maybe_unused]] uint8_t __pad00a6[0x2]; // 0xa6
public:
	int32_t m_nTagIndex; // 0xa8	
	SelectorTagBehavior_t m_eTagBehavior; // 0xac	
	bool m_bResetOnChange; // 0xb0	
	bool m_bLockWhenWaning; // 0xb1	
	bool m_bSyncCyclesOnChange; // 0xb2	
};

