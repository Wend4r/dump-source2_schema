#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x530
// Has VTable
class CSoundOpvarSetEntity : public CBaseEntity
{
private:
	[[maybe_unused]] uint8_t __pad04e8[0x8]; // 0x4e8
public:
	CUtlSymbolLarge m_iszStackName; // 0x4f0	
	CUtlSymbolLarge m_iszOperatorName; // 0x4f8	
	CUtlSymbolLarge m_iszOpvarName; // 0x500	
	int32_t m_nOpvarType; // 0x508	
	int32_t m_nOpvarIndex; // 0x50c	
	float m_flOpvarValue; // 0x510	
private:
	[[maybe_unused]] uint8_t __pad0514[0x4]; // 0x514
public:
	CUtlSymbolLarge m_OpvarValueString; // 0x518	
	bool m_bSetOnSpawn; // 0x520	
	
	// Datamap fields:
	// uint64_t InputSetEventGuid; // 0x0
	// CUtlSymbolLarge InputSetStackName; // 0x0
	// CUtlSymbolLarge InputSetOperatorName; // 0x0
	// CUtlSymbolLarge InputSetOpvarName; // 0x0
	// int32_t InputSetOpvarIndex; // 0x0
	// void InputSetOpvar; // 0x0
	// float InputChangeOpvarValue; // 0x0
	// float InputChangeOpvarValueAndSet; // 0x0
	// void m_nGUID; // 0x4e8
	// void m_LastOpvarValueString; // 0x528
};

