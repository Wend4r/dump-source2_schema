#pragma once

#include <cstdint>

struct CTakeDamageInfo;
struct CTakeDamageResult;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x118
struct SummaryTakeDamageInfo_t
{
public:
	int32_t nSummarisedCount; // 0x0	
	CTakeDamageInfo info; // 0x8	
	// -> m_pOriginatingInfo - 0xf0
	// -> m_nHealthLost - 0xf8
	// -> m_nDamageTaken - 0xfc
	// -> m_nTotalledHealthLost - 0x100
	// -> m_nTotalledDamageTaken - 0x104
	// -> m_flTotalledDamageAbsorbed - 0x108
	CTakeDamageResult result; // 0xf0	
	CHandle< CBaseEntity > hTarget; // 0x110	
};

