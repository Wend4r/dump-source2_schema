#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x548
// Has VTable
class CPointTemplate : public CLogicalEntity
{
public:
	CUtlSymbolLarge m_iszWorldName; // 0x4e0	
	CUtlSymbolLarge m_iszSource2EntityLumpName; // 0x4e8	
	CUtlSymbolLarge m_iszEntityFilterName; // 0x4f0	
	float m_flTimeoutInterval; // 0x4f8	
	bool m_bAsynchronouslySpawnEntities; // 0x4fc	
private:
	[[maybe_unused]] uint8_t __pad04fd[0x3]; // 0x4fd
public:
	PointTemplateClientOnlyEntityBehavior_t m_clientOnlyEntityBehavior; // 0x500	
	PointTemplateOwnerSpawnGroupType_t m_ownerSpawnGroupType; // 0x504	
	CUtlVector< uint32 > m_createdSpawnGroupHandles; // 0x508	
	CUtlVector< CEntityHandle > m_SpawnedEntityHandles; // 0x520	
	HSCRIPT m_ScriptSpawnCallback; // 0x538	
	HSCRIPT m_ScriptCallbackScope; // 0x540	
};

