#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x550
// Has VTable
class CPointTemplate : public CLogicalEntity
{
public:
	CUtlSymbolLarge m_iszWorldName; // 0x4e8	
	CUtlSymbolLarge m_iszSource2EntityLumpName; // 0x4f0	
	CUtlSymbolLarge m_iszEntityFilterName; // 0x4f8	
	float m_flTimeoutInterval; // 0x500	
	bool m_bAsynchronouslySpawnEntities; // 0x504	
private:
	[[maybe_unused]] uint8_t __pad0505[0x3]; // 0x505
public:
	PointTemplateClientOnlyEntityBehavior_t m_clientOnlyEntityBehavior; // 0x508	
	PointTemplateOwnerSpawnGroupType_t m_ownerSpawnGroupType; // 0x50c	
	CUtlVector< uint32 > m_createdSpawnGroupHandles; // 0x510	
	CUtlVector< CEntityHandle > m_SpawnedEntityHandles; // 0x528	
	HSCRIPT m_ScriptSpawnCallback; // 0x540	
	HSCRIPT m_ScriptCallbackScope; // 0x548	
};

