#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x88
// 
// MGetKV3ClassDefaults
struct CitadelCameraOperationsSequence_t
{
public:
	// MPropertySuppressField
	CUtlStringToken m_strToken; // 0x0	
	// MPropertySuppressField
	bool m_bIsEmpty; // 0x4	
private:
	[[maybe_unused]] uint8_t __pad0005[0x3]; // 0x5
public:
	// MPropertyDescription "Priority is the first test when seeing which camera context is currently being used. Higher priorty wins."
	int32_t m_nPriority; // 0x8	
private:
	[[maybe_unused]] uint8_t __pad000c[0x4]; // 0xc
public:
	CUtlVector< CitadelCameraDistanceOperationDef_t > m_vecDistanceOperations; // 0x10	
	CUtlVector< CitadelCameraFOVOperationDef_t > m_vecFOVOperations; // 0x28	
	CUtlVector< CitadelCameraTargetPosOperationDef_t > m_vecTargetPosOperations; // 0x40	
	CUtlVector< CitadelCameraVertOffsetOperationDef_t > m_vecVertOffsetOperations; // 0x58	
	CUtlVector< CitadelCameraHorizOffsetOperationDef_t > m_vecHorizOffsetOperations; // 0x70	
};

