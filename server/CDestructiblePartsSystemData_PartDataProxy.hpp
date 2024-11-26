#pragma once

#include <cstdint>

struct CDestructiblePartsSystemData_PartData;
struct CDestructiblePartsSystemData_PartRuntimeData;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x10
// Has Trivial Destructor
// 
// MGetKV3ClassDefaults
class CDestructiblePartsSystemData_PartDataProxy
{
public:
	CDestructiblePartsSystemData_PartData* m_pModelAndDefaultRuntimeData; // 0x0	
	CDestructiblePartsSystemData_PartRuntimeData* m_pOverrideRuntimeData; // 0x8	
};

