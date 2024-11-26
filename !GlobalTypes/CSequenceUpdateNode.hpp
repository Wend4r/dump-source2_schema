#pragma once

#include <cstdint>

struct HSequence;
struct CParamSpanUpdater;
// Registered binary: animationsystem.dll (project 'animgraphlib')
// Alignment: 8
// Size: 0xb0
// Has VTable
// 
// MGetKV3ClassDefaults
class CSequenceUpdateNode : public CSequenceUpdateNodeBase
{
public:
	HSequence m_hSequence; // 0x78	
	float m_duration; // 0x7c	
	CParamSpanUpdater m_paramSpans; // 0x80	
	CUtlVector< TagSpan_t > m_tags; // 0x98	
};

