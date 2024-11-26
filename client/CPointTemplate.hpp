#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x5d0
// Has VTable
class CPointTemplate : public CLogicalEntity
{
public:
	CUtlSymbolLarge m_iszWorldName; // 0x568	
	CUtlSymbolLarge m_iszSource2EntityLumpName; // 0x570	
	CUtlSymbolLarge m_iszEntityFilterName; // 0x578	
	float m_flTimeoutInterval; // 0x580	
	bool m_bAsynchronouslySpawnEntities; // 0x584	
private:
	[[maybe_unused]] uint8_t __pad0585[0x3]; // 0x585
public:
	PointTemplateClientOnlyEntityBehavior_t m_clientOnlyEntityBehavior; // 0x588	
	PointTemplateOwnerSpawnGroupType_t m_ownerSpawnGroupType; // 0x58c	
	CUtlVector< uint32 > m_createdSpawnGroupHandles; // 0x590	
	CUtlVector< CEntityHandle > m_SpawnedEntityHandles; // 0x5a8	
	HSCRIPT m_ScriptSpawnCallback; // 0x5c0	
	HSCRIPT m_ScriptCallbackScope; // 0x5c8	
};

