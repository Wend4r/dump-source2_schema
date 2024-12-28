#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x5c8
// Has VTable
class CPointTemplate : public CLogicalEntity
{
public:
	CUtlSymbolLarge m_iszWorldName; // 0x560	
	CUtlSymbolLarge m_iszSource2EntityLumpName; // 0x568	
	CUtlSymbolLarge m_iszEntityFilterName; // 0x570	
	float m_flTimeoutInterval; // 0x578	
	bool m_bAsynchronouslySpawnEntities; // 0x57c	
private:
	[[maybe_unused]] uint8_t __pad057d[0x3]; // 0x57d
public:
	PointTemplateClientOnlyEntityBehavior_t m_clientOnlyEntityBehavior; // 0x580	
	PointTemplateOwnerSpawnGroupType_t m_ownerSpawnGroupType; // 0x584	
	CUtlVector< uint32 > m_createdSpawnGroupHandles; // 0x588	
	CUtlVector< CEntityHandle > m_SpawnedEntityHandles; // 0x5a0	
	HSCRIPT m_ScriptSpawnCallback; // 0x5b8	
	HSCRIPT m_ScriptCallbackScope; // 0x5c0	
};

