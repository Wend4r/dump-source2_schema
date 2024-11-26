#pragma once

#include <cstdint>

struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x620
// Has VTable
class CMultiSource : public CLogicalEntity
{
public:
	CHandle< CBaseEntity > m_rgEntities[32]; // 0x4e8	
	int32_t m_rgTriggered[32]; // 0x568	
	CEntityIOOutput m_OnTrigger; // 0x5e8	
	int32_t m_iTotal; // 0x610	
private:
	[[maybe_unused]] uint8_t __pad0614[0x4]; // 0x614
public:
	CUtlSymbolLarge m_globalstate; // 0x618	
	
	// Datamap fields:
	// void CMultiSourceRegister; // 0x0
};

