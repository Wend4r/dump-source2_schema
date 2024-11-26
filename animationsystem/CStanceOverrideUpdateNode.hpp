#pragma once

#include <cstdint>

struct CAnimUpdateNodeRef;
struct CAnimParamHandle;
// Registered binary: animationsystem.dll (project 'animgraphlib')
// Alignment: 8
// Size: 0xa0
// Has VTable
// 
// MGetKV3ClassDefaults
class CStanceOverrideUpdateNode : public CUnaryUpdateNode
{
public:
	CUtlVector< StanceInfo_t > m_footStanceInfo; // 0x70	
	CAnimUpdateNodeRef m_pStanceSourceNode; // 0x88	
	CAnimParamHandle m_hParameter; // 0x98	
private:
	[[maybe_unused]] uint8_t __pad009a[0x2]; // 0x9a
public:
	StanceOverrideMode m_eMode; // 0x9c	
};

